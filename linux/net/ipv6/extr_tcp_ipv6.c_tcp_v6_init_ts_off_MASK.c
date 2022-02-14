
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_5__ {int s6_addr32; } ;
struct TYPE_4__ {int s6_addr32; } ;
struct TYPE_6__ {TYPE_2__ saddr; TYPE_1__ daddr; } ;


 TYPE_3__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct net const*,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(const struct net *VAR_0, const struct sk_buff *VAR_1)
{
 return FUNC_1(VAR_0, FUNC_0(VAR_1)->daddr.s6_addr32,
       FUNC_0(VAR_1)->saddr.s6_addr32);
}
