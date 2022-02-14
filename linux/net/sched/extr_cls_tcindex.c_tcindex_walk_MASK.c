
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int class; } ;
struct TYPE_5__ {TYPE_1__ res; } ;
struct tcindex_filter {TYPE_2__ result; int next; } ;
struct tcindex_data {int hash; int * h; TYPE_2__* perfect; } ;
struct tcf_walker {scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct tcf_proto*,TYPE_2__*,struct tcf_walker*) ;int stop; } ;
struct tcf_proto {int root; } ;


 int FUNC_0 (char*,struct tcf_proto*,struct tcf_walker*,struct tcindex_data*) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct tcf_proto*,TYPE_2__*,struct tcf_walker*) ;
 scalar_t__ FUNC_3 (struct tcf_proto*,TYPE_2__*,struct tcf_walker*) ;

__attribute__((used)) static void FUNC_4(struct tcf_proto *VAR_0, struct tcf_walker *VAR_1,
    bool VAR_2)
{
 struct tcindex_data *VAR_3 = FUNC_1(VAR_0->root);
 struct tcindex_filter *VAR_4, *VAR_5;
 int VAR_6;

 FUNC_0("tcindex_walk(tp %p,walker %p),p %p\n", VAR_0, VAR_1, VAR_3);
 if (VAR_3->perfect) {
  for (VAR_6 = 0; VAR_6 < VAR_3->hash; VAR_6++) {
   if (!VAR_3->perfect[VAR_6].res.class)
    continue;
   if (VAR_1->count >= VAR_1->skip) {
    if (VAR_1->fn(VAR_0, VAR_3->perfect + VAR_6, VAR_1) < 0) {
     VAR_1->stop = 1;
     return;
    }
   }
   VAR_1->count++;
  }
 }
 if (!VAR_3->h)
  return;
 for (VAR_6 = 0; VAR_6 < VAR_3->hash; VAR_6++) {
  for (VAR_4 = FUNC_1(VAR_3->h[VAR_6]); VAR_4; VAR_4 = VAR_5) {
   VAR_5 = FUNC_1(VAR_4->next);
   if (VAR_1->count >= VAR_1->skip) {
    if (VAR_1->fn(VAR_0, &VAR_4->result, VAR_1) < 0) {
     VAR_1->stop = 1;
     return;
    }
   }
   VAR_1->count++;
  }
 }
}
