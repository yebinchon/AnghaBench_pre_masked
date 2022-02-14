
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int root; } ;
struct netlink_ext_ack {int dummy; } ;
struct cls_mall_head {int deleting; } ;


 struct cls_mall_head* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct tcf_proto *VAR_0, void *VAR_1, bool *VAR_2,
         bool VAR_3, struct netlink_ext_ack *VAR_4)
{
 struct cls_mall_head *VAR_5 = FUNC_0(VAR_0->root);

 VAR_5->deleting = 1;
 *VAR_2 = 1;
 return 0;
}
