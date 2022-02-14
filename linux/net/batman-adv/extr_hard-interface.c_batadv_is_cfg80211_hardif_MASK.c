
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct batadv_hard_iface {int wifi_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0(struct batadv_hard_iface *VAR_2)
{
 u32 VAR_3 = 0;

 VAR_3 |= VAR_0;
 VAR_3 |= VAR_1;

 return !!(VAR_2->wifi_flags & VAR_3);
}
