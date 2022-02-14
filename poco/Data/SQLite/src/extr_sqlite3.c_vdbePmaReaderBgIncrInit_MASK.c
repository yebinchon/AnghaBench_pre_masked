
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* pIncr; } ;
struct TYPE_6__ {TYPE_1__* pTask; } ;
struct TYPE_5__ {int bDone; } ;
typedef TYPE_3__ PmaReader ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static void *FUNC_2(void *VAR_1){
  PmaReader *VAR_2 = (PmaReader*)VAR_1;
  void *VAR_3 = FUNC_0(
                  FUNC_1(VAR_2,VAR_0)
               );
  VAR_2->pIncr->pTask->bDone = 1;
  return VAR_3;
}
