
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int computed; int cycles; } ;
struct hist_entry {TYPE_1__* block_info; TYPE_2__ diff; } ;
struct TYPE_3__ {int cycles_aggr; int num_aggr; scalar_t__ num; } ;



__attribute__((used)) static void FUNC_0(struct hist_entry *VAR_0,
    struct hist_entry *VAR_1)
{
 VAR_1->diff.computed = 1;
 if (VAR_1->block_info->num && VAR_0->block_info->num) {
  VAR_1->diff.cycles =
   VAR_1->block_info->cycles_aggr / VAR_1->block_info->num_aggr -
   VAR_0->block_info->cycles_aggr / VAR_0->block_info->num_aggr;
 }
}
