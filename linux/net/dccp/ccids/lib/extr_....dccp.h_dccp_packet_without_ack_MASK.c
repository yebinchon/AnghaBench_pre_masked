
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef scalar_t__ __u8 ;
struct TYPE_2__ {scalar_t__ dccpd_type; } ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static inline int FUNC_1(const struct sk_buff *VAR_2)
{
 const __u8 VAR_3 = FUNC_0(VAR_2)->dccpd_type;

 return VAR_3 == VAR_0 || VAR_3 == VAR_1;
}
