
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_info {int dummy; } ;
struct intel_sst_drv {scalar_t__ sst_state; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct intel_sst_drv* FUNC_0 (struct device*) ;
 struct stream_info* FUNC_1 (struct intel_sst_drv*,int) ;
 int FUNC_2 (struct intel_sst_drv*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, int VAR_3)
{
 struct stream_info *VAR_4;
 struct intel_sst_drv *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->sst_state != VAR_1)
  return 0;

 VAR_4 = FUNC_1(VAR_5, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 return FUNC_2(VAR_5, VAR_3);
}
