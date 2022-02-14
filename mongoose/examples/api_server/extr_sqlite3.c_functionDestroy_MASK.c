
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_6__ {TYPE_1__* pDestructor; } ;
struct TYPE_5__ {scalar_t__ nRef; int pUserData; int (* xDestroy ) (int ) ;} ;
typedef TYPE_1__ FuncDestructor ;
typedef TYPE_2__ FuncDef ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(sqlite3 *VAR_0, FuncDef *VAR_1){
  FuncDestructor *VAR_2 = VAR_1->pDestructor;
  if( VAR_2 ){
    VAR_2->nRef--;
    if( VAR_2->nRef==0 ){
      VAR_2->xDestroy(VAR_2->pUserData);
      FUNC_0(VAR_0, VAR_2);
    }
  }
}
