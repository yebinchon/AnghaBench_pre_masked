
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct rt274_priv {int fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int ,char*) ;
 struct rt274_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (struct snd_soc_component*,int,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_5, int VAR_6, int VAR_7,
   unsigned int VAR_8, unsigned int VAR_9)
{
 struct snd_soc_component *VAR_10 = VAR_5->component;
 struct rt274_priv *VAR_11 = FUNC_1(VAR_10);

 switch (VAR_7) {
 case 128:
  FUNC_2(VAR_10, VAR_1,
    VAR_3, VAR_4);
  break;
 default:
  FUNC_0(VAR_10->dev, "invalid pll source, use BCLK\n");

 case 129:
  FUNC_2(VAR_10, VAR_1,
    VAR_3, VAR_2);
  break;
 }

 if (VAR_7 == 129) {
  FUNC_2(VAR_10, VAR_0,
    (0x3 << 12), (0x3 << 12));
  switch (VAR_11->fs) {
  case 50:
   FUNC_3(VAR_10, 0x7a, 0xaab6);
   FUNC_3(VAR_10, 0x7b, 0x0301);
   FUNC_3(VAR_10, 0x7c, 0x04fe);
   break;
  case 64:
   FUNC_3(VAR_10, 0x7a, 0xaa96);
   FUNC_3(VAR_10, 0x7b, 0x8003);
   FUNC_3(VAR_10, 0x7c, 0x081e);
   break;
  case 128:
   FUNC_3(VAR_10, 0x7a, 0xaa96);
   FUNC_3(VAR_10, 0x7b, 0x8003);
   FUNC_3(VAR_10, 0x7c, 0x080e);
   break;
  default:
   FUNC_0(VAR_10->dev, "invalid freq_in, assume 4.8M\n");

  case 100:
   FUNC_3(VAR_10, 0x7a, 0xaab6);
   FUNC_3(VAR_10, 0x7b, 0x0301);
   FUNC_3(VAR_10, 0x7c, 0x047e);
   break;
  }
 }

 return 0;
}
