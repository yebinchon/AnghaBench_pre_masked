
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct byt_max98090_private {int dummy; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int ,int ) ;
 struct byt_max98090_private* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct byt_max98090_private*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct byt_max98090_private *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  FUNC_1(&VAR_4->dev, "allocation failed\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_5->parent, VAR_2);
 if (VAR_7)
  FUNC_0(VAR_5, "Unable to add GPIO mapping table\n");

 VAR_3.dev = &VAR_4->dev;
 FUNC_5(&VAR_3, VAR_6);
 VAR_7 = FUNC_4(&VAR_4->dev, &VAR_3);
 if (VAR_7) {
  FUNC_1(&VAR_4->dev,
   "snd_soc_register_card failed %d\n", VAR_7);
  return VAR_7;
 }

 return 0;
}
