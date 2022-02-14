
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pClient; } ;
typedef TYPE_2__ lsm_db ;
typedef scalar_t__ i64 ;
struct TYPE_5__ {scalar_t__ iId; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int ,int*) ;

int FUNC_1(lsm_db *VAR_1, i64 VAR_2, int *VAR_3){
  if( VAR_1->pClient && VAR_1->pClient->iId<=VAR_2 ){
    *VAR_3 = 1;
    return VAR_0;
  }
  return FUNC_0(VAR_1, VAR_2, 0, VAR_3);
}
