
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_walker {int stop; scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct tcf_proto*,struct tc_u_knode*,struct tcf_walker*) ;} ;
struct tcf_proto {scalar_t__ prio; struct tc_u_common* data; } ;
struct tc_u_knode {scalar_t__ prio; unsigned int divisor; int next; int * ht; } ;
struct tc_u_hnode {scalar_t__ prio; unsigned int divisor; int next; int * ht; } ;
struct tc_u_common {int hlist; } ;


 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tcf_proto*,struct tc_u_knode*,struct tcf_walker*) ;
 scalar_t__ FUNC_2 (struct tcf_proto*,struct tc_u_knode*,struct tcf_walker*) ;

__attribute__((used)) static void FUNC_3(struct tcf_proto *VAR_0, struct tcf_walker *VAR_1,
       bool VAR_2)
{
 struct tc_u_common *VAR_3 = VAR_0->data;
 struct tc_u_hnode *VAR_4;
 struct tc_u_knode *VAR_5;
 unsigned int VAR_6;

 if (VAR_1->stop)
  return;

 for (VAR_4 = FUNC_0(VAR_3->hlist);
      VAR_4;
      VAR_4 = FUNC_0(VAR_4->next)) {
  if (VAR_4->prio != VAR_0->prio)
   continue;
  if (VAR_1->count >= VAR_1->skip) {
   if (VAR_1->fn(VAR_0, VAR_4, VAR_1) < 0) {
    VAR_1->stop = 1;
    return;
   }
  }
  VAR_1->count++;
  for (VAR_6 = 0; VAR_6 <= VAR_4->divisor; VAR_6++) {
   for (VAR_5 = FUNC_0(VAR_4->ht[VAR_6]);
        VAR_5;
        VAR_5 = FUNC_0(VAR_5->next)) {
    if (VAR_1->count < VAR_1->skip) {
     VAR_1->count++;
     continue;
    }
    if (VAR_1->fn(VAR_0, VAR_5, VAR_1) < 0) {
     VAR_1->stop = 1;
     return;
    }
    VAR_1->count++;
   }
  }
 }
}
