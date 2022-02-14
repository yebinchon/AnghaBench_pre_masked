
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* pThread; } ;
typedef TYPE_1__ Threadset ;
struct TYPE_9__ {int iTid; int tid; struct TYPE_9__* pNext; } ;
typedef TYPE_2__ Thread ;
struct TYPE_10__ {scalar_t__ rc; } ;
typedef TYPE_3__ Error ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (int ,void**) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_5(
  Error *VAR_2,
  Threadset *VAR_3
){
  Thread *VAR_4;
  Thread *VAR_5;
  for(VAR_4=VAR_3->pThread; VAR_4; VAR_4=VAR_5){
    void *VAR_6;
    VAR_5 = VAR_4->pNext;
    int VAR_7;
    VAR_7 = FUNC_2(VAR_4->tid, &VAR_6);
    if( VAR_7!=0 ){
      if( VAR_2->rc==VAR_0 ) FUNC_4(VAR_2, VAR_7);
    }else{
      FUNC_1("Thread %d says: %s\n", VAR_4->iTid, (VAR_6==0 ? "..." : (char *)VAR_6));
      FUNC_0(VAR_1);
    }
    FUNC_3(VAR_4);
  }
  VAR_3->pThread = 0;
}
