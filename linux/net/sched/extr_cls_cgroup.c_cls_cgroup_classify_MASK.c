
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcf_result {scalar_t__ class; scalar_t__ classid; } ;
struct tcf_proto {int root; } ;
struct sk_buff {int dummy; } ;
struct cls_cgroup_head {int exts; int ematches; } ;


 struct cls_cgroup_head* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int *,int *) ;
 int FUNC_3 (struct sk_buff*,int *,struct tcf_result*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_0, const struct tcf_proto *VAR_1,
          struct tcf_result *VAR_2)
{
 struct cls_cgroup_head *VAR_3 = FUNC_0(VAR_1->root);
 u32 VAR_4 = FUNC_1(VAR_0);

 if (FUNC_4(!VAR_3))
  return -1;
 if (!VAR_4)
  return -1;
 if (!FUNC_2(VAR_0, &VAR_3->ematches, ((void*)0)))
  return -1;

 VAR_2->classid = VAR_4;
 VAR_2->class = 0;

 return FUNC_3(VAR_0, &VAR_3->exts, VAR_2);
}
