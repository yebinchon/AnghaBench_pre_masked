
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_20__ {int iNext; int rc; TYPE_4__* pDest; TYPE_4__* pSrc; int pSrcDb; } ;
typedef TYPE_3__ sqlite3_backup ;
typedef int i64 ;
typedef int b ;
struct TYPE_21__ {TYPE_1__* pBt; int db; } ;
struct TYPE_18__ {int btsFlags; } ;
typedef TYPE_4__ Btree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_2__*,int ,int*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 TYPE_2__* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,int) ;

int FUNC_14(Btree *VAR_4, Btree *VAR_5){
  int VAR_6;
  sqlite3_file *VAR_7;
  sqlite3_backup VAR_8;
  FUNC_2(VAR_4);
  FUNC_2(VAR_5);

  FUNC_0( FUNC_4(VAR_4) );
  VAR_7 = FUNC_11(FUNC_7(VAR_4));
  if( VAR_7->pMethods ){
    i64 VAR_9 = FUNC_3(VAR_5)*(i64)FUNC_5(VAR_5);
    VAR_6 = FUNC_8(VAR_7, VAR_1, &VAR_9);
    if( VAR_6==VAR_2 ) VAR_6 = VAR_3;
    if( VAR_6 ) goto copy_finished;
  }






  FUNC_1(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.pSrcDb = VAR_5->db;
  VAR_8.pSrc = VAR_5;
  VAR_8.pDest = VAR_4;
  VAR_8.iNext = 1;
  FUNC_13(&VAR_8, 0x7FFFFFFF);
  FUNC_0( VAR_8.rc!=VAR_3 );

  VAR_6 = FUNC_12(&VAR_8);
  if( VAR_6==VAR_3 ){
    VAR_4->pBt->btsFlags &= ~VAR_0;
  }else{
    FUNC_10(FUNC_7(VAR_8.pDest));
  }

  FUNC_0( FUNC_4(VAR_4)==0 );
copy_finished:
  FUNC_6(VAR_5);
  FUNC_6(VAR_4);
  return VAR_6;
}
