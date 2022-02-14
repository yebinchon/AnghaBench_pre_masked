
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ TestDb ;
struct TYPE_5__ {int (* xScan ) (TYPE_2__*,void*,int,void*,int,void*,int,void (*) (void*,void*,int,void*,int)) ;} ;


 int FUNC_0 (TYPE_2__*,void*,int,void*,int,void*,int,void (*) (void*,void*,int,void*,int)) ;

int FUNC_1(
  TestDb *VAR_0,
  void *VAR_1,
  int VAR_2,
  void *VAR_3, int VAR_4,
  void *VAR_5, int VAR_6,
  void (*VAR_7)(void *VAR_8, void *VAR_9, int VAR_10, void *VAR_11, int VAR_12)
){
  return VAR_0->pMethods->xScan(
      VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7
  );
}
