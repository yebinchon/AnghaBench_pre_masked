
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct snd_soc_component* component; } ;
struct wm8994_priv {int mic_work; TYPE_1__ hubs; } ;
struct snd_soc_component {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct wm8994_priv *VAR_4 = VAR_3;
 struct snd_soc_component *VAR_5 = VAR_4->hubs.component;


 FUNC_4(FUNC_0(VAR_5->dev));


 FUNC_2(VAR_5->dev, 300);

 FUNC_3(VAR_1,
      &VAR_4->mic_work, FUNC_1(250));

 return VAR_0;
}
