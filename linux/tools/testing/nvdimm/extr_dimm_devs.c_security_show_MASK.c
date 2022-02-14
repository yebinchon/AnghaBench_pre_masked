
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct nvdimm {TYPE_1__ sec; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nvdimm*,int ) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 struct nvdimm* FUNC_3 (struct device*) ;

ssize_t FUNC_4(struct device *VAR_5,
  struct device_attribute *VAR_6, char *VAR_7)
{
 struct nvdimm *VAR_8 = FUNC_3(VAR_5);





 VAR_8->sec.flags = FUNC_0(VAR_8, VAR_4);

 if (FUNC_2(VAR_1, &VAR_8->sec.flags))
  return FUNC_1(VAR_7, "disabled\n");
 if (FUNC_2(VAR_3, &VAR_8->sec.flags))
  return FUNC_1(VAR_7, "unlocked\n");
 if (FUNC_2(VAR_2, &VAR_8->sec.flags))
  return FUNC_1(VAR_7, "locked\n");
 return -VAR_0;
}
