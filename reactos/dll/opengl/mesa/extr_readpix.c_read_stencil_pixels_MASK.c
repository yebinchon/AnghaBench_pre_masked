
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t Alignment; scalar_t__ RowLength; size_t SkipRows; size_t SkipPixels; int SwapBytes; } ;
struct TYPE_9__ {size_t IndexShift; scalar_t__ IndexOffset; size_t* MapStoS; scalar_t__ MapStencilFlag; } ;
struct TYPE_11__ {TYPE_3__ Pack; TYPE_2__ Pixel; TYPE_1__* Visual; } ;
struct TYPE_8__ {scalar_t__ StencilBits; } ;
typedef int GLvoid ;
typedef int GLushort ;
typedef size_t GLuint ;
typedef size_t GLubyte ;
typedef scalar_t__ GLsizei ;
typedef int GLshort ;
typedef scalar_t__ GLint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef TYPE_4__ GLcontext ;
typedef size_t GLbyte ;
typedef int GLboolean ;


 size_t FUNC_0 (size_t,size_t) ;



 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_1 (size_t*,size_t*,scalar_t__) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int FUNC_3 (TYPE_4__*,scalar_t__,scalar_t__,scalar_t__,size_t*) ;
 size_t FUNC_4 (int) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (size_t*,scalar_t__) ;

__attribute__((used)) static void FUNC_7( GLcontext *VAR_3,
                                 GLint VAR_4, GLint VAR_5,
     GLsizei VAR_6, GLsizei VAR_7,
     GLenum VAR_8, GLvoid *VAR_9 )
{
   GLint VAR_10, VAR_11;
   GLuint VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
   GLboolean VAR_17;

   if (VAR_3->Visual->StencilBits<=0) {

      FUNC_2( VAR_3, VAR_1, "glReadPixels" );
      return;
   }

   VAR_17 = VAR_3->Pixel.IndexShift!=0 || VAR_3->Pixel.IndexOffset!=0;


   VAR_13 = FUNC_4( VAR_8 );
   if (VAR_13<=0) {
      FUNC_2( VAR_3, VAR_0, "glReadPixels(type)" );
      return;
   }


   VAR_12 = VAR_3->Pack.Alignment;
   if (VAR_3->Pack.RowLength>0) {
      VAR_15 = VAR_3->Pack.RowLength;
   }
   else {
      VAR_15 = VAR_6;
   }

   if (VAR_13>=VAR_12) {
      VAR_14 = VAR_15;
   }
   else {
      VAR_14 = VAR_12/VAR_13 * FUNC_0( VAR_13*VAR_15, VAR_12 );
   }


   VAR_16 = VAR_3->Pack.SkipRows * VAR_14 + VAR_3->Pack.SkipPixels;


   for (VAR_11=0;VAR_11<VAR_7;VAR_11++,VAR_5++) {
      GLubyte VAR_18[VAR_2];

      FUNC_3( VAR_3, VAR_6, VAR_4, VAR_5, VAR_18 );

      if (VAR_17) {
  GLuint VAR_19;
  if (VAR_3->Pixel.IndexShift<0) {

     VAR_19 = -VAR_3->Pixel.IndexShift;
     for (VAR_10=0;VAR_10<VAR_6;VAR_10++) {
        VAR_18[VAR_10] = (VAR_18[VAR_10] >> VAR_19) + VAR_3->Pixel.IndexOffset;
     }
  }
  else {

     VAR_19 = VAR_3->Pixel.IndexShift;
     for (VAR_10=0;VAR_10<VAR_6;VAR_10++) {
        VAR_18[VAR_10] = (VAR_18[VAR_10] << VAR_19) + VAR_3->Pixel.IndexOffset;
     }
  }
      }

      if (VAR_3->Pixel.MapStencilFlag) {
  for (VAR_10=0;VAR_10<VAR_6;VAR_10++) {
     VAR_18[VAR_10] = VAR_3->Pixel.MapStoS[ VAR_18[VAR_10] ];
  }
      }

      switch (VAR_8) {
  case 130:
     {
        GLubyte *VAR_20 = (GLubyte *) VAR_9 + VAR_16 + VAR_11 * VAR_14;
        FUNC_1( VAR_20, VAR_18, VAR_6 );
     }
     break;
  case 134:
     {
        GLbyte *VAR_21 = (GLbyte *) VAR_9 + VAR_16 + VAR_11 * VAR_14;
        FUNC_1( VAR_21, VAR_18, VAR_6 );
     }
     break;
  case 128:
     {
        GLushort *VAR_22 = (GLushort *) VAR_9 + VAR_16 + VAR_11 * VAR_14;
        for (VAR_10=0;VAR_10<VAR_6;VAR_10++) {
    *VAR_22++ = (GLushort) VAR_18[VAR_10];
        }
        if (VAR_3->Pack.SwapBytes) {
    FUNC_5( (GLushort *) VAR_9 + VAR_16 +VAR_11 * VAR_14, VAR_6 );
        }
     }
     break;
  case 131:
     {
        GLshort *VAR_23 = (GLshort *) VAR_9 + VAR_16 + VAR_11 * VAR_14;
        for (VAR_10=0;VAR_10<VAR_6;VAR_10++) {
    *VAR_23++ = (GLshort) VAR_18[VAR_10];
        }
        if (VAR_3->Pack.SwapBytes) {
    FUNC_5( (GLushort *) VAR_9 + VAR_16 +VAR_11 * VAR_14, VAR_6 );
        }
     }
     break;
  case 129:
     {
        GLuint *VAR_24 = (GLuint *) VAR_9 + VAR_16 + VAR_11 * VAR_14;
        for (VAR_10=0;VAR_10<VAR_6;VAR_10++) {
    *VAR_24++ = (GLuint) VAR_18[VAR_10];
        }
        if (VAR_3->Pack.SwapBytes) {
    FUNC_6( (GLuint *) VAR_9 + VAR_16 +VAR_11 * VAR_14, VAR_6 );
        }
     }
     break;
  case 132:
     {
        GLint *VAR_25 = (GLint *) VAR_9 + VAR_16 + VAR_11 * VAR_14;
        for (VAR_10=0;VAR_10<VAR_6;VAR_10++) {
    *VAR_25++ = (GLint) VAR_18[VAR_10];
        }
        if (VAR_3->Pack.SwapBytes) {
    FUNC_6( (GLuint *) VAR_9 + VAR_16 +VAR_11 * VAR_14, VAR_6 );
        }
     }
     break;
  case 133:
     {
        GLfloat *VAR_26 = (GLfloat *) VAR_9 + VAR_16 + VAR_11 * VAR_14;
        for (VAR_10=0;VAR_10<VAR_6;VAR_10++) {
    *VAR_26++ = (GLfloat) VAR_18[VAR_10];
        }
        if (VAR_3->Pack.SwapBytes) {
    FUNC_6( (GLuint *) VAR_9 + VAR_16 +VAR_11 * VAR_14, VAR_6 );
        }
     }
     break;
         default:
            FUNC_2( VAR_3, VAR_0, "glReadPixels(type)" );
      }
   }
}
