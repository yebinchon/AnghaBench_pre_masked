
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_filter {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct cls_bpf_prog {int bpf_num_ops; int bpf_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_5(const struct cls_bpf_prog *VAR_3,
     struct sk_buff *VAR_4)
{
 struct nlattr *VAR_5;

 if (FUNC_3(VAR_4, VAR_2, VAR_3->bpf_num_ops))
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_4, VAR_1, VAR_3->bpf_num_ops *
     sizeof(struct sock_filter));
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_0(FUNC_1(VAR_5), VAR_3->bpf_ops, FUNC_2(VAR_5));

 return 0;
}
