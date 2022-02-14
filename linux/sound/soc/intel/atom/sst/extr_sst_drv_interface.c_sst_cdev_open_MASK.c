
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_info {int drain_cb_param; int drain_notify; int compr_cb_param; int compr_cb; } ;
struct sst_compress_cb {int drain_cb_param; int drain_notify; int param; int compr_cb; } ;
struct snd_sst_params {int dummy; } ;
struct intel_sst_drv {struct stream_info* streams; int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct intel_sst_drv* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct intel_sst_drv*,struct snd_sst_params*) ;
 int FUNC_6 (struct intel_sst_drv*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1,
  struct snd_sst_params *VAR_2, struct sst_compress_cb *VAR_3)
{
 int VAR_4, VAR_5;
 struct stream_info *VAR_6;
 struct intel_sst_drv *VAR_7 = FUNC_2(VAR_1);

 VAR_5 = FUNC_3(VAR_7->dev);
 if (VAR_5 < 0) {
  FUNC_4(VAR_7->dev);
  return VAR_5;
 }

 VAR_4 = FUNC_5(VAR_7, VAR_2);
 if (VAR_4 > 0) {
  FUNC_0(VAR_1, "stream allocated in sst_cdev_open %d\n", VAR_4);
  VAR_6 = &VAR_7->streams[VAR_4];
  VAR_6->compr_cb = VAR_3->compr_cb;
  VAR_6->compr_cb_param = VAR_3->param;
  VAR_6->drain_notify = VAR_3->drain_notify;
  VAR_6->drain_cb_param = VAR_3->drain_cb_param;
 } else {
  FUNC_1(VAR_1, "stream encountered error during alloc %d\n", VAR_4);
  VAR_4 = -VAR_0;
  FUNC_6(VAR_7);
 }
 return VAR_4;
}
