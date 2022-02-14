
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__* pLog; } ;
typedef TYPE_2__ VfslogVfs ;
struct TYPE_9__ {TYPE_1__* pMethods; } ;
struct TYPE_7__ {int (* xClose ) (TYPE_5__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(VfslogVfs *VAR_0){
  if( VAR_0->pLog->pMethods ){
    FUNC_2(VAR_0);
    VAR_0->pLog->pMethods->xClose(VAR_0->pLog);
  }
  FUNC_0(VAR_0);
}
