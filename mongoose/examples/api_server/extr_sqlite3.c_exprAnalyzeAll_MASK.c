
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nTerm; } ;
typedef TYPE_1__ WhereClause ;
typedef int SrcList ;


 int FUNC_0 (int *,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(
  SrcList *VAR_0,
  WhereClause *VAR_1
){
  int VAR_2;
  for(VAR_2=VAR_1->nTerm-1; VAR_2>=0; VAR_2--){
    FUNC_0(VAR_0, VAR_1, VAR_2);
  }
}
