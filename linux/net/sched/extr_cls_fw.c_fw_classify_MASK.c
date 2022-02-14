
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_result {int classid; scalar_t__ class; } ;
struct tcf_proto {TYPE_1__* chain; int root; } ;
struct sk_buff {int mark; } ;
struct fw_head {int mask; int * ht; } ;
struct fw_filter {int id; int exts; int ifindex; struct tcf_result res; int next; } ;
struct Qdisc {int handle; } ;
struct TYPE_2__ {int block; } ;


 scalar_t__ FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 struct Qdisc* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int *,struct tcf_result*) ;
 int FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_0, const struct tcf_proto *VAR_1,
         struct tcf_result *VAR_2)
{
 struct fw_head *VAR_3 = FUNC_2(VAR_1->root);
 struct fw_filter *VAR_4;
 int VAR_5;
 u32 VAR_6 = VAR_0->mark;

 if (VAR_3 != ((void*)0)) {
  VAR_6 &= VAR_3->mask;

  for (VAR_4 = FUNC_2(VAR_3->ht[FUNC_1(VAR_6)]); VAR_4;
       VAR_4 = FUNC_2(VAR_4->next)) {
   if (VAR_4->id == VAR_6) {
    *VAR_2 = VAR_4->res;
    if (!FUNC_5(VAR_0, VAR_4->ifindex))
     continue;
    VAR_5 = FUNC_4(VAR_0, &VAR_4->exts, VAR_2);
    if (VAR_5 < 0)
     continue;

    return VAR_5;
   }
  }
 } else {
  struct Qdisc *VAR_7 = FUNC_3(VAR_1->chain->block);


  if (VAR_6 && (FUNC_0(VAR_6) == 0 ||
      !(FUNC_0(VAR_6 ^ VAR_7->handle)))) {
   VAR_2->classid = VAR_6;
   VAR_2->class = 0;
   return 0;
  }
 }

 return -1;
}
