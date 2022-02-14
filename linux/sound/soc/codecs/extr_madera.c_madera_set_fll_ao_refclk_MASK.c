
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct reg_sequence {int dummy; } ;
struct madera_fll {int ref_src; unsigned int ref_freq; unsigned int fout; } ;
struct TYPE_3__ {unsigned int fin; unsigned int fout; int patch_size; struct reg_sequence* patch; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct madera_fll*) ;
 int FUNC_2 (struct madera_fll*,struct reg_sequence const*,int) ;
 int FUNC_3 (struct madera_fll*,char*,unsigned int,unsigned int,int) ;
 int FUNC_4 (struct madera_fll*,char*) ;
 TYPE_1__* VAR_1 ;

int FUNC_5(struct madera_fll *VAR_2, int VAR_3,
        unsigned int VAR_4, unsigned int VAR_5)
{
 int VAR_6 = 0;
 const struct reg_sequence *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 unsigned int VAR_9;

 if (VAR_2->ref_src == VAR_3 &&
     VAR_2->ref_freq == VAR_4 && VAR_2->fout == VAR_5)
  return 0;

 FUNC_3(VAR_2, "Change FLL_AO refclk to fin=%u fout=%u source=%d\n",
         VAR_4, VAR_5, VAR_3);

 if (VAR_5 && (VAR_2->ref_freq != VAR_4 || VAR_2->fout != VAR_5)) {
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_1); VAR_9++) {
   if (VAR_1[VAR_9].fin == VAR_4 &&
       VAR_1[VAR_9].fout == VAR_5)
    break;
  }

  if (VAR_9 == FUNC_0(VAR_1)) {
   FUNC_4(VAR_2,
           "No matching configuration for FLL_AO\n");
   return -VAR_0;
  }

  VAR_7 = VAR_1[VAR_9].patch;
  VAR_8 = VAR_1[VAR_9].patch_size;
 }

 VAR_2->ref_src = VAR_3;
 VAR_2->ref_freq = VAR_4;
 VAR_2->fout = VAR_5;

 if (VAR_5)
  VAR_6 = FUNC_2(VAR_2, VAR_7, VAR_8);
 else
  FUNC_1(VAR_2);

 return VAR_6;
}
