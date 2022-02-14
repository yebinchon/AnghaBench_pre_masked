
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int Alignment; scalar_t__ RowLength; int SkipRows; int SkipPixels; scalar_t__ SwapBytes; } ;
struct TYPE_12__ {double DepthBias; double DepthScale; } ;
struct TYPE_11__ {int (* ReadDepthSpanFloat ) (TYPE_5__*,int,int,int,int*) ;int (* ReadDepthSpanInt ) (TYPE_5__*,int,int,int,int *) ;} ;
struct TYPE_14__ {TYPE_4__ Pack; TYPE_3__ Pixel; TYPE_2__ Driver; TYPE_1__* Visual; } ;
struct TYPE_10__ {scalar_t__ DepthBits; } ;
typedef int GLvoid ;
typedef int GLushort ;
typedef int GLuint ;
typedef int GLubyte ;
typedef int GLsizei ;
typedef int GLshort ;
typedef int GLint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef int GLdepth ;
typedef TYPE_5__ GLcontext ;
typedef int GLbyte ;
typedef int GLboolean ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,double,double) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;



 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (TYPE_5__*,int ,char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int*,int) ;
 int FUNC_12 (TYPE_5__*,int,int,int,int *) ;
 int FUNC_13 (TYPE_5__*,int,int,int,int*) ;

