
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {double DepthBias; double DepthScale; double ZoomX; double ZoomY; } ;
struct TYPE_12__ {int* RasterColor; size_t RasterIndex; scalar_t__* RasterPos; } ;
struct TYPE_14__ {TYPE_3__* Visual; TYPE_1__ Pixel; TYPE_2__ Current; } ;
struct TYPE_13__ {int RedScale; int GreenScale; int BlueScale; int AlphaScale; scalar_t__ RGBAflag; } ;
typedef int GLvoid ;
typedef int GLushort ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef size_t GLsizei ;
typedef int GLshort ;
typedef scalar_t__ GLint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef size_t GLdepth ;
typedef TYPE_4__ GLcontext ;
typedef int GLbyte ;
typedef int GLboolean ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,float,float) ;
 int VAR_0 ;
 int VAR_1 ;







 int FUNC_2 (int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,scalar_t__,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_4__*,char*) ;
 int FUNC_9 (TYPE_4__*,size_t,scalar_t__,scalar_t__,size_t*,int *,int *,int *,int *,int ) ;
 int FUNC_10 (TYPE_4__*,size_t,scalar_t__,scalar_t__,size_t*,size_t*,int ) ;
 int FUNC_11 (TYPE_4__*,size_t,scalar_t__,scalar_t__,size_t*,int *,int *,int *,int *,scalar_t__) ;
 int FUNC_12 (TYPE_4__*,size_t,scalar_t__,scalar_t__,size_t*,size_t*,int ) ;

