
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int len; } ;
struct dccp_hdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct dccp_hdr* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sock*,struct sk_buff*,struct dccp_hdr*,int ) ;
 scalar_t__ FUNC_2 (struct sock*,struct sk_buff*,struct dccp_hdr*,int ) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct dccp_hdr *VAR_3 = FUNC_0(VAR_2);

 if (VAR_1->sk_state == VAR_0) {
  if (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_2->len))
   goto reset;
  return 0;
 }
 if (FUNC_2(VAR_1, VAR_2, VAR_3, VAR_2->len))
  goto reset;
 return 0;

reset:
 FUNC_3(VAR_1, VAR_2);
 FUNC_4(VAR_2);
 return 0;
}
