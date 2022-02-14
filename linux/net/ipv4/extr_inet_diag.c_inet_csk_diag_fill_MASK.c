
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct user_namespace {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct inet_diag_req_v2 {int dummy; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ,struct sk_buff*,struct inet_diag_req_v2 const*,struct user_namespace*,int ,int ,int ,struct nlmsghdr const*,int) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_0,
         struct sk_buff *VAR_1,
         const struct inet_diag_req_v2 *VAR_2,
         struct user_namespace *VAR_3,
         u32 VAR_4, u32 VAR_5, u16 VAR_6,
         const struct nlmsghdr *VAR_7,
         bool VAR_8)
{
 return FUNC_1(VAR_0, FUNC_0(VAR_0), VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
