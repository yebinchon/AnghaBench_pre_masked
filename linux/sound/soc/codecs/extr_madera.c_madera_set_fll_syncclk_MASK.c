
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_fll {int sync_src; unsigned int sync_freq; } ;


 int FUNC_0 (struct madera_fll*) ;

int FUNC_1(struct madera_fll *VAR_0, int VAR_1,
      unsigned int VAR_2, unsigned int VAR_3)
{






 if (VAR_0->sync_src == VAR_1 && VAR_0->sync_freq == VAR_2)
  return 0;

 VAR_0->sync_src = VAR_1;
 VAR_0->sync_freq = VAR_2;

 return FUNC_0(VAR_0);
}
