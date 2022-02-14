
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int saddr; int daddr; } ;


 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct net const*,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(const struct net *VAR_0, const struct sk_buff *VAR_1)
{
 return FUNC_1(VAR_0, FUNC_0(VAR_1)->daddr, FUNC_0(VAR_1)->saddr);
}
