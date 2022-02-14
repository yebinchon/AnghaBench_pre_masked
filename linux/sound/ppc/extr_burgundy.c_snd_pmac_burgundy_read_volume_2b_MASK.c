
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pmac {int dummy; } ;


 long VAR_0 ;
 long FUNC_0 (struct snd_pmac*,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct snd_pmac *VAR_1, unsigned int VAR_2,
     long *VAR_3, int VAR_4)
{
 VAR_3[0] = FUNC_0(VAR_1, VAR_2 + VAR_4);
 if (VAR_3[0] >= VAR_0)
  VAR_3[0] -= VAR_0;
 else
  VAR_3[0] = 0;
 VAR_3[1] = FUNC_0(VAR_1, VAR_2 + VAR_4 + 0x100);
 if (VAR_3[1] >= VAR_0)
  VAR_3[1] -= VAR_0;
 else
  VAR_3[1] = 0;
}
