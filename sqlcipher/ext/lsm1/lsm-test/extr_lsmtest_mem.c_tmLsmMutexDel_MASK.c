
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* xFree ) (int *) ;scalar_t__ pMutex; } ;
typedef TYPE_1__ TmGlobal ;
typedef int LsmMutex ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(TmGlobal *VAR_0){
  LsmMutex *VAR_1 = (LsmMutex *)VAR_0->pMutex;
  VAR_0->xFree(VAR_1);
}
