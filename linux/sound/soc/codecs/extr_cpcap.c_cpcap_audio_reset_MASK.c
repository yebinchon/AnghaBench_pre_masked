
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dev; } ;
struct cpcap_audio {int regmap; } ;
struct TYPE_3__ {int val; int mask; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cpcap_audio*,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (struct cpcap_audio*,int ,int) ;
 int FUNC_3 (struct cpcap_audio*,int ,int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 struct cpcap_audio* FUNC_6 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_3,
        bool VAR_4)
{
 struct cpcap_audio *VAR_5 = FUNC_6(VAR_3);
 int VAR_6, VAR_7 = 0;

 FUNC_4(VAR_3->dev, "init audio codec");

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  VAR_7 = FUNC_5(VAR_5->regmap,
      VAR_2[VAR_6].reg,
      VAR_2[VAR_6].mask,
      VAR_2[VAR_6].val);
  if (VAR_7)
   return VAR_7;
 }


 VAR_7 = FUNC_1(VAR_5, VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_5, VAR_0, 0, 26000000);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_3(VAR_5, VAR_1, 0, 26000000);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_0, 48000);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_1, 48000);
 if (VAR_7)
  return VAR_7;

 return 0;
}
