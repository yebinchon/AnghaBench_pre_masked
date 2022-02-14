
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int root; } ;
struct netlink_ext_ack {int dummy; } ;
struct cls_bpf_prog {int rwork; int exts; int res; int link; int handle; } ;
struct cls_bpf_head {int handle_idr; } ;


 int FUNC_0 (struct cls_bpf_prog*) ;
 int VAR_0 ;
 int FUNC_1 (struct tcf_proto*,struct cls_bpf_prog*,struct netlink_ext_ack*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct cls_bpf_head* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct tcf_proto*,int *) ;

__attribute__((used)) static void FUNC_8(struct tcf_proto *VAR_1, struct cls_bpf_prog *VAR_2,
        struct netlink_ext_ack *VAR_3)
{
 struct cls_bpf_head *VAR_4 = FUNC_4(VAR_1->root);

 FUNC_2(&VAR_4->handle_idr, VAR_2->handle);
 FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_3(&VAR_2->link);
 FUNC_7(VAR_1, &VAR_2->res);
 if (FUNC_5(&VAR_2->exts))
  FUNC_6(&VAR_2->rwork, VAR_0);
 else
  FUNC_0(VAR_2);
}
