
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sym; } ;
struct hist_entry {TYPE_1__ ms; int hists; int ip; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct hist_entry*,struct hist_entry*) ;

__attribute__((used)) static int64_t
FUNC_4(struct hist_entry *VAR_1, struct hist_entry *VAR_2)
{
 int64_t VAR_3;

 if (!VAR_1->ms.sym && !VAR_2->ms.sym)
  return FUNC_0(VAR_1->ip, VAR_2->ip);





 if (!FUNC_2(VAR_1->hists, VAR_0) || FUNC_2(VAR_2->hists, VAR_0)) {
  VAR_3 = FUNC_3(VAR_1, VAR_2);
  if (VAR_3 != 0)
   return VAR_3;
 }

 return FUNC_1(VAR_1->ms.sym, VAR_2->ms.sym);
}
