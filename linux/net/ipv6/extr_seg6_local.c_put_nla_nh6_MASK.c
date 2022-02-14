
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct seg6_local_lwt {int nh6; } ;
struct nlattr {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, struct seg6_local_lwt *VAR_3)
{
 struct nlattr *VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_1, sizeof(struct in6_addr));
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(FUNC_1(VAR_4), &VAR_3->nh6, sizeof(struct in6_addr));

 return 0;
}
