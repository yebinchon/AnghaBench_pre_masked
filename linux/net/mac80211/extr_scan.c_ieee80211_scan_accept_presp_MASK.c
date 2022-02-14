
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int addr; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int ) ;
 scalar_t__ FUNC_1 (int const*) ;

__attribute__((used)) static bool FUNC_2(struct ieee80211_sub_if_data *VAR_2,
     u32 VAR_3, const u8 *VAR_4)
{
 if (!VAR_2)
  return 0;

 if (VAR_3 & VAR_0 &&
     FUNC_1(VAR_4))
  return 1;
 if (VAR_3 & VAR_1)
  return 1;
 return FUNC_0(VAR_4, VAR_2->vif.addr);
}
