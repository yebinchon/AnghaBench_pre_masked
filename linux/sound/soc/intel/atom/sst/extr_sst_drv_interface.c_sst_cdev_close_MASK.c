
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_info {int * compr_cb; int * compr_cb_param; } ;
struct intel_sst_drv {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct intel_sst_drv* FUNC_2 (struct device*) ;
 struct stream_info* FUNC_3 (struct intel_sst_drv*,unsigned int) ;
 int FUNC_4 (struct intel_sst_drv*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 struct stream_info *VAR_4;
 struct intel_sst_drv *VAR_5 = FUNC_2(VAR_1);

 VAR_4 = FUNC_3(VAR_5, VAR_2);
 if (!VAR_4) {
  FUNC_1(VAR_1, "stream info is NULL for str %d!!!\n", VAR_2);
  return -VAR_0;
 }

 VAR_3 = FUNC_4(VAR_5, VAR_2);
 VAR_4->compr_cb_param = ((void*)0);
 VAR_4->compr_cb = ((void*)0);

 if (VAR_3)
  FUNC_1(VAR_1, "free stream returned err %d\n", VAR_3);

 FUNC_0(VAR_1, "End\n");
 return VAR_3;
}
