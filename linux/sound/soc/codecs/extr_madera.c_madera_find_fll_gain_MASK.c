
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_fll_gains {unsigned int min; unsigned int max; int alt_gain; int gain; } ;
struct madera_fll_cfg {int alt_gain; int gain; } ;
struct madera_fll {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct madera_fll*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct madera_fll *VAR_1,
    struct madera_fll_cfg *VAR_2,
    unsigned int VAR_3,
    const struct madera_fll_gains *VAR_4,
    int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_4[VAR_6].min <= VAR_3 && VAR_3 <= VAR_4[VAR_6].max) {
   VAR_2->gain = VAR_4[VAR_6].gain;
   VAR_2->alt_gain = VAR_4[VAR_6].alt_gain;
   return 0;
  }
 }

 FUNC_0(VAR_1, "Unable to find gain for fref=%uHz\n", VAR_3);

 return -VAR_0;
}
