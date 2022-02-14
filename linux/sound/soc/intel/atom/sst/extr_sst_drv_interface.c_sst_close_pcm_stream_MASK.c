
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_info {int * period_elapsed; int status; int * pcm_substream; } ;
struct intel_sst_drv {int dev; int stream_cnt; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 struct intel_sst_drv* FUNC_2 (struct device*) ;
 int FUNC_3 (struct intel_sst_drv*,unsigned int) ;
 struct stream_info* FUNC_4 (struct intel_sst_drv*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, unsigned int VAR_3)
{
 struct stream_info *VAR_4;
 int VAR_5 = 0;
 struct intel_sst_drv *VAR_6 = FUNC_2(VAR_2);

 VAR_4 = FUNC_4(VAR_6, VAR_3);
 if (!VAR_4) {
  FUNC_1(VAR_6->dev, "stream info is NULL for str %d!!!\n", VAR_3);
  return -VAR_0;
 }

 VAR_5 = FUNC_3(VAR_6, VAR_3);
 VAR_4->pcm_substream = ((void*)0);
 VAR_4->status = VAR_1;
 VAR_4->period_elapsed = ((void*)0);
 VAR_6->stream_cnt--;

 if (VAR_5)
  FUNC_1(VAR_6->dev, "free stream returned err %d\n", VAR_5);

 FUNC_0(VAR_6->dev, "Exit\n");
 return 0;
}
