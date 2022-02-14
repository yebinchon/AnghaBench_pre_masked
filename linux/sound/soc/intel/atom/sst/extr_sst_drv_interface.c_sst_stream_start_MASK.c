
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_info {int status; int prev; } ;
struct intel_sst_drv {scalar_t__ sst_state; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct intel_sst_drv* FUNC_0 (struct device*) ;
 struct stream_info* FUNC_1 (struct intel_sst_drv*,int) ;
 int FUNC_2 (struct intel_sst_drv*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, int VAR_4)
{
 struct stream_info *VAR_5;
 struct intel_sst_drv *VAR_6 = FUNC_0(VAR_3);

 if (VAR_6->sst_state != VAR_1)
  return 0;
 VAR_5 = FUNC_1(VAR_6, VAR_4);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->prev = VAR_5->status;
 VAR_5->status = VAR_2;
 FUNC_2(VAR_6, VAR_4);

 return 0;
}
