
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int numOfChildren; int * Children; } ;
typedef TYPE_1__ VarFileInfo ;
typedef int Sdb ;


 int FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (char*,int,char*,unsigned int) ;

__attribute__((used)) static Sdb* FUNC_4(VarFileInfo* VAR_0) {
 char VAR_1[20];
 unsigned int VAR_2 = 0;
 if (!VAR_0) {
  return ((void*)0);
 }
 Sdb* VAR_3 = FUNC_1 ();
 if (!VAR_3) {
  return ((void*)0);
 }
 for (; VAR_2 < VAR_0->numOfChildren; VAR_2++) {
  FUNC_3 (VAR_1, 20, "var%d", VAR_2);
  FUNC_2 (VAR_3, VAR_1, FUNC_0 (VAR_0->Children[VAR_2]));
 }
 return VAR_3;
}
