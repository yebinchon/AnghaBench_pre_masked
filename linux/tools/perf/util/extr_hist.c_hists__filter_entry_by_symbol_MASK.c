
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hists {int * symbol_filter_str; } ;
struct TYPE_4__ {TYPE_1__* sym; } ;
struct hist_entry {int filtered; TYPE_2__ ms; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *) ;

__attribute__((used)) static bool FUNC_1(struct hists *VAR_1,
       struct hist_entry *VAR_2)
{
 if (VAR_1->symbol_filter_str != ((void*)0) &&
     (!VAR_2->ms.sym || FUNC_0(VAR_2->ms.sym->name,
       VAR_1->symbol_filter_str) == ((void*)0))) {
  VAR_2->filtered |= (1 << VAR_0);
  return 1;
 }

 return 0;
}
