
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct cls_bpf_prog {int dummy; } ;


 int FUNC_0 (struct tcf_proto*,int *,struct cls_bpf_prog*,struct netlink_ext_ack*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(struct tcf_proto *VAR_0,
     struct cls_bpf_prog *VAR_1,
     struct netlink_ext_ack *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, ((void*)0), VAR_1, VAR_2);
 if (VAR_3)
  FUNC_1("Stopping hardware offload failed: %d\n", VAR_3);
}
