
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sst_params {int dummy; } ;
struct intel_sst_drv {int dev; int stream_cnt; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 struct intel_sst_drv* FUNC_1 (struct device*) ;
 int FUNC_2 (struct intel_sst_drv*,struct snd_sst_params*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1,
  struct snd_sst_params *VAR_2)
{
 int VAR_3;
 struct intel_sst_drv *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_4, VAR_2);
 if (VAR_3 > 0)
  VAR_4->stream_cnt++;
 else
  FUNC_0(VAR_4->dev, "sst_get_stream returned err %d\n", VAR_3);

 return VAR_3;
}
