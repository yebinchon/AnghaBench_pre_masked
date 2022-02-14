
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {double ZoomX; double ZoomY; size_t IndexOffset; size_t IndexShift; int* MapItoR; int* MapItoG; int* MapItoB; int* MapItoA; size_t* MapItoI; scalar_t__ MapColorFlag; } ;
struct TYPE_13__ {float* RasterPos; } ;
struct TYPE_12__ {scalar_t__ Test; } ;
struct TYPE_16__ {TYPE_3__ Pixel; TYPE_4__* Visual; TYPE_2__ Current; TYPE_1__ Depth; } ;
struct TYPE_15__ {int RedScale; int GreenScale; int BlueScale; int AlphaScale; scalar_t__ RGBAflag; } ;
typedef int GLvoid ;
typedef int GLushort ;
typedef size_t GLuint ;
typedef scalar_t__ GLubyte ;
typedef size_t GLsizei ;
typedef int GLshort ;
typedef scalar_t__ GLint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef int GLdepth ;
typedef TYPE_5__ GLcontext ;
typedef int GLbyte ;
typedef int GLboolean ;


 int VAR_0 ;




 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int ,char*) ;
 int FUNC_1 (TYPE_5__*,size_t,scalar_t__,scalar_t__,int *,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int const) ;
 int FUNC_2 (TYPE_5__*,size_t,scalar_t__,scalar_t__,int *,size_t*,int const) ;
 int FUNC_3 (TYPE_5__*,size_t,scalar_t__,scalar_t__,int *,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_4 (TYPE_5__*,size_t,scalar_t__,scalar_t__,int *,size_t*,scalar_t__) ;

__attribute__((used)) static void FUNC_5( GLcontext* VAR_3, GLsizei VAR_4, GLsizei VAR_5,
          GLenum VAR_6, const GLvoid *VAR_7 )
{
   GLint VAR_8, VAR_9, VAR_10;
   GLuint VAR_11, VAR_12;
   GLdepth VAR_13[VAR_2];
   GLboolean VAR_14;

   VAR_14 = VAR_3->Pixel.ZoomX!=1.0 || VAR_3->Pixel.ZoomY!=1.0;


   VAR_8 = (GLint) (VAR_3->Current.RasterPos[0] + 0.5F);
   VAR_9 = (GLint) (VAR_3->Current.RasterPos[1] + 0.5F);
   VAR_10 = VAR_9;
   if (VAR_3->Depth.Test) {
      GLdepth VAR_15 = (GLdepth) (VAR_3->Current.RasterPos[2] * VAR_0);
      for (VAR_11=0;VAR_11<VAR_4;VAR_11++) {
  VAR_13[VAR_11] = VAR_15;
      }
   }


   for (VAR_11=0;VAR_11<VAR_5;VAR_11++,VAR_9++) {
      GLuint VAR_16[VAR_2];


      switch (VAR_6) {
  case 130:
     {
        GLubyte *VAR_17 = (GLubyte *) VAR_7 + VAR_11 * VAR_4;
        for (VAR_12=0;VAR_12<VAR_4;VAR_12++) {
    VAR_16[VAR_12] = (GLuint) *VAR_17++;
        }
     }
     break;
  case 134:
     {
        GLbyte *VAR_18 = (GLbyte *) VAR_7 + VAR_11 * VAR_4;
        for (VAR_12=0;VAR_12<VAR_4;VAR_12++) {
    VAR_16[VAR_12] = (GLuint) *VAR_18++;
        }
     }
     break;
  case 128:
     {
        GLushort *VAR_19 = (GLushort *) VAR_7 + VAR_11 * VAR_4;
        for (VAR_12=0;VAR_12<VAR_4;VAR_12++) {
    VAR_16[VAR_12] = (GLuint) *VAR_19++;
        }
     }
     break;
  case 131:
     {
        GLshort *VAR_20 = (GLshort *) VAR_7 + VAR_11 * VAR_4;
        for (VAR_12=0;VAR_12<VAR_4;VAR_12++) {
    VAR_16[VAR_12] = (GLuint) *VAR_20++;
        }
     }
     break;
  case 129:
     {
        GLuint *VAR_21 = (GLuint *) VAR_7 + VAR_11 * VAR_4;
        for (VAR_12=0;VAR_12<VAR_4;VAR_12++) {
    VAR_16[VAR_12] = *VAR_21++;
        }
     }
     break;
  case 132:
     {
        GLint *VAR_22 = (GLint *) VAR_7 + VAR_11 * VAR_4;
        for (VAR_12=0;VAR_12<VAR_4;VAR_12++) {
    VAR_16[VAR_12] = (GLuint) *VAR_22++;
        }
     }
     break;
  case 135:

     break;
  case 133:
     {
        GLfloat *VAR_23 = (GLfloat *) VAR_7 + VAR_11 * VAR_4;
        for (VAR_12=0;VAR_12<VAR_4;VAR_12++) {
    VAR_16[VAR_12] = (GLuint) (GLint) *VAR_23++;
        }
     }
     break;
  default:
     FUNC_0( VAR_3, VAR_1, "Internal: draw_index_pixels" );
      }


      if (VAR_3->Pixel.IndexOffset || VAR_3->Pixel.IndexShift) {
  if (VAR_3->Pixel.IndexShift>=0) {
     for (VAR_12=0;VAR_12<VAR_4;VAR_12++) {
        VAR_16[VAR_12] = (VAR_16[VAR_12] << VAR_3->Pixel.IndexShift)
            + VAR_3->Pixel.IndexOffset;
     }
  }
  else {
     for (VAR_12=0;VAR_12<VAR_4;VAR_12++) {
        VAR_16[VAR_12] = (VAR_16[VAR_12] >> -VAR_3->Pixel.IndexShift)
            + VAR_3->Pixel.IndexOffset;
     }
  }
      }

      if (VAR_3->Visual->RGBAflag) {

  GLubyte VAR_24[VAR_2], VAR_25[VAR_2];
  GLubyte VAR_26[VAR_2], VAR_27[VAR_2];
  for (VAR_12=0;VAR_12<VAR_4;VAR_12++) {
     VAR_24[VAR_12] = (GLint) (VAR_3->Pixel.MapItoR[VAR_16[VAR_12]] * VAR_3->Visual->RedScale);
     VAR_25[VAR_12] = (GLint) (VAR_3->Pixel.MapItoG[VAR_16[VAR_12]] * VAR_3->Visual->GreenScale);
     VAR_26[VAR_12] = (GLint) (VAR_3->Pixel.MapItoB[VAR_16[VAR_12]] * VAR_3->Visual->BlueScale);
     VAR_27[VAR_12] = (GLint) (VAR_3->Pixel.MapItoA[VAR_16[VAR_12]] * VAR_3->Visual->AlphaScale);
  }
         if (VAR_14) {
            FUNC_3( VAR_3, VAR_4, VAR_8, VAR_9, VAR_13,
                                        VAR_24, VAR_25, VAR_26, VAR_27, VAR_10 );
         }
         else {
            FUNC_1( VAR_3, VAR_4, VAR_8, VAR_9, VAR_13,
                                 VAR_24, VAR_25, VAR_26, VAR_27, 135 );
         }
      }
      else {

  if (VAR_3->Pixel.MapColorFlag) {
     for (VAR_12=0;VAR_12<VAR_4;VAR_12++) {
        VAR_16[VAR_12] = VAR_3->Pixel.MapItoI[VAR_16[VAR_12]];
     }
  }
         if (VAR_14) {
            FUNC_4( VAR_3, VAR_4, VAR_8, VAR_9, VAR_13, VAR_16, VAR_10 );
         }
         else {
            FUNC_2( VAR_3, VAR_4, VAR_8, VAR_9, VAR_13, VAR_16, 135 );
         }
      }
   }

}
