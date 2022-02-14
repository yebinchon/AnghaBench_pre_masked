
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (unsigned int*) ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int* VAR_3 ;
 int FUNC_2 (struct snd_soc_component*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_4,
      int VAR_5, unsigned int VAR_6, int VAR_7,
      unsigned int VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_4->component;
 int VAR_10;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = FUNC_1(0x7) | VAR_0;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++) {
  if (VAR_3[VAR_10] < 0)
   continue;
  if (VAR_3[VAR_10] == VAR_6)
   break;
 }

 if (VAR_10 == FUNC_0(VAR_3))
  return -VAR_1;

 if (VAR_5 == VAR_2)
  VAR_11 |= VAR_0;

 VAR_11 |= FUNC_1(VAR_10);

 FUNC_2(VAR_9, VAR_8, VAR_12, VAR_11);

 return 0;
}
