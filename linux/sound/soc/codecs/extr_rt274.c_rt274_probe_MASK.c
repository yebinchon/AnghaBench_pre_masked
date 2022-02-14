
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct rt274_priv {int jack_detect_work; TYPE_1__* i2c; struct snd_soc_component* component; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 struct rt274_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_1)
{
 struct rt274_priv *VAR_2 = FUNC_3(VAR_1);

 VAR_2->component = VAR_1;

 if (VAR_2->i2c->irq) {
  FUNC_0(&VAR_2->jack_detect_work,
     VAR_0);
  FUNC_2(&VAR_2->jack_detect_work,
     FUNC_1(1250));
 }

 return 0;
}
