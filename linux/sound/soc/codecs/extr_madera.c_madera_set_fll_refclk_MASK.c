
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_fll {int ref_src; unsigned int ref_freq; unsigned int fout; int base; } ;


 int VAR_0 ;
 int FUNC_0 (struct madera_fll*) ;
 int FUNC_1 (struct madera_fll*,char*) ;
 int FUNC_2 (struct madera_fll*,int ) ;

int FUNC_3(struct madera_fll *VAR_1, int VAR_2,
     unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 if (VAR_1->ref_src == VAR_2 &&
     VAR_1->ref_freq == VAR_3 && VAR_1->fout == VAR_4)
  return 0;





 if (VAR_4 && VAR_4 != VAR_1->fout) {
  VAR_5 = FUNC_2(VAR_1, VAR_1->base);
  if (VAR_5 < 0)
   return VAR_5;

  if (VAR_5) {
   FUNC_1(VAR_1, "Can't change Fout on active FLL\n");
   return -VAR_0;
  }
 }

 VAR_1->ref_src = VAR_2;
 VAR_1->ref_freq = VAR_3;
 VAR_1->fout = VAR_4;

 return FUNC_0(VAR_1);
}
