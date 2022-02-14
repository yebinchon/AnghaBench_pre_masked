
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ autoVacuum; } ;
struct TYPE_13__ {scalar_t__ inTrans; TYPE_2__* pBt; } ;
typedef int Pgno ;
typedef int MemPage ;
typedef TYPE_1__ Btree ;
typedef TYPE_2__ BtShared ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int,int **,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int *,int ,int ,int,int ) ;
 int FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (TYPE_1__*,int ,int*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_12(Btree *VAR_5, Pgno VAR_6, int *VAR_7){
  int VAR_8;
  MemPage *VAR_9 = 0;
  BtShared *VAR_10 = VAR_5->pBt;

  FUNC_2( FUNC_10(VAR_5) );
  FUNC_2( VAR_5->inTrans==VAR_4 );
  FUNC_2( VAR_6>=2 );
  if( VAR_6>FUNC_4(VAR_10) ){
    return VAR_2;
  }

  VAR_8 = FUNC_3(VAR_10, (Pgno)VAR_6, &VAR_9, 0);
  if( VAR_8 ) return VAR_8;
  VAR_8 = FUNC_8(VAR_5, VAR_6, 0);
  if( VAR_8 ){
    FUNC_6(VAR_9);
    return VAR_8;
  }

  *VAR_7 = 0;





  if( VAR_10->autoVacuum ){
    Pgno VAR_11;
    FUNC_9(VAR_5, VAR_0, &VAR_11);

    if( VAR_6==VAR_11 ){



      FUNC_5(VAR_9, &VAR_8);
      FUNC_6(VAR_9);
      if( VAR_8!=VAR_3 ){
        return VAR_8;
      }
    }else{




      MemPage *VAR_12;
      FUNC_6(VAR_9);
      VAR_8 = FUNC_3(VAR_10, VAR_11, &VAR_12, 0);
      if( VAR_8!=VAR_3 ){
        return VAR_8;
      }
      VAR_8 = FUNC_7(VAR_10, VAR_12, VAR_1, 0, VAR_6, 0);
      FUNC_6(VAR_12);
      if( VAR_8!=VAR_3 ){
        return VAR_8;
      }
      VAR_12 = 0;
      VAR_8 = FUNC_3(VAR_10, VAR_11, &VAR_12, 0);
      FUNC_5(VAR_12, &VAR_8);
      FUNC_6(VAR_12);
      if( VAR_8!=VAR_3 ){
        return VAR_8;
      }
      *VAR_7 = VAR_11;
    }






    VAR_11--;
    while( VAR_11==FUNC_0(VAR_10)
           || FUNC_1(VAR_10, VAR_11) ){
      VAR_11--;
    }
    FUNC_2( VAR_11!=FUNC_0(VAR_10) );

    VAR_8 = FUNC_11(VAR_5, 4, VAR_11);
  }else{
    FUNC_5(VAR_9, &VAR_8);
    FUNC_6(VAR_9);
  }

  return VAR_8;
}
