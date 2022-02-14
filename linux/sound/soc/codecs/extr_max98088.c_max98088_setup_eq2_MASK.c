
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct max98088_priv {int * eq_texts; int eq_textcnt; struct max98088_cdata* dai; struct max98088_pdata* pdata; } ;
struct max98088_pdata {int eq_cfgcnt; struct max98088_eq_cfg* eq_cfg; } ;
struct max98088_eq_cfg {int band5; int band4; int band3; int band2; int band1; scalar_t__ rate; int name; } ;
struct max98088_cdata {int rate; int eq_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int ,scalar_t__,int) ;
 int FUNC_2 (struct snd_soc_component*,int,int,int ) ;
 struct max98088_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct snd_soc_component *VAR_3)
{
       struct max98088_priv *VAR_4 = FUNC_3(VAR_3);
       struct max98088_pdata *VAR_5 = VAR_4->pdata;
       struct max98088_eq_cfg *VAR_6;
       int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
       struct max98088_cdata *VAR_13;

       VAR_13 = &VAR_4->dai[1];

       if (!VAR_5 || !VAR_4->eq_textcnt)
               return;


       VAR_12 = VAR_13->rate;

       VAR_11 = VAR_13->eq_sel;
       VAR_7 = 0;
       VAR_8 = VAR_0;
       for (VAR_10 = 0; VAR_10 < VAR_5->eq_cfgcnt; VAR_10++) {
               if (FUNC_6(VAR_5->eq_cfg[VAR_10].name, VAR_4->eq_texts[VAR_11]) == 0 &&
                   FUNC_0(VAR_5->eq_cfg[VAR_10].rate - VAR_12) < VAR_8) {
                       VAR_7 = VAR_10;
                       VAR_8 = FUNC_0(VAR_5->eq_cfg[VAR_10].rate - VAR_12);
               }
       }

       FUNC_1(VAR_3->dev, "Selected %s/%dHz for %dHz sample rate\n",
               VAR_5->eq_cfg[VAR_7].name,
               VAR_5->eq_cfg[VAR_7].rate, VAR_12);


       VAR_9 = FUNC_4(VAR_3, VAR_2);
       FUNC_5(VAR_3, VAR_2, VAR_1, 0);

       VAR_6 = &VAR_5->eq_cfg[VAR_11];

       FUNC_2(VAR_3, 1, 0, VAR_6->band1);
       FUNC_2(VAR_3, 1, 1, VAR_6->band2);
       FUNC_2(VAR_3, 1, 2, VAR_6->band3);
       FUNC_2(VAR_3, 1, 3, VAR_6->band4);
       FUNC_2(VAR_3, 1, 4, VAR_6->band5);


       FUNC_5(VAR_3, VAR_2, VAR_1,
               VAR_9);
}
