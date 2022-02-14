
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t MapItoIsize; size_t MapStoSsize; int MapItoRsize; int MapItoGsize; int MapItoBsize; int MapItoAsize; int MapRtoRsize; int MapGtoGsize; int MapBtoBsize; int MapAtoAsize; int MapAtoA; int MapBtoB; int MapGtoG; int MapRtoR; int MapItoA; int MapItoB; int MapItoG; int MapItoR; int * MapStoS; int * MapItoI; } ;
struct TYPE_7__ {TYPE_1__ Pixel; } ;
typedef size_t GLuint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;

void FUNC_3( GLcontext *VAR_2, GLenum VAR_3, GLfloat *VAR_4 )
{
   GLuint VAR_5;

   if (FUNC_0(VAR_2)) {
      FUNC_2( VAR_2, VAR_1, "glGetPixelMapfv" );
      return;
   }
   switch (VAR_3) {
      case 131:
         for (VAR_5=0;VAR_5<VAR_2->Pixel.MapItoIsize;VAR_5++) {
     VAR_4[VAR_5] = (GLfloat) VAR_2->Pixel.MapItoI[VAR_5];
  }
  break;
      case 128:
         for (VAR_5=0;VAR_5<VAR_2->Pixel.MapStoSsize;VAR_5++) {
     VAR_4[VAR_5] = (GLfloat) VAR_2->Pixel.MapStoS[VAR_5];
  }
  break;
      case 130:
         FUNC_1(VAR_4,VAR_2->Pixel.MapItoR,VAR_2->Pixel.MapItoRsize*sizeof(GLfloat));
  break;
      case 132:
         FUNC_1(VAR_4,VAR_2->Pixel.MapItoG,VAR_2->Pixel.MapItoGsize*sizeof(GLfloat));
  break;
      case 133:
         FUNC_1(VAR_4,VAR_2->Pixel.MapItoB,VAR_2->Pixel.MapItoBsize*sizeof(GLfloat));
  break;
      case 134:
         FUNC_1(VAR_4,VAR_2->Pixel.MapItoA,VAR_2->Pixel.MapItoAsize*sizeof(GLfloat));
  break;
      case 129:
         FUNC_1(VAR_4,VAR_2->Pixel.MapRtoR,VAR_2->Pixel.MapRtoRsize*sizeof(GLfloat));
  break;
      case 135:
         FUNC_1(VAR_4,VAR_2->Pixel.MapGtoG,VAR_2->Pixel.MapGtoGsize*sizeof(GLfloat));
  break;
      case 136:
         FUNC_1(VAR_4,VAR_2->Pixel.MapBtoB,VAR_2->Pixel.MapBtoBsize*sizeof(GLfloat));
  break;
      case 137:
         FUNC_1(VAR_4,VAR_2->Pixel.MapAtoA,VAR_2->Pixel.MapAtoAsize*sizeof(GLfloat));
  break;
      default:
         FUNC_2( VAR_2, VAR_0, "glGetPixelMapfv" );
   }
}
