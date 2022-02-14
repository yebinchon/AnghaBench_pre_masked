
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int s6_addr32; } ;
struct TYPE_5__ {int s6_addr32; } ;
struct TYPE_8__ {TYPE_2__ saddr; TYPE_1__ daddr; } ;
struct TYPE_7__ {int source; int dest; } ;


 TYPE_4__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 TYPE_3__* FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static u32 FUNC_3(const struct sk_buff *VAR_0)
{
 return FUNC_1(FUNC_0(VAR_0)->daddr.s6_addr32,
    FUNC_0(VAR_0)->saddr.s6_addr32,
    FUNC_2(VAR_0)->dest,
    FUNC_2(VAR_0)->source);
}
