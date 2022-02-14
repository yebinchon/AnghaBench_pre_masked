
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_walker {int stop; scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct tcf_proto*,struct fw_filter*,struct tcf_walker*) ;} ;
struct tcf_proto {int root; } ;
struct fw_head {int * ht; } ;
struct fw_filter {int next; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tcf_proto*,struct fw_filter*,struct tcf_walker*) ;

__attribute__((used)) static void FUNC_2(struct tcf_proto *VAR_1, struct tcf_walker *VAR_2,
      bool VAR_3)
{
 struct fw_head *VAR_4 = FUNC_0(VAR_1->root);
 int VAR_5;

 if (VAR_4 == ((void*)0))
  VAR_2->stop = 1;

 if (VAR_2->stop)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct fw_filter *VAR_6;

  for (VAR_6 = FUNC_0(VAR_4->ht[VAR_5]); VAR_6;
       VAR_6 = FUNC_0(VAR_6->next)) {
   if (VAR_2->count < VAR_2->skip) {
    VAR_2->count++;
    continue;
   }
   if (VAR_2->fn(VAR_1, VAR_6, VAR_2) < 0) {
    VAR_2->stop = 1;
    return;
   }
   VAR_2->count++;
  }
 }
}
