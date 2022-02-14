
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_hard_iface {scalar_t__ wifi_flags; } ;



bool FUNC_0(struct batadv_hard_iface *VAR_0)
{
 if (!VAR_0)
  return 0;

 return VAR_0->wifi_flags != 0;
}
