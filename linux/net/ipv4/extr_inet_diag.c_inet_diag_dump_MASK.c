
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {int nlh; } ;
struct inet_diag_req_v2 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct netlink_callback*,int ,struct nlattr*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 struct nlattr* FUNC_3 (int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, struct netlink_callback *VAR_2)
{
 int VAR_3 = sizeof(struct inet_diag_req_v2);
 struct nlattr *VAR_4 = ((void*)0);

 if (FUNC_1(VAR_2->nlh, VAR_3))
  VAR_4 = FUNC_3(VAR_2->nlh, VAR_3, VAR_0);

 return FUNC_0(VAR_1, VAR_2, FUNC_2(VAR_2->nlh), VAR_4);
}
