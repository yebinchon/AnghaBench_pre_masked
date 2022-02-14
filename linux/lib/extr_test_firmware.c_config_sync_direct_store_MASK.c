
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ sync_direct; int req_firmware; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,size_t,scalar_t__*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 int VAR_7 = FUNC_0(VAR_5, VAR_6,
          &VAR_2->sync_direct);

 if (VAR_7 == VAR_6)
  VAR_2->req_firmware = VAR_2->sync_direct ?
           VAR_1 :
           VAR_0;
 return VAR_7;
}
