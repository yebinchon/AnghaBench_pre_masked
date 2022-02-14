
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct user_namespace {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct inet_diag_req_v2 {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sock*,struct sk_buff*,struct inet_diag_req_v2 const*,struct user_namespace*,int ,int ,int ,struct nlmsghdr const*,int) ;
 int FUNC_1 (struct sock*,struct sk_buff*,int ,int ,int ,struct nlmsghdr const*,int) ;
 int FUNC_2 (struct sock*,struct sk_buff*,int ,int ,int ,struct nlmsghdr const*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_2, struct sk_buff *VAR_3,
   const struct inet_diag_req_v2 *VAR_4,
   struct user_namespace *VAR_5,
   u32 VAR_6, u32 VAR_7, u16 VAR_8,
   const struct nlmsghdr *VAR_9, bool VAR_10)
{
 if (VAR_2->sk_state == VAR_1)
  return FUNC_2(VAR_2, VAR_3, VAR_6, VAR_7,
        VAR_8, VAR_9);

 if (VAR_2->sk_state == VAR_0)
  return FUNC_1(VAR_2, VAR_3, VAR_6, VAR_7,
       VAR_8, VAR_9, VAR_10);

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_8, VAR_9, VAR_10);
}
