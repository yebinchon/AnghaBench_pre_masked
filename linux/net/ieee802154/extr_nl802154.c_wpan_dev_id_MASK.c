
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct wpan_dev {int wpan_phy; scalar_t__ identifier; } ;
struct TYPE_2__ {scalar_t__ wpan_phy_idx; } ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static inline u64 FUNC_1(struct wpan_dev *VAR_0)
{
 return (u64)VAR_0->identifier |
        ((u64)FUNC_0(VAR_0->wpan_phy)->wpan_phy_idx << 32);
}
