
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct bpf_lwt_prog {scalar_t__ name; int prog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, int VAR_3,
        struct bpf_lwt_prog *VAR_4)
{
 struct nlattr *VAR_5;

 if (!VAR_4->prog)
  return 0;

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_4->name &&
     FUNC_2(VAR_2, VAR_1, VAR_4->name))
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_5);
}
