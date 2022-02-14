
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t MapItoIsize; size_t MapStoSsize; size_t MapItoRsize; size_t MapItoGsize; size_t MapItoBsize; size_t MapItoAsize; size_t MapRtoRsize; size_t MapGtoGsize; size_t MapBtoBsize; size_t MapAtoAsize; int * MapAtoA; int * MapBtoB; int * MapGtoG; int * MapRtoR; int * MapItoA; int * MapItoB; int * MapItoG; int * MapItoR; int * MapStoS; int * MapItoI; } ;
struct TYPE_7__ {TYPE_1__ Pixel; } ;
typedef int GLushort ;
typedef size_t GLuint ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;

void FUNC_3( GLcontext *VAR_2, GLenum VAR_3, GLushort *VAR_4 )
{
   GLuint VAR_5;

   if (FUNC_1(VAR_2)) {
      FUNC_2( VAR_2, VAR_1, "glGetPixelMapfv" );
      return;
   }
   switch (VAR_3) {
      case 131:
  for (VAR_5=0;VAR_5<VAR_2->Pixel.MapItoIsize;VAR_5++) {
     VAR_4[VAR_5] = (GLushort) VAR_2->Pixel.MapItoI[VAR_5];
  }
  break;
      case 128:
  for (VAR_5=0;VAR_5<VAR_2->Pixel.MapStoSsize;VAR_5++) {
     VAR_4[VAR_5] = (GLushort) VAR_2->Pixel.MapStoS[VAR_5];
  }
  break;
      case 130:
  for (VAR_5=0;VAR_5<VAR_2->Pixel.MapItoRsize;VAR_5++) {
     VAR_4[VAR_5] = FUNC_0( VAR_2->Pixel.MapItoR[VAR_5] );
  }
  break;
      case 132:
  for (VAR_5=0;VAR_5<VAR_2->Pixel.MapItoGsize;VAR_5++) {
     VAR_4[VAR_5] = FUNC_0( VAR_2->Pixel.MapItoG[VAR_5] );
  }
  break;
      case 133:
  for (VAR_5=0;VAR_5<VAR_2->Pixel.MapItoBsize;VAR_5++) {
     VAR_4[VAR_5] = FUNC_0( VAR_2->Pixel.MapItoB[VAR_5] );
  }
  break;
      case 134:
  for (VAR_5=0;VAR_5<VAR_2->Pixel.MapItoAsize;VAR_5++) {
     VAR_4[VAR_5] = FUNC_0( VAR_2->Pixel.MapItoA[VAR_5] );
  }
  break;
      case 129:
  for (VAR_5=0;VAR_5<VAR_2->Pixel.MapRtoRsize;VAR_5++) {
     VAR_4[VAR_5] = FUNC_0( VAR_2->Pixel.MapRtoR[VAR_5] );
  }
  break;
      case 135:
  for (VAR_5=0;VAR_5<VAR_2->Pixel.MapGtoGsize;VAR_5++) {
     VAR_4[VAR_5] = FUNC_0( VAR_2->Pixel.MapGtoG[VAR_5] );
  }
  break;
      case 136:
  for (VAR_5=0;VAR_5<VAR_2->Pixel.MapBtoBsize;VAR_5++) {
     VAR_4[VAR_5] = FUNC_0( VAR_2->Pixel.MapBtoB[VAR_5] );
  }
  break;
      case 137:
  for (VAR_5=0;VAR_5<VAR_2->Pixel.MapAtoAsize;VAR_5++) {
     VAR_4[VAR_5] = FUNC_0( VAR_2->Pixel.MapAtoA[VAR_5] );
  }
  break;
      default:
         FUNC_2( VAR_2, VAR_0, "glGetPixelMapfv" );
   }
}
