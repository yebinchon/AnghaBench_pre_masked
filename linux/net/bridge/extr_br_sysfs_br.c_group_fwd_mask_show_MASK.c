
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int group_fwd_mask; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct net_bridge* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
       struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct net_bridge *VAR_3 = FUNC_1(VAR_0);
 return FUNC_0(VAR_2, "%#x\n", VAR_3->group_fwd_mask);
}
