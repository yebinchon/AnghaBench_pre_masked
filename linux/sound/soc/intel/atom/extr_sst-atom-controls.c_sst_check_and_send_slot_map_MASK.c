
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sst_enum {TYPE_2__* w; } ;
struct sst_data {TYPE_3__* pdev; } ;
struct TYPE_4__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; scalar_t__ private_value; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {scalar_t__ power; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct sst_data*) ;

__attribute__((used)) static int FUNC_2(struct sst_data *VAR_0, struct snd_kcontrol *VAR_1)
{
 struct sst_enum *VAR_2 = (void *)VAR_1->private_value;
 int VAR_3 = 0;

 if (VAR_2->w && VAR_2->w->power)
  VAR_3 = FUNC_1(VAR_0);
 else if (!VAR_2->w)
  FUNC_0(&VAR_0->pdev->dev, "Slot control: %s doesn't have DAPM widget!!!\n",
    VAR_1->id.name);
 return VAR_3;
}
