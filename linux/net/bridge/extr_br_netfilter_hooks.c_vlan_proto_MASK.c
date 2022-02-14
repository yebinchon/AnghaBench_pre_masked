
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ protocol; } ;
typedef scalar_t__ __be16 ;
struct TYPE_2__ {scalar_t__ h_vlan_encapsulated_proto; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff const*) ;
 TYPE_1__* FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static inline __be16 FUNC_3(const struct sk_buff *VAR_1)
{
 if (FUNC_1(VAR_1))
  return VAR_1->protocol;
 else if (VAR_1->protocol == FUNC_0(VAR_0))
  return FUNC_2(VAR_1)->h_vlan_encapsulated_proto;
 else
  return 0;
}
