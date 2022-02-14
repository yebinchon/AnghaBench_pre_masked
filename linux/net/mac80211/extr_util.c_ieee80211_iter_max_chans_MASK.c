
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_iface_combination {int num_different_channels; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(const struct ieee80211_iface_combination *VAR_0,
    void *VAR_1)
{
 u32 *VAR_2 = VAR_1;

 *VAR_2 = FUNC_0(*VAR_2,
       VAR_0->num_different_channels);
}
