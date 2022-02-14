
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int dccph_sport; int dccph_dport; } ;
struct TYPE_3__ {int saddr; int daddr; } ;


 TYPE_2__* FUNC_0 (struct sk_buff const*) ;
 TYPE_1__* FUNC_1 (struct sk_buff const*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static inline u64 FUNC_3(const struct sk_buff *VAR_0)
{
 return FUNC_2(FUNC_1(VAR_0)->daddr,
        FUNC_1(VAR_0)->saddr,
        FUNC_0(VAR_0)->dccph_dport,
        FUNC_0(VAR_0)->dccph_sport);
}
