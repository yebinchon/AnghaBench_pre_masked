
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ TestDb ;
struct TYPE_5__ {int (* xWrite ) (TYPE_2__*,void*,int,void*,int) ;} ;


 int FUNC_0 (TYPE_2__*,void*,int,void*,int) ;

int FUNC_1(TestDb *VAR_0, void *VAR_1, int VAR_2, void *VAR_3, int VAR_4){
  return VAR_0->pMethods->xWrite(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
