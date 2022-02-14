
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int send_uevent; } ;


 int FUNC_0 (char const*,size_t,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 return FUNC_0(VAR_3, VAR_4,
        &VAR_0->send_uevent);
}
