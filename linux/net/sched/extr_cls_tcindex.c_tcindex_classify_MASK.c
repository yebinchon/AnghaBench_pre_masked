
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_result {int classid; scalar_t__ class; } ;
struct tcindex_filter_result {int exts; struct tcf_result res; } ;
struct tcindex_data {int mask; int shift; int fall_through; } ;
struct tcf_proto {TYPE_1__* chain; int root; } ;
struct sk_buff {int tc_index; } ;
struct Qdisc {int handle; } ;
struct TYPE_2__ {int block; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,struct sk_buff*,...) ;
 struct tcindex_data* FUNC_3 (int ) ;
 struct Qdisc* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int *,struct tcf_result*) ;
 struct tcindex_filter_result* FUNC_6 (struct tcindex_data*,int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_0, const struct tcf_proto *VAR_1,
       struct tcf_result *VAR_2)
{
 struct tcindex_data *VAR_3 = FUNC_3(VAR_1->root);
 struct tcindex_filter_result *VAR_4;
 int VAR_5 = (VAR_0->tc_index & VAR_3->mask) >> VAR_3->shift;

 FUNC_2("tcindex_classify(skb %p,tp %p,res %p),p %p\n",
   VAR_0, VAR_1, VAR_2, VAR_3);

 VAR_4 = FUNC_6(VAR_3, VAR_5);
 if (!VAR_4) {
  struct Qdisc *VAR_6 = FUNC_4(VAR_1->chain->block);

  if (!VAR_3->fall_through)
   return -1;
  VAR_2->classid = FUNC_1(FUNC_0(VAR_6->handle), VAR_5);
  VAR_2->class = 0;
  FUNC_2("alg 0x%x\n", VAR_2->classid);
  return 0;
 }
 *VAR_2 = VAR_4->res;
 FUNC_2("map 0x%x\n", VAR_2->classid);

 return FUNC_5(VAR_0, &VAR_4->exts, VAR_2);
}
