
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct wiphy wiphy; } ;


 TYPE_1__* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;
 char* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct wiphy *VAR_3 = &FUNC_0(VAR_0)->wiphy;

 return FUNC_1(VAR_2, "%s\n", FUNC_2(VAR_3));
}
