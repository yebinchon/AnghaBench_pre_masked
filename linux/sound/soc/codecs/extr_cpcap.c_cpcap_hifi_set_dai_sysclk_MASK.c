
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {struct device* dev; } ;
struct device {int dummy; } ;
struct cpcap_audio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpcap_audio*,int ,int,unsigned int) ;
 int FUNC_1 (struct device*,char*,int,unsigned int) ;
 struct cpcap_audio* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_1, int VAR_2,
         unsigned int VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_1->component;
 struct cpcap_audio *VAR_6 = FUNC_2(VAR_5);
 struct device *VAR_7 = VAR_5->dev;

 FUNC_1(VAR_7, "HiFi setup sysclk: clk_id=%u, freq=%u", VAR_2, VAR_3);
 return FUNC_0(VAR_6, VAR_0, VAR_2, VAR_3);
}
