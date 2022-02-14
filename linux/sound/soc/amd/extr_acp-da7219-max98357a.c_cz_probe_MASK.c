
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_card {int name; int * dev; } ;
struct regulator_dev {int dummy; } ;
struct platform_device {int dev; } ;
struct acp_platform_info {int dummy; } ;
struct TYPE_3__ {int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct snd_soc_card VAR_6 ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (int *,char*) ;
 struct acp_platform_info* FUNC_4 (int *,int,int ) ;
 struct regulator_dev* FUNC_5 (int *,int *,TYPE_1__*) ;
 int FUNC_6 (int *,struct snd_soc_card*) ;
 int FUNC_7 (struct platform_device*,struct snd_soc_card*) ;
 int FUNC_8 (struct snd_soc_card*,struct acp_platform_info*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 int VAR_8;
 struct snd_soc_card *VAR_9;
 struct acp_platform_info *VAR_10;
 struct regulator_dev *VAR_11;

 VAR_3.dev = &VAR_7->dev;
 VAR_11 = FUNC_5(&VAR_7->dev, &VAR_4,
           &VAR_3);
 if (FUNC_0(VAR_11)) {
  FUNC_2(&VAR_7->dev, "Failed to register regulator: %d\n",
   (int)FUNC_1(VAR_11));
  return -VAR_0;
 }

 VAR_10 = FUNC_4(&VAR_7->dev, sizeof(struct acp_platform_info),
          VAR_2);
 if (!VAR_10)
  return -VAR_1;
 VAR_9 = &VAR_6;
 VAR_6.dev = &VAR_7->dev;
 FUNC_7(VAR_7, VAR_9);
 FUNC_8(VAR_9, VAR_10);
 VAR_8 = FUNC_6(&VAR_7->dev, &VAR_6);
 if (VAR_8) {
  FUNC_2(&VAR_7->dev,
    "devm_snd_soc_register_card(%s) failed: %d\n",
    VAR_6.name, VAR_8);
  return VAR_8;
 }
 VAR_5 = !FUNC_3(&VAR_7->dev,
          "bt-pad-enable");
 return 0;
}
