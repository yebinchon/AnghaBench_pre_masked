
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ jumps; int addr; int target; int max_addr; int min_addr; } ;
struct annotation {TYPE_2__ widths; TYPE_1__* options; } ;
struct TYPE_3__ {scalar_t__ show_nr_jumps; scalar_t__ use_offset; } ;



void FUNC_0(struct annotation *VAR_0)
{
 if (VAR_0->options->use_offset)
  VAR_0->widths.target = VAR_0->widths.min_addr;
 else
  VAR_0->widths.target = VAR_0->widths.max_addr;

 VAR_0->widths.addr = VAR_0->widths.target;

 if (VAR_0->options->show_nr_jumps)
  VAR_0->widths.addr += VAR_0->widths.jumps + 1;
}
