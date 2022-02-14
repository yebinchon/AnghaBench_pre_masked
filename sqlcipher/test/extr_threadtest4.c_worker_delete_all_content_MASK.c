
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nTest; int pWrMutex; int tid; } ;
typedef TYPE_1__ WorkerInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;

__attribute__((used)) static void FUNC_3(WorkerInfo *VAR_0, int VAR_1){
  if( VAR_1 ){
    FUNC_0(VAR_0->pWrMutex);
    FUNC_2(VAR_0, "BEGIN");
    FUNC_2(VAR_0, "DELETE FROM t1 WHERE tid=%d", VAR_0->tid);
    FUNC_2(VAR_0, "DELETE FROM t2 WHERE tid=%d", VAR_0->tid);
    FUNC_2(VAR_0, "DELETE FROM t3 WHERE tid=%d", VAR_0->tid);
    FUNC_2(VAR_0, "COMMIT");
    FUNC_1(VAR_0->pWrMutex);
    VAR_0->nTest++;
  }else{
    FUNC_0(VAR_0->pWrMutex);
    FUNC_2(VAR_0, "DELETE FROM t1 WHERE tid=%d", VAR_0->tid);
    FUNC_1(VAR_0->pWrMutex);
    VAR_0->nTest++;
    FUNC_0(VAR_0->pWrMutex);
    FUNC_2(VAR_0, "DELETE FROM t2 WHERE tid=%d", VAR_0->tid);
    FUNC_1(VAR_0->pWrMutex);
    VAR_0->nTest++;
    FUNC_0(VAR_0->pWrMutex);
    FUNC_2(VAR_0, "DELETE FROM t3 WHERE tid=%d", VAR_0->tid);
    FUNC_1(VAR_0->pWrMutex);
    VAR_0->nTest++;
  }
}
