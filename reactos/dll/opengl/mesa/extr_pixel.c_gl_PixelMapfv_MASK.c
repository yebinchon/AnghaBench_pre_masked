
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void** MapAtoA; scalar_t__ MapAtoAsize; void** MapBtoB; scalar_t__ MapBtoBsize; void** MapGtoG; scalar_t__ MapGtoGsize; void** MapRtoR; scalar_t__ MapRtoRsize; void** MapItoA; scalar_t__ MapItoAsize; void** MapItoB; scalar_t__ MapItoBsize; void** MapItoG; scalar_t__ MapItoGsize; void** MapItoR; scalar_t__ MapItoRsize; scalar_t__* MapItoI; scalar_t__ MapItoIsize; scalar_t__* MapStoS; scalar_t__ MapStoSsize; } ;
struct TYPE_7__ {TYPE_1__ Pixel; } ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;
typedef int GLboolean ;


 void* FUNC_0 (int const,double,double) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;

void FUNC_3( GLcontext *VAR_6,
                    GLenum VAR_7, GLint VAR_8, const GLfloat *VAR_9 )
{
   GLuint VAR_10;

   if (FUNC_1(VAR_6)) {
      FUNC_2( VAR_6, VAR_2, "glPixelMapfv" );
      return;
   }

   if (VAR_8<0 || VAR_8>VAR_5) {
      FUNC_2( VAR_6, VAR_3, "glPixelMapfv(mapsize)" );
      return;
   }

   if (VAR_7>=128 && VAR_7<=134) {

      GLuint VAR_11;
      GLboolean VAR_12 = VAR_0;
      for (VAR_11=1; VAR_11<=VAR_5; VAR_11=VAR_11<<1) {
  if ( (VAR_11&VAR_8) == VAR_11 ) {
     VAR_12 = VAR_4;
     break;
  }
      }
      if (!VAR_12) {
  FUNC_2( VAR_6, VAR_3, "glPixelMapfv(mapsize)" );
         return;
      }
   }

   switch (VAR_7) {
      case 128:
         VAR_6->Pixel.MapStoSsize = VAR_8;
         for (VAR_10=0;VAR_10<VAR_8;VAR_10++) {
     VAR_6->Pixel.MapStoS[VAR_10] = (GLint) VAR_9[VAR_10];
  }
  break;
      case 131:
         VAR_6->Pixel.MapItoIsize = VAR_8;
         for (VAR_10=0;VAR_10<VAR_8;VAR_10++) {
     VAR_6->Pixel.MapItoI[VAR_10] = (GLint) VAR_9[VAR_10];
  }
  break;
      case 130:
         VAR_6->Pixel.MapItoRsize = VAR_8;
         for (VAR_10=0;VAR_10<VAR_8;VAR_10++) {
     VAR_6->Pixel.MapItoR[VAR_10] = FUNC_0( VAR_9[VAR_10], 0.0, 1.0 );
  }
  break;
      case 132:
         VAR_6->Pixel.MapItoGsize = VAR_8;
         for (VAR_10=0;VAR_10<VAR_8;VAR_10++) {
     VAR_6->Pixel.MapItoG[VAR_10] = FUNC_0( VAR_9[VAR_10], 0.0, 1.0 );
  }
  break;
      case 133:
         VAR_6->Pixel.MapItoBsize = VAR_8;
         for (VAR_10=0;VAR_10<VAR_8;VAR_10++) {
     VAR_6->Pixel.MapItoB[VAR_10] = FUNC_0( VAR_9[VAR_10], 0.0, 1.0 );
  }
  break;
      case 134:
         VAR_6->Pixel.MapItoAsize = VAR_8;
         for (VAR_10=0;VAR_10<VAR_8;VAR_10++) {
     VAR_6->Pixel.MapItoA[VAR_10] = FUNC_0( VAR_9[VAR_10], 0.0, 1.0 );
  }
  break;
      case 129:
         VAR_6->Pixel.MapRtoRsize = VAR_8;
         for (VAR_10=0;VAR_10<VAR_8;VAR_10++) {
     VAR_6->Pixel.MapRtoR[VAR_10] = FUNC_0( VAR_9[VAR_10], 0.0, 1.0 );
  }
  break;
      case 135:
         VAR_6->Pixel.MapGtoGsize = VAR_8;
         for (VAR_10=0;VAR_10<VAR_8;VAR_10++) {
     VAR_6->Pixel.MapGtoG[VAR_10] = FUNC_0( VAR_9[VAR_10], 0.0, 1.0 );
  }
  break;
      case 136:
         VAR_6->Pixel.MapBtoBsize = VAR_8;
         for (VAR_10=0;VAR_10<VAR_8;VAR_10++) {
     VAR_6->Pixel.MapBtoB[VAR_10] = FUNC_0( VAR_9[VAR_10], 0.0, 1.0 );
  }
  break;
      case 137:
         VAR_6->Pixel.MapAtoAsize = VAR_8;
         for (VAR_10=0;VAR_10<VAR_8;VAR_10++) {
     VAR_6->Pixel.MapAtoA[VAR_10] = FUNC_0( VAR_9[VAR_10], 0.0, 1.0 );
  }
  break;
      default:
         FUNC_2( VAR_6, VAR_1, "glPixelMapfv(map)" );
   }
}
