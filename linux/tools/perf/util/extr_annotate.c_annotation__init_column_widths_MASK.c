
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int end; } ;
struct TYPE_2__ {int max_ins_name; int jumps; void* max_addr; void* min_addr; void* target; void* addr; } ;
struct annotation {TYPE_1__ widths; int max_jump_sources; } ;


 int FUNC_0 (struct annotation*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct symbol*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct annotation *VAR_0, struct symbol *VAR_1)
{
 VAR_0->widths.addr = VAR_0->widths.target =
  VAR_0->widths.min_addr = FUNC_1(FUNC_2(VAR_1));
 VAR_0->widths.max_addr = FUNC_1(VAR_1->end);
 VAR_0->widths.jumps = FUNC_3(VAR_0->max_jump_sources);
 VAR_0->widths.max_ins_name = FUNC_0(VAR_0);
}
