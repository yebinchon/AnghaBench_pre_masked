
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int status; } ;
struct snd_soc_component {int dev; } ;
struct es8316_priv {int irq; int lock; struct snd_soc_jack* jack; int jd_inverted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (int ,struct es8316_priv*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct es8316_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct snd_soc_component *VAR_3,
          struct snd_soc_jack *VAR_4)
{
 struct es8316_priv *VAR_5 = FUNC_6(VAR_3);






 VAR_5->jd_inverted = FUNC_0(VAR_3->dev,
       "everest,jack-detect-inverted");

 FUNC_4(&VAR_5->lock);

 VAR_5->jack = VAR_4;

 if (VAR_5->jack->status & VAR_2)
  FUNC_2(VAR_3);

 FUNC_7(VAR_3, VAR_0,
          VAR_1,
          VAR_1);

 FUNC_5(&VAR_5->lock);


 FUNC_1(VAR_5->irq);
 FUNC_3(VAR_5->irq, VAR_5);
}
