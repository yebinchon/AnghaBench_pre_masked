
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct rt298_priv {int jack_detect_work; int regmap; TYPE_1__* i2c; struct snd_soc_component* component; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 struct rt298_priv* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_2)
{
 struct rt298_priv *VAR_3 = FUNC_4(VAR_2);

 VAR_3->component = VAR_2;

 if (VAR_3->i2c->irq) {
  FUNC_2(VAR_3->regmap,
     VAR_0, 0x2, 0x2);

  FUNC_0(&VAR_3->jack_detect_work,
     VAR_1);
  FUNC_3(&VAR_3->jack_detect_work,
     FUNC_1(1250));
 }

 return 0;
}
