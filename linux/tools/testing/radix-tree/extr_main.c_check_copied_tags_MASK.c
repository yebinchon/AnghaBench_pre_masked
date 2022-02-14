
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct radix_tree_root*,unsigned long,int) ;
 int FUNC_2 (int,char*,unsigned long,unsigned long,unsigned long,int,int) ;

void FUNC_3(struct radix_tree_root *VAR_0, unsigned long VAR_1, unsigned long VAR_2, unsigned long *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {


  if (VAR_3[VAR_7] < VAR_1 || VAR_3[VAR_7] > VAR_2) {
   if (FUNC_1(VAR_0, VAR_3[VAR_7], VAR_6)) {
    FUNC_2(2, "%lu-%lu: %lu, tags %d-%d\n", VAR_1,
           VAR_2, VAR_3[VAR_7], FUNC_1(VAR_0, VAR_3[VAR_7],
         VAR_5),
           FUNC_1(VAR_0, VAR_3[VAR_7], VAR_6));
   }
   FUNC_0(!FUNC_1(VAR_0, VAR_3[VAR_7], VAR_6));
   continue;
  }
  if (FUNC_1(VAR_0, VAR_3[VAR_7], VAR_5) ^
   FUNC_1(VAR_0, VAR_3[VAR_7], VAR_6)) {
   FUNC_2(2, "%lu-%lu: %lu, tags %d-%d\n", VAR_1, VAR_2,
          VAR_3[VAR_7], FUNC_1(VAR_0, VAR_3[VAR_7], VAR_5),
          FUNC_1(VAR_0, VAR_3[VAR_7], VAR_6));
  }
  FUNC_0(!(FUNC_1(VAR_0, VAR_3[VAR_7], VAR_5) ^
    FUNC_1(VAR_0, VAR_3[VAR_7], VAR_6)));
 }
}
