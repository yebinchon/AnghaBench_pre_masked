
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_lib_info {int * fw; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct skl_lib_info *VAR_0, int VAR_1)
{
 int VAR_2;


 for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2].fw) {
   FUNC_0(VAR_0[VAR_2].fw);
   VAR_0[VAR_2].fw = ((void*)0);
  }
 }
}
