
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int name; TYPE_1__* parent; } ;
struct hdac_device {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int parent; } ;


 struct hdac_device* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int,int*) ;

__attribute__((used)) static int FUNC_3(struct kobject *VAR_0, struct hdac_device **VAR_1)
{
 struct device *VAR_2 = FUNC_1(VAR_0->parent->parent);
 int VAR_3;
 ssize_t VAR_4;

 VAR_4 = FUNC_2(VAR_0->name, 16, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 *VAR_1 = FUNC_0(VAR_2);
 return VAR_3;
}
