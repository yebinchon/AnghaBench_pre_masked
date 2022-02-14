
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_loaddata {int ** dents; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct aa_loaddata *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!FUNC_0(VAR_1->dents[VAR_2])) {

   FUNC_1(VAR_1->dents[VAR_2]);
   VAR_1->dents[VAR_2] = ((void*)0);
  }
 }
}
