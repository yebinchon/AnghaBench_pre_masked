
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct cls_bpf_prog {int gen_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct tcf_proto*,struct cls_bpf_prog*,struct cls_bpf_prog*,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct tcf_proto *VAR_1, struct cls_bpf_prog *VAR_2,
      struct cls_bpf_prog *VAR_3,
      struct netlink_ext_ack *VAR_4)
{
 if (VAR_2 && VAR_3 &&
     FUNC_0(VAR_2->gen_flags) !=
     FUNC_0(VAR_3->gen_flags))
  return -VAR_0;

 if (VAR_2 && FUNC_2(VAR_2->gen_flags))
  VAR_2 = ((void*)0);
 if (VAR_3 && FUNC_2(VAR_3->gen_flags))
  VAR_3 = ((void*)0);
 if (!VAR_2 && !VAR_3)
  return 0;

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
