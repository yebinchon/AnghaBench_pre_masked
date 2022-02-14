
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dev; } ;
struct snd_kcontrol_new {int dummy; } ;
struct TYPE_2__ {char const** texts; size_t items; } ;
struct max98095_priv {int eq_textcnt; char const** eq_texts; TYPE_1__ eq_enum; struct max98095_pdata* pdata; } ;
struct max98095_pdata {unsigned int eq_cfgcnt; struct max98095_eq_cfg* eq_cfg; } ;
struct max98095_eq_cfg {char* name; } ;


 int FUNC_0 (struct snd_kcontrol_new*) ;
 int VAR_0 ;
 struct snd_kcontrol_new FUNC_1 (char*,TYPE_1__,int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 char** FUNC_3 (char const**,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct snd_soc_component*,struct snd_kcontrol_new*,int ) ;
 struct max98095_priv* FUNC_5 (struct snd_soc_component*) ;
 scalar_t__ FUNC_6 (char*,char const*) ;

__attribute__((used)) static void FUNC_7(struct snd_soc_component *VAR_3)
{
 struct max98095_priv *VAR_4 = FUNC_5(VAR_3);
 struct max98095_pdata *VAR_5 = VAR_4->pdata;
 struct max98095_eq_cfg *VAR_6;
 unsigned int VAR_7;
 int VAR_8, VAR_9;
 const char **VAR_10;
 int VAR_11;

 struct snd_kcontrol_new VAR_12[] = {
  FUNC_1("EQ1 Mode",
   VAR_4->eq_enum,
   VAR_1,
   VAR_2),
  FUNC_1("EQ2 Mode",
   VAR_4->eq_enum,
   VAR_1,
   VAR_2),
 };

 VAR_6 = VAR_5->eq_cfg;
 VAR_7 = VAR_5->eq_cfgcnt;




 VAR_4->eq_textcnt = 0;
 VAR_4->eq_texts = ((void*)0);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < VAR_4->eq_textcnt; VAR_9++) {
   if (FUNC_6(VAR_6[VAR_8].name, VAR_4->eq_texts[VAR_9]) == 0)
    break;
  }

  if (VAR_9 != VAR_4->eq_textcnt)
   continue;


  VAR_10 = FUNC_3(VAR_4->eq_texts,
        sizeof(char *) * (VAR_4->eq_textcnt + 1),
        VAR_0);
  if (VAR_10 == ((void*)0))
   continue;


  VAR_10[VAR_4->eq_textcnt] = VAR_6[VAR_8].name;
  VAR_4->eq_textcnt++;
  VAR_4->eq_texts = VAR_10;
 }


 VAR_4->eq_enum.texts = VAR_4->eq_texts;
 VAR_4->eq_enum.items = VAR_4->eq_textcnt;

 VAR_11 = FUNC_4(VAR_3, VAR_12, FUNC_0(VAR_12));
 if (VAR_11 != 0)
  FUNC_2(VAR_3->dev, "Failed to add EQ control: %d\n", VAR_11);
}
