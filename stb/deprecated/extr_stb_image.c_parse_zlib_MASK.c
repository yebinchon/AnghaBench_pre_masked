
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zout; int zout_start; int z_distance; int z_length; scalar_t__ code_buffer; scalar_t__ num_bits; } ;
typedef TYPE_1__ zbuf ;


 int FUNC_0 (TYPE_1__*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_7(zbuf *VAR_3, int VAR_4)
{
   int VAR_5, VAR_6;
   if (VAR_4)
      if (!FUNC_4(VAR_3)) return 0;
   VAR_3->num_bits = 0;
   VAR_3->code_buffer = 0;
   do {
      VAR_5 = FUNC_6(VAR_3,1);
      VAR_6 = FUNC_6(VAR_3,2);
      if (VAR_6 == 0) {
         if (!FUNC_3(VAR_3)) return 0;
      } else if (VAR_6 == 3) {
         return 0;
      } else {
         if (VAR_6 == 1) {

            if (!VAR_0[31]) FUNC_1();
            if (!FUNC_5(&VAR_3->z_length , VAR_1 , 288)) return 0;
            if (!FUNC_5(&VAR_3->z_distance, VAR_0, 32)) return 0;
         } else {
            if (!FUNC_0(VAR_3)) return 0;
         }
         if (!FUNC_2(VAR_3)) return 0;
      }
      if (VAR_2 && VAR_3->zout - VAR_3->zout_start > 65536)
         break;
   } while (!VAR_5);
   return 1;
}
