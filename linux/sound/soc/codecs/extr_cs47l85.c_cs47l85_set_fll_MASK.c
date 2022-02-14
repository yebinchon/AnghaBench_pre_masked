
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct cs47l85 {int * fll; } ;


 int VAR_0 ;






 int FUNC_0 (int *,int,unsigned int,unsigned int) ;
 int FUNC_1 (int *,int,unsigned int,unsigned int) ;
 struct cs47l85* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_1, int VAR_2,
      int VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 struct cs47l85 *VAR_6 = FUNC_2(VAR_1);

 switch (VAR_2) {
 case 133:
  return FUNC_0(&VAR_6->fll[0], VAR_3, VAR_4,
          VAR_5);
 case 131:
  return FUNC_0(&VAR_6->fll[1], VAR_3, VAR_4,
          VAR_5);
 case 129:
  return FUNC_0(&VAR_6->fll[2], VAR_3, VAR_4,
          VAR_5);
 case 132:
  return FUNC_1(&VAR_6->fll[0], VAR_3, VAR_4,
           VAR_5);
 case 130:
  return FUNC_1(&VAR_6->fll[1], VAR_3, VAR_4,
           VAR_5);
 case 128:
  return FUNC_1(&VAR_6->fll[2], VAR_3, VAR_4,
           VAR_5);
 default:
  return -VAR_0;
 }
}
