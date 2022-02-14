
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_bridge {scalar_t__ default_pvid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct net_bridge*,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (struct net_bridge*,int ) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct net_bridge *VAR_4, unsigned long VAR_5)
{
 u16 VAR_6 = VAR_5;
 int VAR_7 = 0;

 if (VAR_5 >= VAR_3)
  return -VAR_1;

 if (VAR_6 == VAR_4->default_pvid)
  goto out;


 if (FUNC_1(VAR_4, VAR_0)) {
  FUNC_2("Please disable vlan filtering to change default_pvid\n");
  VAR_7 = -VAR_2;
  goto out;
 }
 VAR_7 = FUNC_0(VAR_4, VAR_6, ((void*)0));
out:
 return VAR_7;
}
