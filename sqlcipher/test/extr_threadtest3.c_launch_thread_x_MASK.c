
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int iMaxTid; TYPE_2__* pThread; } ;
typedef TYPE_1__ Threadset ;
struct TYPE_10__ {int iTid; char* (* xProc ) (int,void*) ;struct TYPE_10__* pNext; int tid; void* pArg; } ;
typedef TYPE_2__ Thread ;
struct TYPE_11__ {scalar_t__ rc; } ;
typedef TYPE_3__ Error ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int *,int *,int ,void*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_5(
  Error *VAR_2,
  Threadset *VAR_3,
  char *(*VAR_4)(int, void*),
  void *VAR_5
){
  if( VAR_2->rc==VAR_0 ){
    int VAR_6 = ++VAR_3->iMaxTid;
    Thread *VAR_7;
    int VAR_8;

    VAR_7 = (Thread *)FUNC_3(sizeof(Thread));
    FUNC_0(VAR_7, 0, sizeof(Thread));
    VAR_7->iTid = VAR_6;
    VAR_7->pArg = VAR_5;
    VAR_7->xProc = VAR_4;

    VAR_8 = FUNC_1(&VAR_7->tid, ((void*)0), VAR_1, (void *)VAR_7);
    if( VAR_8!=0 ){
      FUNC_4(VAR_2, VAR_8);
      FUNC_2(VAR_7);
    }else{
      VAR_7->pNext = VAR_3->pThread;
      VAR_3->pThread = VAR_7;
    }
  }
}
