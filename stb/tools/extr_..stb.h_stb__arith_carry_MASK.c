
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pending_ffs; int output; int buffered_u8; } ;
typedef TYPE_1__ stb_arith ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(stb_arith *VAR_0)
{
   int VAR_1;
   FUNC_0(VAR_0->pending_ffs != -1);
   FUNC_1(VAR_0->output, VAR_0->buffered_u8);
   for (VAR_1=0; VAR_1 < VAR_0->pending_ffs; ++VAR_1)
      FUNC_1(VAR_0->output, 0);
}
