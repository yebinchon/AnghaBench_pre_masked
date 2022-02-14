
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nVTrans; int ** aVTrans; } ;
typedef TYPE_1__ sqlite3 ;
typedef int VTable ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(sqlite3 *VAR_0, VTable *VAR_1){

  VAR_0->aVTrans[VAR_0->nVTrans++] = VAR_1;
  FUNC_0(VAR_1);
}
