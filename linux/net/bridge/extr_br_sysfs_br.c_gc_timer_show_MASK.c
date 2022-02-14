
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer; } ;
struct net_bridge {TYPE_1__ gc_work; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int ) ;
 struct net_bridge* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct net_bridge *VAR_3 = FUNC_2(VAR_0);
 return FUNC_1(VAR_2, "%ld\n", FUNC_0(&VAR_3->gc_work.timer));
}
