
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ iOldLog; } ;
struct TYPE_10__ {TYPE_1__ treehdr; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_12__ {int * apTreeCsr; TYPE_2__* pDb; } ;
struct TYPE_11__ {scalar_t__ iLogOff; } ;
typedef TYPE_3__ Snapshot ;
typedef TYPE_4__ MultiCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(MultiCursor *VAR_3, Snapshot *VAR_4, int VAR_5){
  int VAR_6 = VAR_0;
  lsm_db *VAR_7 = VAR_3->pDb;


  if( VAR_5!=VAR_2
   && FUNC_1(VAR_7)
   && VAR_7->treehdr.iOldLog!=VAR_4->iLogOff
  ){
    VAR_6 = FUNC_0(VAR_7, 1, &VAR_3->apTreeCsr[1]);
  }


  if( VAR_6==VAR_0 && VAR_5==VAR_1 ){
    VAR_6 = FUNC_0(VAR_7, 0, &VAR_3->apTreeCsr[0]);
  }

  return VAR_6;
}
