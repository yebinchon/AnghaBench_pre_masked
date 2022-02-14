
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge*,int ) ;
 int FUNC_1 (char*,char*,int) ;
 struct net_bridge* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
           struct device_attribute *VAR_2,
           char *VAR_3)
{
 struct net_bridge *VAR_4 = FUNC_2(VAR_1);
 return FUNC_1(VAR_3, "%d\n", FUNC_0(VAR_4, VAR_0));
}
