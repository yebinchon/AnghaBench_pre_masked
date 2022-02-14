
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ iId; } ;
struct TYPE_7__ {int pCtx; int (* xFactory ) (int ,TYPE_3__*,scalar_t__) ;} ;
struct TYPE_8__ {int bInFactory; TYPE_1__ compress; TYPE_2__ factory; } ;
typedef TYPE_3__ lsm_db ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_3__*,scalar_t__) ;

int FUNC_1(lsm_db *VAR_3, u32 VAR_4){
  if( VAR_4!=VAR_0 && VAR_3->compress.iId!=VAR_4 ){
    if( VAR_3->factory.xFactory ){
      VAR_3->bInFactory = 1;
      VAR_3->factory.xFactory(VAR_3->factory.pCtx, VAR_3, VAR_4);
      VAR_3->bInFactory = 0;
    }
    if( VAR_3->compress.iId!=VAR_4 ){

      return VAR_1;
    }
  }

  return VAR_2;
}
