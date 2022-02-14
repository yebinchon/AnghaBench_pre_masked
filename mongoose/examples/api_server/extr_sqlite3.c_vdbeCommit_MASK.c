
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
typedef int sqlite3_vfs ;
typedef int sqlite3_file ;
struct TYPE_12__ {int nDb; int (* xCommitCallback ) (int ) ;TYPE_1__* aDb; int * pVfs; int pCommitArg; } ;
typedef TYPE_2__ sqlite3 ;
typedef int iRandom ;
typedef int i64 ;
struct TYPE_13__ {int zErrMsg; } ;
typedef TYPE_3__ Vdbe ;
struct TYPE_11__ {int * pBt; } ;
typedef int Btree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 char const* FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_2__*,char*) ;
 int FUNC_15 () ;
 int FUNC_16 (char const*,char*) ;
 char* FUNC_17 (TYPE_2__*,char*,char const*) ;
 int FUNC_18 (int *,char*,int ,int*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,char*,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,char*,int **,int,int ) ;
 int FUNC_23 (int *,int ) ;
 int FUNC_24 (int *,char const*,int,int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (char const*) ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (TYPE_2__*,int *) ;
 int FUNC_29 (int ,char*,char*) ;
 int FUNC_30 (int,int*) ;
 int FUNC_31 (int,char*,char*,int,int) ;
 int FUNC_32 (int ) ;

__attribute__((used)) static int FUNC_33(sqlite3 *VAR_12, Vdbe *VAR_13){
  int VAR_14;
  int VAR_15 = 0;
  int VAR_16 = VAR_6;
  int VAR_17 = 0;
  VAR_16 = FUNC_28(VAR_12, &VAR_13->zErrMsg);







  for(VAR_14=0; VAR_16==VAR_6 && VAR_14<VAR_12->nDb; VAR_14++){
    Btree *VAR_18 = VAR_12->aDb[VAR_14].pBt;
    if( FUNC_10(VAR_18) ){
      VAR_17 = 1;
      if( VAR_14!=1 ) VAR_15++;
      FUNC_7(VAR_18);
      VAR_16 = FUNC_25(FUNC_12(VAR_18));
      FUNC_11(VAR_18);
    }
  }
  if( VAR_16!=VAR_6 ){
    return VAR_16;
  }


  if( VAR_17 && VAR_12->xCommitCallback ){
    VAR_16 = VAR_12->xCommitCallback(VAR_12->pCommitArg);
    if( VAR_16 ){
      return VAR_2;
    }
  }
  if( 0==FUNC_26(FUNC_8(VAR_12->aDb[0].pBt))
   || VAR_15<=1
  ){
    for(VAR_14=0; VAR_16==VAR_6 && VAR_14<VAR_12->nDb; VAR_14++){
      Btree *VAR_19 = VAR_12->aDb[VAR_14].pBt;
      if( VAR_19 ){
        VAR_16 = FUNC_5(VAR_19, 0);
      }
    }






    for(VAR_14=0; VAR_16==VAR_6 && VAR_14<VAR_12->nDb; VAR_14++){
      Btree *VAR_20 = VAR_12->aDb[VAR_14].pBt;
      if( VAR_20 ){
        VAR_16 = FUNC_6(VAR_20, 0);
      }
    }
    if( VAR_16==VAR_6 ){
      FUNC_27(VAR_12);
    }
  }






  else{
    sqlite3_vfs *VAR_21 = VAR_12->pVfs;
    int VAR_22 = 0;
    char *VAR_23 = 0;
    char const *VAR_24 = FUNC_8(VAR_12->aDb[0].pBt);
    sqlite3_file *VAR_25 = 0;
    i64 VAR_26 = 0;
    int VAR_27;
    int VAR_28 = 0;
    int VAR_29;


    VAR_29 = FUNC_26(VAR_24);
    VAR_23 = FUNC_17(VAR_12, "%s-mjXXXXXX9XXz", VAR_24);
    if( VAR_23==0 ) return VAR_5;
    do {
      u32 VAR_30;
      if( VAR_28 ){
        if( VAR_28>100 ){
          FUNC_29(VAR_3, "MJ delete: %s", VAR_23);
          FUNC_20(VAR_21, VAR_23, 0);
          break;
        }else if( VAR_28==1 ){
          FUNC_29(VAR_3, "MJ collide: %s", VAR_23);
        }
      }
      VAR_28++;
      FUNC_30(sizeof(VAR_30), &VAR_30);
      FUNC_31(13, &VAR_23[VAR_29], "-mj%06X9%02X",
                               (VAR_30>>8)&0xffffff, VAR_30&0xff);


      FUNC_1( VAR_23[FUNC_26(VAR_23)-3]=='9' );
      FUNC_16(VAR_24, VAR_23);
      VAR_16 = FUNC_18(VAR_21, VAR_23, VAR_0, &VAR_27);
    }while( VAR_16==VAR_6 && VAR_27 );
    if( VAR_16==VAR_6 ){

      VAR_16 = FUNC_22(VAR_21, VAR_23, &VAR_25,
          VAR_10|VAR_7|
          VAR_8|VAR_9, 0
      );
    }
    if( VAR_16!=VAR_6 ){
      FUNC_14(VAR_12, VAR_23);
      return VAR_16;
    }







    for(VAR_14=0; VAR_14<VAR_12->nDb; VAR_14++){
      Btree *VAR_31 = VAR_12->aDb[VAR_14].pBt;
      if( FUNC_10(VAR_31) ){
        char const *VAR_32 = FUNC_9(VAR_31);
        if( VAR_32==0 ){
          continue;
        }
        FUNC_1( VAR_32[0]!=0 );
        if( !VAR_22 && !FUNC_13(VAR_31) ){
          VAR_22 = 1;
        }
        VAR_16 = FUNC_24(VAR_25, VAR_32, FUNC_26(VAR_32)+1, VAR_26);
        VAR_26 += FUNC_26(VAR_32)+1;
        if( VAR_16!=VAR_6 ){
          FUNC_19(VAR_25);
          FUNC_20(VAR_21, VAR_23, 0);
          FUNC_14(VAR_12, VAR_23);
          return VAR_16;
        }
      }
    }




    if( VAR_22
     && 0==(FUNC_21(VAR_25)&VAR_4)
     && VAR_6!=(VAR_16 = FUNC_23(VAR_25, VAR_11))
    ){
      FUNC_19(VAR_25);
      FUNC_20(VAR_21, VAR_23, 0);
      FUNC_14(VAR_12, VAR_23);
      return VAR_16;
    }
    for(VAR_14=0; VAR_16==VAR_6 && VAR_14<VAR_12->nDb; VAR_14++){
      Btree *VAR_33 = VAR_12->aDb[VAR_14].pBt;
      if( VAR_33 ){
        VAR_16 = FUNC_5(VAR_33, VAR_23);
      }
    }
    FUNC_19(VAR_25);
    FUNC_1( VAR_16!=VAR_1 );
    if( VAR_16!=VAR_6 ){
      FUNC_14(VAR_12, VAR_23);
      return VAR_16;
    }





    VAR_16 = FUNC_20(VAR_21, VAR_23, 1);
    FUNC_14(VAR_12, VAR_23);
    VAR_23 = 0;
    if( VAR_16 ){
      return VAR_16;
    }
    FUNC_2();
    FUNC_4();
    for(VAR_14=0; VAR_14<VAR_12->nDb; VAR_14++){
      Btree *VAR_34 = VAR_12->aDb[VAR_14].pBt;
      if( VAR_34 ){
        FUNC_6(VAR_34, 1);
      }
    }
    FUNC_15();
    FUNC_3();

    FUNC_27(VAR_12);
  }


  return VAR_16;
}
