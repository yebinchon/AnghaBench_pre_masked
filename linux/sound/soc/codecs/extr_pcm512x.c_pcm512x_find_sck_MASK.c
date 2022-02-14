
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; struct device* dev; } ;
struct snd_soc_component {int dummy; } ;
struct pcm512x_priv {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,unsigned long) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pcm512x_priv*) ;
 unsigned long FUNC_4 (int,unsigned long) ;
 struct pcm512x_priv* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static unsigned long FUNC_6(struct snd_soc_dai *VAR_0,
          unsigned long VAR_1)
{
 struct device *VAR_2 = VAR_0->dev;
 struct snd_soc_component *VAR_3 = VAR_0->component;
 struct pcm512x_priv *VAR_4 = FUNC_5(VAR_3);
 unsigned long VAR_5;
 int VAR_6;
 VAR_6 = 1 << FUNC_2((FUNC_3(VAR_4) - 16000000) / VAR_1);
 for (; VAR_6; VAR_6 >>= 1) {
  VAR_5 = FUNC_4(FUNC_3(VAR_4),
         VAR_1 * VAR_6);
  if (VAR_5 >= 16000000)
   break;
 }
 if (!VAR_6) {
  FUNC_1(VAR_2, "Impossible to generate a suitable SCK\n");
  return 0;
 }

 FUNC_0(VAR_2, "sck_rate %lu\n", VAR_5);
 return VAR_5;
}
