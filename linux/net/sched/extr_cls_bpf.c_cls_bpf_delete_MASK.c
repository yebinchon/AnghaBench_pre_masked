
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int root; } ;
struct netlink_ext_ack {int dummy; } ;
struct cls_bpf_head {int plist; } ;


 int FUNC_0 (struct tcf_proto*,void*,struct netlink_ext_ack*) ;
 int FUNC_1 (int *) ;
 struct cls_bpf_head* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct tcf_proto *VAR_0, void *VAR_1, bool *VAR_2,
     bool VAR_3, struct netlink_ext_ack *VAR_4)
{
 struct cls_bpf_head *VAR_5 = FUNC_2(VAR_0->root);

 FUNC_0(VAR_0, VAR_1, VAR_4);
 *VAR_2 = FUNC_1(&VAR_5->plist);
 return 0;
}
