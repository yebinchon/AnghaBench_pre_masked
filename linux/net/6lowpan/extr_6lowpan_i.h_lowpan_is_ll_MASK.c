
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
typedef enum lowpan_lltypes { ____Placeholder_lowpan_lltypes } lowpan_lltypes ;
struct TYPE_2__ {int lltype; } ;


 TYPE_1__* FUNC_0 (struct net_device const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct net_device *VAR_0,
    enum lowpan_lltypes VAR_1)
{
 return FUNC_0(VAR_0)->lltype == VAR_1;
}
