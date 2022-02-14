
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int max_age; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int ) ;
 TYPE_1__* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
       char *VAR_2)
{
 return FUNC_1(VAR_2, "%lu\n",
         FUNC_0(FUNC_2(VAR_0)->max_age));
}
