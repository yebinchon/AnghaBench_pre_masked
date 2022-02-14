
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ TestDb ;
struct TYPE_5__ {int (* xCommit ) (TYPE_2__*,int) ;} ;


 int FUNC_0 (TYPE_2__*,int) ;

int FUNC_1(TestDb *VAR_0, int VAR_1){
  return VAR_0->pMethods->xCommit(VAR_0, VAR_1);
}
