
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {double ZoomX; double ZoomY; size_t IndexOffset; size_t IndexShift; size_t* MapStoS; scalar_t__ MapStencilFlag; } ;
struct TYPE_8__ {scalar_t__* RasterPos; } ;
struct TYPE_10__ {TYPE_2__ Pixel; TYPE_1__ Current; } ;
typedef int GLvoid ;
typedef int GLushort ;
typedef scalar_t__ GLuint ;
typedef size_t GLubyte ;
typedef scalar_t__ GLsizei ;
typedef int GLshort ;
typedef int GLint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;
typedef size_t GLbyte ;
typedef int GLboolean ;






 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (size_t*,size_t*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,int,int,size_t*) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,int,int,size_t*,int) ;

__attribute__((used)) static void FUNC_4( GLcontext* VAR_2, GLsizei VAR_3, GLsizei VAR_4,
            GLenum VAR_5, const GLvoid *VAR_6 )
{
   GLint VAR_7, VAR_8, VAR_9;
   GLuint VAR_10, VAR_11;
   GLboolean VAR_12;

   VAR_12 = VAR_2->Pixel.ZoomX!=1.0 || VAR_2->Pixel.ZoomY!=1.0;


   VAR_7 = (GLint) (VAR_2->Current.RasterPos[0] + 0.5F);
   VAR_8 = (GLint) (VAR_2->Current.RasterPos[1] + 0.5F);
   VAR_9 = VAR_8;


   for (VAR_10=0;VAR_10<VAR_4;VAR_10++,VAR_8++) {
      GLubyte VAR_13[VAR_1];


      switch (VAR_5) {
  case 130:
     {
        GLubyte *VAR_14 = (GLubyte *) VAR_6 + VAR_10 * VAR_3;
        FUNC_0( VAR_13, VAR_14, VAR_3 );
     }
     break;
  case 134:
     {
        GLbyte *VAR_15 = (GLbyte *) VAR_6 + VAR_10 * VAR_3;
        FUNC_0( VAR_13, VAR_15, VAR_3 );
     }
     break;
  case 128:
     {
        GLushort *VAR_16 = (GLushort *) VAR_6 + VAR_10 * VAR_3;
        for (VAR_11=0;VAR_11<VAR_3;VAR_11++) {
    VAR_13[VAR_11] = (GLubyte) ((*VAR_16++) & 0xff);
        }
     }
     break;
  case 131:
     {
        GLshort *VAR_17 = (GLshort *) VAR_6 + VAR_10 * VAR_3;
        for (VAR_11=0;VAR_11<VAR_3;VAR_11++) {
    VAR_13[VAR_11] = (GLubyte) ((*VAR_17++) & 0xff);
        }
     }
     break;
  case 129:
     {
        GLuint *VAR_18 = (GLuint *) VAR_6 + VAR_10 * VAR_3;
        for (VAR_11=0;VAR_11<VAR_3;VAR_11++) {
    VAR_13[VAR_11] = (GLubyte) ((*VAR_18++) & 0xff);
        }
     }
     break;
  case 132:
     {
        GLint *VAR_19 = (GLint *) VAR_6 + VAR_10 * VAR_3;
        for (VAR_11=0;VAR_11<VAR_3;VAR_11++) {
    VAR_13[VAR_11] = (GLubyte) ((*VAR_19++) & 0xff);
        }
     }
     break;
  case 135:

     break;
  case 133:
     {
        GLfloat *VAR_20 = (GLfloat *) VAR_6 + VAR_10 * VAR_3;
        for (VAR_11=0;VAR_11<VAR_3;VAR_11++) {
    VAR_13[VAR_11] = (GLubyte) (((GLint) *VAR_20++) & 0xff);
        }
     }
     break;
  default:
     FUNC_1( VAR_2, VAR_0, "Internal: draw_stencil_pixels" );
      }


      if (VAR_2->Pixel.IndexOffset || VAR_2->Pixel.IndexShift) {
  if (VAR_2->Pixel.IndexShift>=0) {
     for (VAR_11=0;VAR_11<VAR_3;VAR_11++) {
        VAR_13[VAR_11] = (VAR_13[VAR_11] << VAR_2->Pixel.IndexShift)
            + VAR_2->Pixel.IndexOffset;
     }
  }
  else {
     for (VAR_11=0;VAR_11<VAR_3;VAR_11++) {
        VAR_13[VAR_11] = (VAR_13[VAR_11] >> -VAR_2->Pixel.IndexShift)
            + VAR_2->Pixel.IndexOffset;
     }
  }
      }


      if (VAR_2->Pixel.MapStencilFlag) {
  for (VAR_11=0;VAR_11<VAR_3;VAR_11++) {
     VAR_13[VAR_11] = VAR_2->Pixel.MapStoS[ VAR_13[VAR_11] ];
  }
      }


      if (VAR_12) {
         FUNC_3( VAR_2, (GLuint) VAR_3, VAR_7, VAR_8, VAR_13, VAR_9 );
      }
      else {
         FUNC_2( VAR_2, (GLuint) VAR_3, VAR_7, VAR_8, VAR_13 );
      }
   }
}
