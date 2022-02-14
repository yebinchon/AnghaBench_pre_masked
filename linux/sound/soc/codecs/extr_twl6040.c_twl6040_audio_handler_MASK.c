
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct twl6040_data {TYPE_1__ hs_jack; } ;
struct snd_soc_component {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;
 struct twl6040_data* FUNC_2 (struct snd_soc_component*) ;
 int VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_3;
 struct twl6040_data *VAR_5 = FUNC_2(VAR_4);

 FUNC_1(VAR_1,
      &VAR_5->hs_jack.work, FUNC_0(200));

 return VAR_0;
}
