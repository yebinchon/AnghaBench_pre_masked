
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlv320dac33_priv {int mutex; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (struct snd_soc_component*,unsigned int,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct tlv320dac33_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_0, unsigned int VAR_1,
         unsigned int VAR_2)
{
 struct tlv320dac33_priv *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;

 FUNC_1(&VAR_3->mutex);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_3->mutex);

 return VAR_4;
}
