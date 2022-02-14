
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_7__ {struct device* dev; int owner; } ;
struct axg_card {TYPE_1__ card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct axg_card*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (struct device*,char*) ;
 struct axg_card* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,TYPE_1__*) ;
 int FUNC_7 (struct platform_device*,struct axg_card*) ;
 int FUNC_8 (TYPE_1__*,struct axg_card*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct axg_card *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_7(VAR_5, VAR_7);
 FUNC_8(&VAR_7->card, VAR_7);

 VAR_7->card.owner = VAR_2;
 VAR_7->card.dev = VAR_6;

 VAR_8 = FUNC_9(&VAR_7->card, "model");
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_3(&VAR_7->card, "audio-routing",
      VAR_3);
 if (VAR_8) {
  FUNC_4(VAR_6, "error while parsing routing\n");
  return VAR_8;
 }

 VAR_8 = FUNC_3(&VAR_7->card, "audio-widgets",
      VAR_4);
 if (VAR_8) {
  FUNC_4(VAR_6, "error while parsing widgets\n");
  return VAR_8;
 }

 VAR_8 = FUNC_1(&VAR_7->card);
 if (VAR_8)
  goto out_err;

 VAR_8 = FUNC_0(&VAR_7->card);
 if (VAR_8)
  goto out_err;

 VAR_8 = FUNC_6(VAR_6, &VAR_7->card);
 if (VAR_8)
  goto out_err;

 return 0;

out_err:
 FUNC_2(VAR_7);
 return VAR_8;
}
