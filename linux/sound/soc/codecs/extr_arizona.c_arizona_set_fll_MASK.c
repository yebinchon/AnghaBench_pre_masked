
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona_fll {int sync_src; unsigned int sync_freq; unsigned int fout; scalar_t__ ref_src; unsigned int ref_freq; } ;


 int FUNC_0 (struct arizona_fll*) ;
 int FUNC_1 (struct arizona_fll*) ;
 int FUNC_2 (struct arizona_fll*,unsigned int,unsigned int) ;

int FUNC_3(struct arizona_fll *VAR_0, int VAR_1,
      unsigned int VAR_2, unsigned int VAR_3)
{
 int VAR_4 = 0;

 if (VAR_0->sync_src == VAR_1 &&
     VAR_0->sync_freq == VAR_2 && VAR_0->fout == VAR_3)
  return 0;

 if (VAR_3) {
  if (VAR_0->ref_src >= 0) {
   VAR_4 = FUNC_2(VAR_0, VAR_0->ref_freq, VAR_3);
   if (VAR_4 != 0)
    return VAR_4;
  }

  VAR_4 = FUNC_2(VAR_0, VAR_2, VAR_3);
  if (VAR_4 != 0)
   return VAR_4;
 }

 VAR_0->sync_src = VAR_1;
 VAR_0->sync_freq = VAR_2;
 VAR_0->fout = VAR_3;

 if (VAR_3)
  VAR_4 = FUNC_1(VAR_0);
 else
  FUNC_0(VAR_0);

 return VAR_4;
}
