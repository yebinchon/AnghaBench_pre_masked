
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pending_ffs; int buffered_u8; int output; } ;
typedef TYPE_1__ stb_arith ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(stb_arith *VAR_0, int VAR_1)
{
   if (VAR_0->pending_ffs) {
      if (VAR_0->pending_ffs == -1) {
         if (VAR_1 == 0xff)
            FUNC_0(VAR_0->output, VAR_1);
         else {
            VAR_0->buffered_u8 = VAR_1;
            VAR_0->pending_ffs = 0;
         }
      } else if (VAR_1 == 0xff) {
         ++VAR_0->pending_ffs;
      } else {
         int VAR_2;
         FUNC_0(VAR_0->output, VAR_0->buffered_u8);
         for (VAR_2=0; VAR_2 < VAR_0->pending_ffs; ++VAR_2)
            FUNC_0(VAR_0->output, 0xff);
      }
   } else if (VAR_1 == 0xff) {
      ++VAR_0->pending_ffs;
   } else {

      FUNC_0(VAR_0->output, VAR_0->buffered_u8);
      VAR_0->buffered_u8 = VAR_1;
   }
}
