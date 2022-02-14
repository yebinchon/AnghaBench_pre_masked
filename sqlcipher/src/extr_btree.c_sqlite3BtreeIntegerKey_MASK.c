
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_6__ {int nKey; } ;
struct TYPE_7__ {scalar_t__ eState; int curIntKey; TYPE_1__ info; } ;
typedef TYPE_2__ BtCursor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

i64 FUNC_3(BtCursor *VAR_1){
  FUNC_0( FUNC_1(VAR_1) );
  FUNC_0( VAR_1->eState==VAR_0 );
  FUNC_0( VAR_1->curIntKey );
  FUNC_2(VAR_1);
  return VAR_1->info.nKey;
}
