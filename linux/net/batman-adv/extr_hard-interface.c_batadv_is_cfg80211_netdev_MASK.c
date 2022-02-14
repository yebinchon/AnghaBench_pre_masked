
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ ieee80211_ptr; } ;



__attribute__((used)) static bool FUNC_0(struct net_device *VAR_0)
{
 if (!VAR_0)
  return 0;


 if (VAR_0->ieee80211_ptr)
  return 1;

 return 0;
}
