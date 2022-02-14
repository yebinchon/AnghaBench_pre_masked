
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pMutex; } ;
typedef TYPE_2__ TmGlobal ;
struct TYPE_7__ {int pMutex; TYPE_1__* pEnv; } ;
struct TYPE_5__ {int (* xMutexEnter ) (int ) ;} ;
typedef TYPE_3__ LsmMutex ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(TmGlobal *VAR_0){
  LsmMutex *VAR_1 = (LsmMutex *)VAR_0->pMutex;
  VAR_1->pEnv->xMutexEnter(VAR_1->pMutex);
}
