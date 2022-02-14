
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int code; int output; } ;
typedef TYPE_1__ stb_arith ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(stb_arith *VAR_0)
{
   int VAR_1 = FUNC_0(VAR_0->output);
   VAR_0->code = (VAR_0->code << 8) + (VAR_1 >= 0 ? VAR_1 : 0);
}