__attribute__((used)) static void FUNC_13( GLcontext* VAR_4, GLsizei VAR_5, GLsizei VAR_6,
          GLenum VAR_7, const GLvoid *VAR_8 )
{
   GLint VAR_9, VAR_10, VAR_11;
   GLubyte VAR_12[VAR_3], VAR_13[VAR_3], VAR_14[VAR_3], VAR_15[VAR_3];
   GLuint VAR_16[VAR_3];
   GLboolean VAR_17;
   GLboolean VAR_18;

   VAR_17 = VAR_4->Pixel.DepthBias!=0.0 || VAR_4->Pixel.DepthScale!=1.0;
   VAR_18 = VAR_4->Pixel.ZoomX!=1.0 || VAR_4->Pixel.ZoomY!=1.0;


   VAR_9 = (GLint) (VAR_4->Current.RasterPos[0] + 0.5F);
   VAR_10 = (GLint) (VAR_4->Current.RasterPos[1] + 0.5F);
   VAR_11 = VAR_10;


   if (VAR_4->Visual->RGBAflag) {
      GLint VAR_19, VAR_20, VAR_21, VAR_22;
      VAR_19 = (GLint) (VAR_4->Current.RasterColor[0] * VAR_4->Visual->RedScale);
      VAR_20 = (GLint) (VAR_4->Current.RasterColor[1] * VAR_4->Visual->GreenScale);
      VAR_21 = (GLint) (VAR_4->Current.RasterColor[2] * VAR_4->Visual->BlueScale);
      VAR_22 = (GLint) (VAR_4->Current.RasterColor[3] * VAR_4->Visual->AlphaScale);
      FUNC_3( VAR_12, VAR_19, VAR_5 );
      FUNC_3( VAR_13, VAR_20, VAR_5 );
      FUNC_3( VAR_14, VAR_21, VAR_5 );
      FUNC_3( VAR_15, VAR_22, VAR_5 );
   }
   else {
      GLuint VAR_23;
      for (VAR_23=0;VAR_23<VAR_5;VAR_23++) {
  VAR_16[VAR_23] = VAR_4->Current.RasterIndex;
      }
   }

   if (VAR_7==129 && !VAR_17 && !VAR_18 && VAR_4->Visual->RGBAflag)
   {

      GLuint VAR_24, VAR_25;

      GLuint VAR_26 = 0;
      GLuint VAR_27 = VAR_2;
      while ((VAR_27&0x80000000)==0) {
         VAR_27 = VAR_27 << 1;
         VAR_26++;
      }
      for (VAR_25=0;VAR_25<VAR_6;VAR_25++,VAR_10++) {
         GLdepth VAR_28[VAR_3];
         GLuint *VAR_29 = (GLuint *) VAR_8 + VAR_25 * VAR_5;
         for (VAR_24=0;VAR_24<VAR_5;VAR_24++) {
            VAR_28[VAR_24] = VAR_29[VAR_24] >> VAR_26;
         }
         FUNC_9( VAR_4, VAR_5, VAR_9, VAR_10, VAR_28,
                              VAR_12, VAR_13, VAR_14, VAR_15, VAR_1 );
      }
   }
   else {

      GLuint VAR_30, VAR_31;


      for (VAR_30=0;VAR_30<VAR_6;VAR_30++,VAR_10++) {
         GLfloat VAR_32[VAR_3];
         GLdepth VAR_33[VAR_3];

         switch (VAR_7) {
            case 130:
               {
                  GLubyte *VAR_34 = (GLubyte *) VAR_8 + VAR_30 * VAR_5;
                  for (VAR_31=0;VAR_31<VAR_5;VAR_31++) {
                     VAR_32[VAR_31] = FUNC_5( *VAR_34++ );
                  }
               }
               break;
            case 134:
               {
                  GLbyte *VAR_35 = (GLbyte *) VAR_8 + VAR_30 * VAR_5;
                  for (VAR_31=0;VAR_31<VAR_5;VAR_31++) {
                     VAR_32[VAR_31] = FUNC_0( *VAR_35++ );
                  }
               }
               break;
            case 128:
               {
                  GLushort *VAR_36 = (GLushort *) VAR_8 + VAR_30 * VAR_5;
                  for (VAR_31=0;VAR_31<VAR_5;VAR_31++) {
                     VAR_32[VAR_31] = FUNC_7( *VAR_36++ );
                  }
               }
               break;
            case 131:
               {
                  GLshort *VAR_37 = (GLshort *) VAR_8 + VAR_30 * VAR_5;
                  for (VAR_31=0;VAR_31<VAR_5;VAR_31++) {
                     VAR_32[VAR_31] = FUNC_4( *VAR_37++ );
                  }
               }
               break;
            case 129:
               {
                  GLuint *VAR_38 = (GLuint *) VAR_8 + VAR_30 * VAR_5;
                  for (VAR_31=0;VAR_31<VAR_5;VAR_31++) {
                     VAR_32[VAR_31] = FUNC_6( *VAR_38++ );
                  }
               }
               break;
            case 132:
               {
                  GLint *VAR_39 = (GLint *) VAR_8 + VAR_30 * VAR_5;
                  for (VAR_31=0;VAR_31<VAR_5;VAR_31++) {
                     VAR_32[VAR_31] = FUNC_2( *VAR_39++ );
                  }
               }
               break;
            case 133:
               {
                  GLfloat *VAR_40 = (GLfloat *) VAR_8 + VAR_30 * VAR_5;
                  for (VAR_31=0;VAR_31<VAR_5;VAR_31++) {
                     VAR_32[VAR_31] = *VAR_40++;
                  }
               }
               break;
            default:
               FUNC_8(VAR_4, "Bad type in draw_depth_pixels");
               return;
         }


         if (VAR_4->Pixel.DepthScale!=1.0 || VAR_4->Pixel.DepthBias!=0.0) {
            for (VAR_31=0;VAR_31<VAR_5;VAR_31++) {
               VAR_32[VAR_31] = VAR_32[VAR_31] * VAR_4->Pixel.DepthScale + VAR_4->Pixel.DepthBias;
            }
         }


         for (VAR_31=0;VAR_31<VAR_5;VAR_31++) {
            VAR_33[VAR_31] = (GLdepth) (FUNC_1( VAR_32[VAR_31], 0.0F, 1.0F ) * VAR_0);
         }

         if (VAR_4->Visual->RGBAflag) {
            if (VAR_18) {
               FUNC_11( VAR_4, VAR_5, VAR_9, VAR_10, VAR_33,
                                           VAR_12, VAR_13, VAR_14, VAR_15, VAR_11 );
            }
            else {
               FUNC_9( VAR_4, VAR_5, VAR_9, VAR_10, VAR_33,
                                    VAR_12, VAR_13, VAR_14, VAR_15, VAR_1 );
            }
         }
         else {
            if (VAR_18) {
               FUNC_12( VAR_4, VAR_5, VAR_9, VAR_10, VAR_33,
                                           VAR_16, VAR_1 );
            }
            else {
               FUNC_10( VAR_4, VAR_5, VAR_9, VAR_10, VAR_33, VAR_16, VAR_1 );
            }
         }

      }
   }
}
