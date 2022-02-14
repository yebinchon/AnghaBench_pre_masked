
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_walker {int stop; scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct tcf_proto*,struct rsvp_filter*,struct tcf_walker*) ;} ;
struct tcf_proto {int root; } ;
struct rsvp_session {int * ht; int next; } ;
struct rsvp_head {int * ht; } ;
struct rsvp_filter {int next; } ;


 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tcf_proto*,struct rsvp_filter*,struct tcf_walker*) ;

__attribute__((used)) static void FUNC_2(struct tcf_proto *VAR_0, struct tcf_walker *VAR_1,
        bool VAR_2)
{
 struct rsvp_head *VAR_3 = FUNC_0(VAR_0->root);
 unsigned int VAR_4, VAR_5;

 if (VAR_1->stop)
  return;

 for (VAR_4 = 0; VAR_4 < 256; VAR_4++) {
  struct rsvp_session *VAR_6;

  for (VAR_6 = FUNC_0(VAR_3->ht[VAR_4]); VAR_6;
       VAR_6 = FUNC_0(VAR_6->next)) {
   for (VAR_5 = 0; VAR_5 <= 16; VAR_5++) {
    struct rsvp_filter *VAR_7;

    for (VAR_7 = FUNC_0(VAR_6->ht[VAR_5]); VAR_7;
         VAR_7 = FUNC_0(VAR_7->next)) {
     if (VAR_1->count < VAR_1->skip) {
      VAR_1->count++;
      continue;
     }
     if (VAR_1->fn(VAR_0, VAR_7, VAR_1) < 0) {
      VAR_1->stop = 1;
      return;
     }
     VAR_1->count++;
    }
   }
  }
 }
}
