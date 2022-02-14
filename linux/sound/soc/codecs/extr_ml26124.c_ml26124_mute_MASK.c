
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct ml26124_priv {TYPE_1__* substream; } ;
struct TYPE_2__ {int stream; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 struct ml26124_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_4->component;
 struct ml26124_priv *VAR_7 = FUNC_1(VAR_6);

 switch (VAR_7->substream->stream) {
 case 129:
  FUNC_2(VAR_6, VAR_3, FUNC_0(0), 1);
  break;
 case 128:
  FUNC_2(VAR_6, VAR_3, FUNC_0(1), 2);
  break;
 }

 if (VAR_5)
  FUNC_2(VAR_6, VAR_2, FUNC_0(4),
        VAR_1);
 else
  FUNC_2(VAR_6, VAR_2, FUNC_0(4),
        VAR_0);

 return 0;
}