__attribute__((used)) static void FUNC_14( GLcontext *VAR_4,
                               GLint VAR_5, GLint VAR_6,
          GLsizei VAR_7, GLsizei VAR_8,
          GLenum VAR_9, GLvoid *VAR_10 )
{
   GLint VAR_11, VAR_12;
   GLuint VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
   GLboolean VAR_18;


   if (VAR_4->Visual->DepthBits<=0) {

      FUNC_8( VAR_4, VAR_1, "glReadPixels" );
      return;
   }

   VAR_18 = VAR_4->Pixel.DepthBias!=0.0 || VAR_4->Pixel.DepthScale!=1.0;


   VAR_14 = FUNC_9( VAR_9 );
   if (VAR_14<=0) {
      FUNC_8( VAR_4, VAR_0, "glReadPixels(type)" );
      return;
   }


   VAR_13 = VAR_4->Pack.Alignment;
   if (VAR_4->Pack.RowLength>0) {
      VAR_16 = VAR_4->Pack.RowLength;
   }
   else {
      VAR_16 = VAR_7;
   }

   if (VAR_14>=VAR_13) {
      VAR_15 = VAR_16;
   }
   else {
      VAR_15 = VAR_13/VAR_14 * FUNC_0( VAR_14*VAR_16, VAR_13 );
   }


   VAR_17 = VAR_4->Pack.SkipRows * VAR_15 + VAR_4->Pack.SkipPixels;

   if (VAR_9==129 && !VAR_18 && !VAR_4->Pack.SwapBytes) {


      GLuint VAR_19 = 0;
      GLuint VAR_20 = VAR_2;
      while ((VAR_20&0x80000000)==0) {
         VAR_20 = VAR_20 << 1;
         VAR_19++;
      }
      for (VAR_12=0;VAR_12<VAR_8;VAR_12++,VAR_6++) {
         GLuint *VAR_21 = (GLuint *) VAR_10 + VAR_17 + VAR_12 * VAR_15;
         (*VAR_4->Driver.ReadDepthSpanInt)( VAR_4, VAR_7, VAR_5, VAR_6, (GLdepth*) VAR_21);
         for (VAR_11=0;VAR_11<VAR_7;VAR_11++) {
            VAR_21[VAR_11] = VAR_21[VAR_11] << VAR_19;
         }
      }
   }
   else {

      for (VAR_12=0;VAR_12<VAR_8;VAR_12++,VAR_6++) {
         GLfloat VAR_22[VAR_3];

         (*VAR_4->Driver.ReadDepthSpanFloat)( VAR_4, VAR_7, VAR_5, VAR_6, VAR_22 );

         if (VAR_18) {
            for (VAR_11=0;VAR_11<VAR_7;VAR_11++) {
               GLfloat VAR_23;
               VAR_23 = VAR_22[VAR_11] * VAR_4->Pixel.DepthScale + VAR_4->Pixel.DepthBias;
               VAR_22[VAR_11] = FUNC_1( VAR_23, 0.0, 1.0 );
            }
         }

         switch (VAR_9) {
            case 130:
               {
                  GLubyte *VAR_24 = (GLubyte *) VAR_10 + VAR_17 + VAR_12 * VAR_15;
                  for (VAR_11=0;VAR_11<VAR_7;VAR_11++) {
                     *VAR_24++ = FUNC_5( VAR_22[VAR_11] );
                  }
               }
               break;
            case 134:
               {
                  GLbyte *VAR_25 = (GLbyte *) VAR_10 + VAR_17 + VAR_12 * VAR_15;
                  for (VAR_11=0;VAR_11<VAR_7;VAR_11++) {
                     *VAR_25++ = FUNC_2( VAR_22[VAR_11] );
                  }
               }
               break;
            case 128:
               {
                  GLushort *VAR_26 = (GLushort *) VAR_10 + VAR_17 + VAR_12 * VAR_15;
                  for (VAR_11=0;VAR_11<VAR_7;VAR_11++) {
                     *VAR_26++ = FUNC_7( VAR_22[VAR_11] );
                  }
                  if (VAR_4->Pack.SwapBytes) {
                     FUNC_10( (GLushort *) VAR_10 + VAR_17 + VAR_12 * VAR_15, VAR_7 );
                  }
               }
               break;
            case 131:
               {
                  GLshort *VAR_27 = (GLshort *) VAR_10 + VAR_17 + VAR_12 * VAR_15;
                  for (VAR_11=0;VAR_11<VAR_7;VAR_11++) {
                     *VAR_27++ = FUNC_4( VAR_22[VAR_11] );
                  }
                  if (VAR_4->Pack.SwapBytes) {
                     FUNC_10( (GLushort *) VAR_10 + VAR_17 + VAR_12 * VAR_15, VAR_7 );
                  }
               }
               break;
            case 129:
               {
                  GLuint *VAR_28 = (GLuint *) VAR_10 + VAR_17 + VAR_12 * VAR_15;
                  for (VAR_11=0;VAR_11<VAR_7;VAR_11++) {
                     *VAR_28++ = FUNC_6( VAR_22[VAR_11] );
                  }
                  if (VAR_4->Pack.SwapBytes) {
                     FUNC_11( (GLuint *) VAR_10 + VAR_17 + VAR_12 * VAR_15, VAR_7 );
                  }
               }
               break;
            case 132:
               {
                  GLint *VAR_29 = (GLint *) VAR_10 + VAR_17 + VAR_12 * VAR_15;
                  for (VAR_11=0;VAR_11<VAR_7;VAR_11++) {
                     *VAR_29++ = FUNC_3( VAR_22[VAR_11] );
                  }
                  if (VAR_4->Pack.SwapBytes) {
                     FUNC_11( (GLuint *) VAR_10 + VAR_17 + VAR_12 * VAR_15, VAR_7 );
                  }
               }
               break;
            case 133:
               {
                  GLfloat *VAR_30 = (GLfloat *) VAR_10 + VAR_17 + VAR_12 * VAR_15;
                  for (VAR_11=0;VAR_11<VAR_7;VAR_11++) {
                     *VAR_30++ = VAR_22[VAR_11];
                  }
                  if (VAR_4->Pack.SwapBytes) {
                     FUNC_11( (GLuint *) VAR_10 + VAR_17 + VAR_12 * VAR_15, VAR_7 );
                  }
               }
               break;
            default:
               FUNC_8( VAR_4, VAR_0, "glReadPixels(type)" );
         }
      }
   }
}
