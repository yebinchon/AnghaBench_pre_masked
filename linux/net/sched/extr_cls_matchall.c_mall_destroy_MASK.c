
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int root; } ;
struct netlink_ext_ack {int dummy; } ;
struct cls_mall_head {int rwork; int exts; int flags; int res; } ;


 int FUNC_0 (struct cls_mall_head*) ;
 int FUNC_1 (struct tcf_proto*,struct cls_mall_head*,unsigned long,struct netlink_ext_ack*) ;
 int VAR_0 ;
 struct cls_mall_head* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct tcf_proto*,int *) ;

__attribute__((used)) static void FUNC_7(struct tcf_proto *VAR_1, bool VAR_2,
    struct netlink_ext_ack *VAR_3)
{
 struct cls_mall_head *VAR_4 = FUNC_2(VAR_1->root);

 if (!VAR_4)
  return;

 FUNC_6(VAR_1, &VAR_4->res);

 if (!FUNC_3(VAR_4->flags))
  FUNC_1(VAR_1, VAR_4, (unsigned long) VAR_4, VAR_3);

 if (FUNC_4(&VAR_4->exts))
  FUNC_5(&VAR_4->rwork, VAR_0);
 else
  FUNC_0(VAR_4);
}
