
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int branch_to; } ;
struct TYPE_9__ {int map; TYPE_1__* sym; } ;
struct callchain_list {int from_count; int iter_cycles; int iter_count; int cycles_count; TYPE_5__ brtype_stat; int abort_count; int predicted_count; int branch_count; int ip; TYPE_3__ ms; int srcline; } ;
struct TYPE_12__ {scalar_t__ cycles; scalar_t__ abort; scalar_t__ predicted; } ;
struct callchain_cursor_node {scalar_t__ iter_cycles; scalar_t__ nr_loop_iter; TYPE_6__ branch_flags; int ip; scalar_t__ branch_from; scalar_t__ branch; int map; TYPE_2__* sym; int srcline; } ;
typedef enum match_result { ____Placeholder_match_result } match_result ;
struct TYPE_10__ {int key; } ;
struct TYPE_8__ {int start; int name; int inlined; } ;
struct TYPE_7__ {int start; int name; int inlined; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,TYPE_6__*,scalar_t__,int ) ;
 TYPE_4__ VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static enum match_result FUNC_3(struct callchain_cursor_node *VAR_4,
         struct callchain_list *VAR_5)
{
 enum match_result VAR_6 = VAR_1;

 switch (VAR_3.key) {
 case 128:
  VAR_6 = FUNC_2(VAR_5->srcline, VAR_4->srcline);
  if (VAR_6 != VAR_1)
   break;

  VAR_2;
 case 129:
  if (VAR_4->sym && VAR_5->ms.sym) {






   if (VAR_5->ms.sym->inlined || VAR_4->sym->inlined) {
    VAR_6 = FUNC_2(VAR_5->ms.sym->name,
           VAR_4->sym->name);
    if (VAR_6 != VAR_1)
     break;
   } else {
    VAR_6 = FUNC_1(VAR_5->ms.map, VAR_5->ms.sym->start,
          VAR_4->map, VAR_4->sym->start);
    break;
   }
  }

  VAR_2;
 case 130:
 default:
  VAR_6 = FUNC_1(VAR_5->ms.map, VAR_5->ip, VAR_4->map, VAR_4->ip);
  break;
 }

 if (VAR_6 == VAR_0 && VAR_4->branch) {
  VAR_5->branch_count++;

  if (VAR_4->branch_from) {



   VAR_5->brtype_stat.branch_to = 1;

   if (VAR_4->branch_flags.predicted)
    VAR_5->predicted_count++;

   if (VAR_4->branch_flags.abort)
    VAR_5->abort_count++;

   FUNC_0(&VAR_5->brtype_stat,
       &VAR_4->branch_flags,
       VAR_4->branch_from,
       VAR_4->ip);
  } else {



   VAR_5->brtype_stat.branch_to = 0;
   VAR_5->cycles_count += VAR_4->branch_flags.cycles;
   VAR_5->iter_count += VAR_4->nr_loop_iter;
   VAR_5->iter_cycles += VAR_4->iter_cycles;
   VAR_5->from_count++;
  }
 }

 return VAR_6;
}
