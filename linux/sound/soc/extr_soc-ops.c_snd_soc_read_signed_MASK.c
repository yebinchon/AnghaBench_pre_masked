
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_0,
 unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3,
 unsigned int VAR_4, int *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_1(VAR_0, VAR_1, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = (VAR_7 >> VAR_3) & VAR_2;

 if (!VAR_4) {
  *VAR_5 = VAR_7;
  return 0;
 }


 if (!(VAR_7 & FUNC_0(VAR_4))) {
  *VAR_5 = VAR_7;
  return 0;
 }

 VAR_6 = VAR_7;







 VAR_6 |= ~((int)(FUNC_0(VAR_4) - 1));

 *VAR_5 = VAR_6;

 return 0;
}
