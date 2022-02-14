
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_card {char* mixername; int longname; int shortname; int driver; } ;
struct snd_ac97_template {int dummy; } ;
struct snd_ac97_bus {int * codec; } ;
struct TYPE_7__ {TYPE_1__* driver; TYPE_2__* platform_data; } ;
struct platform_device {scalar_t__ id; TYPE_3__ dev; } ;
struct TYPE_6__ {scalar_t__* codec_pdata; } ;
typedef TYPE_2__ pxa2xx_audio_ops_t ;
typedef int ac97_template ;
struct TYPE_5__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (struct snd_ac97_template*,int ,int) ;
 int FUNC_2 (struct platform_device*,struct snd_card*) ;
 int VAR_4 ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 int VAR_5 ;
 int FUNC_5 (struct snd_card*) ;
 int FUNC_6 (struct snd_card*,int ,int *,int *,struct snd_ac97_bus**) ;
 int FUNC_7 (int ,scalar_t__) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (struct snd_ac97_bus*,struct snd_ac97_template*,int *) ;
 int FUNC_10 (struct snd_card*) ;
 int FUNC_11 (TYPE_3__*,int ,int ,int ,int ,struct snd_card**) ;
 int FUNC_12 (struct snd_card*) ;
 int FUNC_13 (int ,int,char*,char*,...) ;
 int FUNC_14 (int ,char*,int) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_6)
{
 struct snd_card *VAR_7;
 struct snd_ac97_bus *VAR_8;
 struct snd_ac97_template VAR_9;
 int VAR_10;
 pxa2xx_audio_ops_t *VAR_11 = VAR_6->dev.platform_data;

 if (VAR_6->id >= 0) {
  FUNC_0(&VAR_6->dev, "PXA2xx has only one AC97 port.\n");
  VAR_10 = -VAR_0;
  goto err_dev;
 }

 VAR_10 = FUNC_11(&VAR_6->dev, VAR_1, VAR_2,
      VAR_3, 0, &VAR_7);
 if (VAR_10 < 0)
  goto err;

 FUNC_14(VAR_7->driver, VAR_6->dev.driver->name, sizeof(VAR_7->driver));

 VAR_10 = FUNC_5(VAR_7);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_3(VAR_6);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_6(VAR_7, 0, &VAR_5, ((void*)0), &VAR_8);
 if (VAR_10)
  goto err_remove;
 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_10 = FUNC_9(VAR_8, &VAR_9, &VAR_4);
 if (VAR_10)
  goto err_remove;

 FUNC_13(VAR_7->shortname, sizeof(VAR_7->shortname),
   "%s", FUNC_8(VAR_4));
 FUNC_13(VAR_7->longname, sizeof(VAR_7->longname),
   "%s (%s)", VAR_6->dev.driver->name, VAR_7->mixername);

 if (VAR_11 && VAR_11->codec_pdata[0])
  FUNC_7(VAR_8->codec[0], VAR_11->codec_pdata[0]);
 VAR_10 = FUNC_12(VAR_7);
 if (VAR_10 == 0) {
  FUNC_2(VAR_6, VAR_7);
  return 0;
 }

err_remove:
 FUNC_4(VAR_6);
err:
 if (VAR_7)
  FUNC_10(VAR_7);
err_dev:
 return VAR_10;
}
