
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct hash_netportnet4_elem {int proto; int * cidr; int port; int * ip; scalar_t__ nomatch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static bool
FUNC_5(struct sk_buff *VAR_8,
      const struct hash_netportnet4_elem *VAR_9)
{
 u32 VAR_10 = VAR_9->nomatch ? VAR_7 : 0;

 if (FUNC_1(VAR_8, VAR_3, VAR_9->ip[0]) ||
     FUNC_1(VAR_8, VAR_4, VAR_9->ip[1]) ||
     FUNC_2(VAR_8, VAR_5, VAR_9->port) ||
     FUNC_4(VAR_8, VAR_1, VAR_9->cidr[0]) ||
     FUNC_4(VAR_8, VAR_2, VAR_9->cidr[1]) ||
     FUNC_4(VAR_8, VAR_6, VAR_9->proto) ||
     (VAR_10 &&
      FUNC_3(VAR_8, VAR_0, FUNC_0(VAR_10))))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return 1;
}
