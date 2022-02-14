
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol_new {int index; int name; } ;
struct snd_card_asihpi {TYPE_1__* pci; } ;
struct snd_card {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct snd_card*,int ) ;
 int FUNC_2 (struct snd_kcontrol_new*,struct snd_card_asihpi*) ;

__attribute__((used)) static inline int FUNC_3(struct snd_card *VAR_1, struct snd_kcontrol_new *VAR_2,
    struct snd_card_asihpi *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, FUNC_2(VAR_2, VAR_3));
 if (VAR_4 < 0)
  return VAR_4;
 else if (VAR_0)
  FUNC_0(&VAR_3->pci->dev, "added %s(%d)\n", VAR_2->name, VAR_2->index);

 return 0;
}
