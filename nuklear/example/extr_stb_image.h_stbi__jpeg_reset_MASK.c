
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int todo; int restart_interval; scalar_t__ eob_run; int marker; TYPE_1__* img_comp; scalar_t__ nomore; scalar_t__ code_buffer; scalar_t__ code_bits; } ;
typedef TYPE_2__ stbi__jpeg ;
struct TYPE_4__ {scalar_t__ dc_pred; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(stbi__jpeg *VAR_1)
{
   VAR_1->code_bits = 0;
   VAR_1->code_buffer = 0;
   VAR_1->nomore = 0;
   VAR_1->img_comp[0].dc_pred = VAR_1->img_comp[1].dc_pred = VAR_1->img_comp[2].dc_pred = 0;
   VAR_1->marker = VAR_0;
   VAR_1->todo = VAR_1->restart_interval ? VAR_1->restart_interval : 0x7fffffff;
   VAR_1->eob_run = 0;


}
