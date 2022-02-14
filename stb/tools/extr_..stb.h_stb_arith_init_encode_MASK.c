
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int stbfile ;
struct TYPE_3__ {int range_high; int pending_ffs; int * output; scalar_t__ range_low; } ;
typedef TYPE_1__ stb_arith ;



void FUNC_0(stb_arith *VAR_0, stbfile *VAR_1)
{
   VAR_0->range_low = 0;
   VAR_0->range_high = 0xffffffff;
   VAR_0->pending_ffs = -1;
   VAR_0->output = VAR_1;
}
