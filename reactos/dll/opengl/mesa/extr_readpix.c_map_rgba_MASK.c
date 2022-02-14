
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int MapRtoRsize; int MapGtoGsize; int MapBtoBsize; int MapAtoAsize; int* MapRtoR; int* MapGtoG; int* MapBtoB; int* MapAtoA; } ;
struct TYPE_5__ {TYPE_1__ Pixel; } ;
typedef size_t GLint ;
typedef int GLfloat ;
typedef TYPE_2__ GLcontext ;



__attribute__((used)) static void FUNC_0( GLcontext *VAR_0,
                      GLint VAR_1,
        GLfloat VAR_2[], GLfloat VAR_3[],
        GLfloat VAR_4[], GLfloat VAR_5[] )
{
   GLfloat VAR_6 = VAR_0->Pixel.MapRtoRsize-1;
   GLfloat VAR_7 = VAR_0->Pixel.MapGtoGsize-1;
   GLfloat VAR_8 = VAR_0->Pixel.MapBtoBsize-1;
   GLfloat VAR_9 = VAR_0->Pixel.MapAtoAsize-1;
   GLint VAR_10;

   for (VAR_10=0;VAR_10<VAR_1;VAR_10++) {
      VAR_2[VAR_10] = VAR_0->Pixel.MapRtoR[ (GLint) (VAR_2[VAR_10] * VAR_6) ];
      VAR_3[VAR_10] = VAR_0->Pixel.MapGtoG[ (GLint) (VAR_3[VAR_10] * VAR_7) ];
      VAR_4[VAR_10] = VAR_0->Pixel.MapBtoB[ (GLint) (VAR_4[VAR_10] * VAR_8) ];
      VAR_5[VAR_10] = VAR_0->Pixel.MapAtoA[ (GLint) (VAR_5[VAR_10] * VAR_9) ];
   }
}
