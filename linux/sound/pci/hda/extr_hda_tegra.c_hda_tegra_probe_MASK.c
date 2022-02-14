
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {struct azx* private_data; } ;
struct platform_device {int dev; } ;
struct azx {int dummy; } ;
struct hda_tegra {int probe_work; int * dev; struct azx chip; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct azx*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,struct snd_card*) ;
 struct hda_tegra* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct snd_card*,unsigned int const,struct hda_tegra*) ;
 int FUNC_5 (struct hda_tegra*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct snd_card*) ;
 int FUNC_10 (int *,int ,int ,int ,int ,struct snd_card**) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 const unsigned int VAR_8 = VAR_0 |
       VAR_1;
 struct snd_card *VAR_9;
 struct azx *VAR_10;
 struct hda_tegra *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(&VAR_7->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;
 VAR_11->dev = &VAR_7->dev;
 VAR_10 = &VAR_11->chip;

 VAR_12 = FUNC_10(&VAR_7->dev, VAR_4, VAR_5,
      VAR_6, 0, &VAR_9);
 if (VAR_12 < 0) {
  FUNC_1(&VAR_7->dev, "Error creating card!\n");
  return VAR_12;
 }

 VAR_12 = FUNC_5(VAR_11);
 if (VAR_12 < 0)
  goto out_free;

 VAR_12 = FUNC_4(VAR_9, VAR_8, VAR_11);
 if (VAR_12 < 0)
  goto out_free;
 VAR_9->private_data = VAR_10;

 FUNC_2(&VAR_7->dev, VAR_9);

 FUNC_6(VAR_11->dev);
 if (!FUNC_0(VAR_10))
  FUNC_7(VAR_11->dev);

 FUNC_8(&VAR_11->probe_work);

 return 0;

out_free:
 FUNC_9(VAR_9);
 return VAR_12;
}
