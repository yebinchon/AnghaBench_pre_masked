
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_hwdep {int ossreg; scalar_t__ oss_type; int dev; scalar_t__ device; int list; struct snd_card* card; } ;
struct snd_device {struct snd_hwdep* device_data; } ;
struct snd_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct snd_card*,scalar_t__) ;
 int FUNC_7 (int ,struct snd_card*,scalar_t__,int *,struct snd_hwdep*,int *) ;
 scalar_t__ FUNC_8 (scalar_t__,struct snd_card*,scalar_t__,int *,struct snd_hwdep*) ;

__attribute__((used)) static int FUNC_9(struct snd_device *VAR_6)
{
 struct snd_hwdep *VAR_7 = VAR_6->device_data;
 struct snd_card *VAR_8 = VAR_7->card;
 int VAR_9;

 FUNC_4(&VAR_3);
 if (FUNC_6(VAR_8, VAR_7->device)) {
  FUNC_5(&VAR_3);
  return -VAR_0;
 }
 FUNC_2(&VAR_7->list, &VAR_4);
 VAR_9 = FUNC_7(VAR_1,
      VAR_7->card, VAR_7->device,
      &VAR_5, VAR_7, &VAR_7->dev);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_7->dev, "unable to register\n");
  FUNC_3(&VAR_7->list);
  FUNC_5(&VAR_3);
  return VAR_9;
 }
 FUNC_5(&VAR_3);
 return 0;
}
