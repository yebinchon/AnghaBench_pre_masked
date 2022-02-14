
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pTask; } ;
struct TYPE_4__ {int bDone; } ;
typedef TYPE_2__ IncrMerger ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void *FUNC_2(void *VAR_0){
  IncrMerger *VAR_1 = (IncrMerger*)VAR_0;
  void *VAR_2 = FUNC_0( FUNC_1(VAR_1) );
  VAR_1->pTask->bDone = 1;
  return VAR_2;
}
