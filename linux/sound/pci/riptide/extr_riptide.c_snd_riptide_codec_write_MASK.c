
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cmdret {unsigned short* retwords; } ;
struct snd_riptide {struct cmdif* cif; } ;
struct snd_ac97 {struct snd_riptide* private_data; } ;
struct cmdif {int dummy; } ;


 union cmdret VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmdif*,unsigned short,union cmdret*) ;
 int FUNC_1 (struct cmdif*,unsigned short,unsigned short) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(struct snd_ac97 *VAR_2, unsigned short VAR_3,
   unsigned short VAR_4)
{
 struct snd_riptide *VAR_5 = VAR_2->private_data;
 struct cmdif *VAR_6 = VAR_5->cif;
 union cmdret VAR_7 = VAR_0;
 int VAR_8 = 0;

 if (FUNC_2(!VAR_6))
  return;

 FUNC_3("Write AC97 reg 0x%x 0x%x\n", VAR_3, VAR_4);
 do {
  FUNC_1(VAR_6, VAR_4, VAR_3);
  FUNC_0(VAR_6, VAR_3, &VAR_7);
 } while (VAR_7.retwords[1] != VAR_4 && VAR_8++ < VAR_1);
 if (VAR_8 > VAR_1)
  FUNC_3("Write AC97 reg failed\n");
}
