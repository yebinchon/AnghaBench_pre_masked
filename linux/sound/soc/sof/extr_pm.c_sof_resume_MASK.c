
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_dev {int dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int runtime_resume; int resume; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 struct snd_sof_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct snd_sof_dev*) ;
 int FUNC_4 (struct snd_sof_dev*) ;
 int FUNC_5 (struct snd_sof_dev*) ;
 int FUNC_6 (struct snd_sof_dev*) ;
 int FUNC_7 (struct snd_sof_dev*) ;
 TYPE_1__* FUNC_8 (struct snd_sof_dev*) ;
 int FUNC_9 (struct snd_sof_dev*) ;
 int FUNC_10 (struct snd_sof_dev*,int ) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_1, bool VAR_2)
{
 struct snd_sof_dev *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;


 if (!FUNC_8(VAR_3)->resume || !FUNC_8(VAR_3)->runtime_resume)
  return 0;





 if (VAR_2)
  VAR_4 = FUNC_4(VAR_3);
 else
  VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3->dev,
   "error: failed to power up DSP after resume\n");
  return VAR_4;
 }


 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3->dev,
   "error: failed to load DSP firmware after resume %d\n",
   VAR_4);
  return VAR_4;
 }


 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3->dev,
   "error: failed to boot DSP firmware after resume %d\n",
   VAR_4);
  return VAR_4;
 }


 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 < 0) {

  FUNC_2(VAR_3->dev,
    "warning: failed to init trace after resume %d\n",
    VAR_4);
 }


 VAR_4 = FUNC_9(VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3->dev,
   "error: failed to restore pipeline after resume %d\n",
   VAR_4);
  return VAR_4;
 }


 VAR_4 = FUNC_10(VAR_3, VAR_0);
 if (VAR_4 < 0)
  FUNC_0(VAR_3->dev,
   "error: ctx_restore ipc error during resume %d\n",
   VAR_4);

 return VAR_4;
}
