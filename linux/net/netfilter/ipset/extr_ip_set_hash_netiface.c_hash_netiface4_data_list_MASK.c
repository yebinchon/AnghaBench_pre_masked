
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct hash_netiface4_elem {int iface; int cidr; int ip; scalar_t__ nomatch; scalar_t__ physdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static bool
FUNC_5(struct sk_buff *VAR_6,
    const struct hash_netiface4_elem *VAR_7)
{
 u32 VAR_8 = VAR_7->physdev ? VAR_5 : 0;

 if (VAR_7->nomatch)
  VAR_8 |= VAR_4;
 if (FUNC_1(VAR_6, VAR_3, VAR_7->ip) ||
     FUNC_4(VAR_6, VAR_1, VAR_7->cidr) ||
     FUNC_3(VAR_6, VAR_2, VAR_7->iface) ||
     (VAR_8 &&
      FUNC_2(VAR_6, VAR_0, FUNC_0(VAR_8))))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return 1;
}
