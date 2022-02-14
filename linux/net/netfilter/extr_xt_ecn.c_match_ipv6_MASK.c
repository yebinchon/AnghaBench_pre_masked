
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_ecn_info {int ip_ect; int invert; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int* flow_lbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct sk_buff *VAR_2,
         const struct xt_ecn_info *VAR_3)
{
 return (((FUNC_0(VAR_2)->flow_lbl[0] >> 4) & VAR_0) ==
         VAR_3->ip_ect) ^
        !!(VAR_3->invert & VAR_1);
}
