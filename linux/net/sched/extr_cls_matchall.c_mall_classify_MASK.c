
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_result {int dummy; } ;
struct tcf_proto {int root; } ;
struct sk_buff {int dummy; } ;
struct cls_mall_head {int exts; TYPE_1__* pf; struct tcf_result res; int flags; } ;
struct TYPE_2__ {int rhit; } ;


 int FUNC_0 (int ) ;
 struct cls_mall_head* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int *,struct tcf_result*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_0, const struct tcf_proto *VAR_1,
    struct tcf_result *VAR_2)
{
 struct cls_mall_head *VAR_3 = FUNC_1(VAR_1->root);

 if (FUNC_4(!VAR_3))
  return -1;

 if (FUNC_2(VAR_3->flags))
  return -1;

 *VAR_2 = VAR_3->res;
 FUNC_0(VAR_3->pf->rhit);
 return FUNC_3(VAR_0, &VAR_3->exts, VAR_2);
}
