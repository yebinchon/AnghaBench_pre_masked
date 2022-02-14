
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dccp_hdr {int dummy; } ;


 int FUNC_0 (struct sock*,struct sk_buff*,struct dccp_hdr const*,unsigned int const) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sock*,struct sk_buff*) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sock*,int *,struct sk_buff*) ;

int FUNC_6(struct sock *VAR_0, struct sk_buff *VAR_1,
    const struct dccp_hdr *VAR_2, const unsigned int VAR_3)
{
 if (FUNC_2(VAR_0, VAR_1))
  goto discard;

 if (FUNC_5(VAR_0, ((void*)0), VAR_1))
  return 1;

 FUNC_4(VAR_0, VAR_1);
 FUNC_3(VAR_0, VAR_1);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
discard:
 FUNC_1(VAR_1);
 return 0;
}
