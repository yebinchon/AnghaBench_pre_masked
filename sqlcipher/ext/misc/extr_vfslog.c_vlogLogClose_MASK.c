
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_mutex ;
struct TYPE_6__ {scalar_t__ nRef; scalar_t__ zFilename; int out; TYPE_1__** ppPrev; TYPE_1__* pNext; } ;
typedef TYPE_2__ VLogLog ;
struct TYPE_5__ {struct TYPE_5__** ppPrev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(VLogLog *VAR_1){
  if( VAR_1 ){
    sqlite3_mutex *VAR_2;
    VAR_1->nRef--;
    if( VAR_1->nRef>0 || VAR_1->zFilename==0 ) return;
    VAR_2 = FUNC_2(VAR_0);
    FUNC_3(VAR_2);
    *VAR_1->ppPrev = VAR_1->pNext;
    if( VAR_1->pNext ) VAR_1->pNext->ppPrev = VAR_1->ppPrev;
    FUNC_4(VAR_2);
    FUNC_0(VAR_1->out);
    FUNC_1(VAR_1);
  }
}
