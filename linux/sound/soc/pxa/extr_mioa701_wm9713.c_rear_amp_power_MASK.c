
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_2, int VAR_3)
{
 unsigned short VAR_4;

 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_2, VAR_0);
  FUNC_1(VAR_2, VAR_0, VAR_4 | 0x0100);
  VAR_4 = FUNC_0(VAR_2, VAR_1);
  FUNC_1(VAR_2, VAR_1, VAR_4 | (1<<15));
 } else {
  VAR_4 = FUNC_0(VAR_2, VAR_0);
  FUNC_1(VAR_2, VAR_0, VAR_4 & ~0x0100);
  VAR_4 = FUNC_0(VAR_2, VAR_1);
  FUNC_1(VAR_2, VAR_1, VAR_4 & ~(1<<15));
 }

 return 0;
}
