
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ Enabled; } ;
struct TYPE_8__ {int Clear; } ;
struct TYPE_12__ {TYPE_4__* Buffer; TYPE_3__ Scissor; TYPE_2__* Visual; TYPE_1__ Depth; } ;
struct TYPE_11__ {void** Depth; scalar_t__ Ymin; scalar_t__ Ymax; scalar_t__ Xmin; scalar_t__ Xmax; scalar_t__ Width; scalar_t__ Height; } ;
struct TYPE_9__ {scalar_t__ DepthBits; } ;
typedef scalar_t__ GLint ;
typedef void* GLdepth ;
typedef TYPE_5__ GLcontext ;


 int VAR_0 ;
 void** FUNC_0 (TYPE_5__*,scalar_t__,scalar_t__) ;

void FUNC_1( GLcontext* VAR_1 )
{
   GLdepth VAR_2 = (GLdepth) (VAR_1->Depth.Clear * VAR_0);

   if (VAR_1->Visual->DepthBits==0 || !VAR_1->Buffer->Depth) {

      return;
   }





   if (VAR_1->Scissor.Enabled) {

      GLint VAR_3;
      for (VAR_3=VAR_1->Buffer->Ymin; VAR_3<=VAR_1->Buffer->Ymax; VAR_3++) {
         GLdepth *VAR_4 = FUNC_0( VAR_1, VAR_1->Buffer->Xmin, VAR_3 );
         GLint VAR_5 = VAR_1->Buffer->Xmax - VAR_1->Buffer->Xmin + 1;
         do {
            *VAR_4++ = VAR_2;
            VAR_5--;
         } while (VAR_5);
      }
   }
   else {

      GLdepth *VAR_6 = VAR_1->Buffer->Depth;
      GLint VAR_7 = VAR_1->Buffer->Width * VAR_1->Buffer->Height;
      while (VAR_7>=16) {
         VAR_6[0] = VAR_2; VAR_6[1] = VAR_2;
         VAR_6[2] = VAR_2; VAR_6[3] = VAR_2;
         VAR_6[4] = VAR_2; VAR_6[5] = VAR_2;
         VAR_6[6] = VAR_2; VAR_6[7] = VAR_2;
         VAR_6[8] = VAR_2; VAR_6[9] = VAR_2;
         VAR_6[10] = VAR_2; VAR_6[11] = VAR_2;
         VAR_6[12] = VAR_2; VAR_6[13] = VAR_2;
         VAR_6[14] = VAR_2; VAR_6[15] = VAR_2;
         VAR_6 += 16;
         VAR_7 -= 16;
      }
      while (VAR_7>0) {
         *VAR_6++ = VAR_2;
         VAR_7--;
      }
   }
}
