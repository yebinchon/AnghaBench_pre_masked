
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_fll {unsigned int fout; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct madera_fll*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct madera_fll *VAR_3,
     unsigned int VAR_4,
     unsigned int VAR_5)
{
 if (VAR_5 && !VAR_4) {
  FUNC_0(VAR_3, "fllout set without valid input clk\n");
  return -VAR_0;
 }

 if (VAR_3->fout && VAR_5 != VAR_3->fout) {
  FUNC_0(VAR_3, "Can't change output on active FLL\n");
  return -VAR_0;
 }

 if (VAR_4 / VAR_2 > VAR_1) {
  FUNC_0(VAR_3, "Can't scale %dMHz to <=13MHz\n", VAR_4);
  return -VAR_0;
 }

 return 0;
}
