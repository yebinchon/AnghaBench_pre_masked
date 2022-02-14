
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona_fll {int ref_src; unsigned int ref_freq; scalar_t__ fout; } ;


 int FUNC_0 (struct arizona_fll*) ;
 int FUNC_1 (struct arizona_fll*,unsigned int,scalar_t__) ;

int FUNC_2(struct arizona_fll *VAR_0, int VAR_1,
      unsigned int VAR_2, unsigned int VAR_3)
{
 int VAR_4 = 0;

 if (VAR_0->ref_src == VAR_1 && VAR_0->ref_freq == VAR_2)
  return 0;

 if (VAR_0->fout && VAR_2 > 0) {
  VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_0->fout);
  if (VAR_4 != 0)
   return VAR_4;
 }

 VAR_0->ref_src = VAR_1;
 VAR_0->ref_freq = VAR_2;

 if (VAR_0->fout && VAR_2 > 0)
  VAR_4 = FUNC_0(VAR_0);

 return VAR_4;
}
