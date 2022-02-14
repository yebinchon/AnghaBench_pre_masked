
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cmdret {unsigned short* retwords; } ;
struct snd_riptide {struct cmdif* cif; } ;
struct snd_ac97 {struct snd_riptide* private_data; } ;
struct cmdif {int dummy; } ;


 union cmdret VAR_0 ;
 scalar_t__ FUNC_0 (struct cmdif*,unsigned short,union cmdret*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,unsigned short,unsigned short) ;

__attribute__((used)) static unsigned short FUNC_3(struct snd_ac97 *VAR_1,
          unsigned short VAR_2)
{
 struct snd_riptide *VAR_3 = VAR_1->private_data;
 struct cmdif *VAR_4 = VAR_3->cif;
 union cmdret VAR_5 = VAR_0;

 if (FUNC_1(!VAR_4))
  return 0;

 if (FUNC_0(VAR_4, VAR_2, &VAR_5) != 0)
  FUNC_0(VAR_4, VAR_2, &VAR_5);
 FUNC_2("Read AC97 reg 0x%x got 0x%x\n", VAR_2, VAR_5.retwords[1]);
 return VAR_5.retwords[1];
}
