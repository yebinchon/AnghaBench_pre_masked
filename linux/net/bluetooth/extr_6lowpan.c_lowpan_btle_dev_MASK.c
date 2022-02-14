
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct lowpan_btle_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ priv; } ;


 TYPE_1__* FUNC_0 (struct net_device const*) ;

__attribute__((used)) static inline struct lowpan_btle_dev *
FUNC_1(const struct net_device *VAR_0)
{
 return (struct lowpan_btle_dev *)FUNC_0(VAR_0)->priv;
}
