
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct cs42l56_private {unsigned int mclk; void* mclk_div2; void* mclk_prediv; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cs42l56_private* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,void*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_6,
   int VAR_7, unsigned int VAR_8, int VAR_9)
{
 struct snd_soc_component *VAR_10 = VAR_6->component;
 struct cs42l56_private *VAR_11 = FUNC_0(VAR_10);

 switch (VAR_8) {
 case 130:
 case 129:
 case 128:
  VAR_11->mclk_div2 = 0;
  VAR_11->mclk_prediv = 0;
  break;
 case 136:
 case 135:
 case 134:
  VAR_11->mclk_div2 = VAR_1;
  VAR_11->mclk_prediv = 0;
  break;
 case 133:
 case 132:
 case 131:
  VAR_11->mclk_div2 = VAR_1;
  VAR_11->mclk_prediv = VAR_3;
  break;
 default:
  return -VAR_5;
 }
 VAR_11->mclk = VAR_8;

 FUNC_1(VAR_10, VAR_0,
       VAR_4,
    VAR_11->mclk_prediv);
 FUNC_1(VAR_10, VAR_0,
       VAR_2,
    VAR_11->mclk_div2);

 return 0;
}
