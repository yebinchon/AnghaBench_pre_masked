
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct adau7002_priv {int wakeup_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int *) ;
 struct adau7002_priv* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct snd_soc_component*,struct adau7002_priv*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_2)
{
 struct adau7002_priv *VAR_3;

 VAR_3 = FUNC_1(VAR_2->dev, sizeof(*VAR_3),
    VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_0(VAR_2->dev, "wakeup-delay-ms",
     &VAR_3->wakeup_delay);

 FUNC_2(VAR_2, VAR_3);

 return 0;
}
