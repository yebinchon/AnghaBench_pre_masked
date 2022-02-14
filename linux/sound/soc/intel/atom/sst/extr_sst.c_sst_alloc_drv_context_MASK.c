
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sst_drv {unsigned int dev_id; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_sst_drv* FUNC_0 (struct device*,int,int ) ;

int FUNC_1(struct intel_sst_drv **VAR_2,
  struct device *VAR_3, unsigned int VAR_4)
{
 *VAR_2 = FUNC_0(VAR_3, sizeof(struct intel_sst_drv), VAR_1);
 if (!(*VAR_2))
  return -VAR_0;

 (*VAR_2)->dev = VAR_3;
 (*VAR_2)->dev_id = VAR_4;

 return 0;
}
