
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* dev; } ;
struct cpcap_audio {int vendor; int regmap; struct snd_soc_component* component; } ;
struct TYPE_3__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_soc_component*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (int ,int *) ;
 struct cpcap_audio* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,struct cpcap_audio*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_3)
{
 struct cpcap_audio *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_3->dev, sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return -VAR_1;
 FUNC_5(VAR_3, VAR_4);
 VAR_4->component = VAR_3;

 VAR_4->regmap = FUNC_2(VAR_3->dev->parent, ((void*)0));
 if (!VAR_4->regmap)
  return -VAR_0;
 FUNC_4(VAR_3, VAR_4->regmap);

 VAR_5 = FUNC_1(VAR_3->dev, VAR_4->regmap, &VAR_4->vendor);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_3, 0);
}
