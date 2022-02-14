
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona_fll {unsigned int fout; unsigned int vco_mult; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct arizona_fll*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct arizona_fll *VAR_5,
    unsigned int VAR_6,
    unsigned int VAR_7)
{
 unsigned int VAR_8;

 if (VAR_5->fout && VAR_7 != VAR_5->fout) {
  FUNC_0(VAR_5,
    "Can't change output on active FLL\n");
  return -VAR_4;
 }

 if (VAR_6 / VAR_2 > VAR_0) {
  FUNC_0(VAR_5,
    "Can't scale %dMHz in to <=13.5MHz\n",
    VAR_6);
  return -VAR_4;
 }

 VAR_8 = VAR_3 * VAR_5->vco_mult;
 if (VAR_7 * VAR_1 < VAR_8) {
  FUNC_0(VAR_5, "No FLL_OUTDIV for Fout=%uHz\n",
    VAR_7);
  return -VAR_4;
 }

 return 0;
}
