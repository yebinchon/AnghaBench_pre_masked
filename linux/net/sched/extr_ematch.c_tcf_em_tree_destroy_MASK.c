
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nmatches; } ;
struct tcf_ematch_tree {void* matches; TYPE_2__ hdr; } ;
struct tcf_ematch {TYPE_1__* ops; scalar_t__ data; } ;
struct TYPE_3__ {int owner; int (* destroy ) (struct tcf_ematch*) ;} ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tcf_ematch*) ;
 struct tcf_ematch* FUNC_3 (struct tcf_ematch_tree*,int) ;
 int FUNC_4 (struct tcf_ematch*) ;

void FUNC_5(struct tcf_ematch_tree *VAR_0)
{
 int VAR_1;

 if (VAR_0->matches == ((void*)0))
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->hdr.nmatches; VAR_1++) {
  struct tcf_ematch *VAR_2 = FUNC_3(VAR_0, VAR_1);

  if (VAR_2->ops) {
   if (VAR_2->ops->destroy)
    VAR_2->ops->destroy(VAR_2);
   else if (!FUNC_4(VAR_2))
    FUNC_0((void *) VAR_2->data);
   FUNC_1(VAR_2->ops->owner);
  }
 }

 VAR_0->hdr.nmatches = 0;
 FUNC_0(VAR_0->matches);
 VAR_0->matches = ((void*)0);
}
