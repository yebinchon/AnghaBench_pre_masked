
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int sqlite3_vfs ;
typedef int sqlite3_file ;
struct TYPE_9__ {int nDb; int (* xCommitCallback ) (int ) ;TYPE_1__* aDb; int * pVfs; int pCommitArg; } ;
typedef TYPE_2__ sqlite3 ;
typedef int iRandom ;
typedef int i64 ;
typedef int Vdbe ;
struct TYPE_8__ {scalar_t__ safety_level; int * pBt; } ;
typedef int Pager ;
typedef int Btree ;


 scalar_t__ VAR_0 ;
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
 int VAR_12 ;
 int FUNC_0 (int *) ;
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
 int * FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*,char*) ;
 int FUNC_14 () ;
 int FUNC_15 (char const*,char*) ;
 char* FUNC_16 (TYPE_2__*,char*,char const*) ;
 int FUNC_17 (int *,char*,int ,int*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,char*,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,char*,int **,int,int ) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *,char const*,int,int ) ;
 int FUNC_24 (int *) ;
 size_t FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int *) ;
 int FUNC_27 (char const*) ;
 int FUNC_28 (TYPE_2__*) ;
 int FUNC_29 (TYPE_2__*,int *) ;
 int FUNC_30 (int ,char*,char*) ;
 int FUNC_31 (int,int*) ;
 int FUNC_32 (int,char*,char*,int,int) ;
 int FUNC_33 (int ) ;

__attribute__((used)) static int FUNC_34(sqlite3 *VAR_13, Vdbe *VAR_14){
  int VAR_15;
  int VAR_16 = 0;


  int VAR_17 = VAR_7;
  int VAR_18 = 0;
  VAR_17 = FUNC_29(VAR_13, VAR_14);







  for(VAR_15=0; VAR_17==VAR_7 && VAR_15<VAR_13->nDb; VAR_15++){
    Btree *VAR_19 = VAR_13->aDb[VAR_15].pBt;
    if( FUNC_10(VAR_19) ){



      static const u8 VAR_20[] = {
                        1,
                        1,
                        0,
                        1,
                        0,
                        0
      };
      Pager *VAR_21;
      VAR_18 = 1;
      FUNC_7(VAR_19);
      VAR_21 = FUNC_12(VAR_19);
      if( VAR_13->aDb[VAR_15].safety_level!=VAR_0
       && VAR_20[FUNC_25(VAR_21)]
       && FUNC_26(VAR_21)==0
      ){
        FUNC_1( VAR_15!=1 );
        VAR_16++;
      }
      VAR_17 = FUNC_24(VAR_21);
      FUNC_11(VAR_19);
    }
  }
  if( VAR_17!=VAR_7 ){
    return VAR_17;
  }


  if( VAR_18 && VAR_13->xCommitCallback ){
    VAR_17 = VAR_13->xCommitCallback(VAR_13->pCommitArg);
    if( VAR_17 ){
      return VAR_3;
    }
  }
  if( 0==FUNC_27(FUNC_8(VAR_13->aDb[0].pBt))
   || VAR_16<=1
  ){
    for(VAR_15=0; VAR_17==VAR_7 && VAR_15<VAR_13->nDb; VAR_15++){
      Btree *VAR_22 = VAR_13->aDb[VAR_15].pBt;
      if( VAR_22 ){
        VAR_17 = FUNC_5(VAR_22, 0);
      }
    }






    for(VAR_15=0; VAR_17==VAR_7 && VAR_15<VAR_13->nDb; VAR_15++){
      Btree *VAR_23 = VAR_13->aDb[VAR_15].pBt;
      if( VAR_23 ){
        VAR_17 = FUNC_6(VAR_23, 0);
      }
    }
    if( VAR_17==VAR_7 ){
      FUNC_28(VAR_13);
    }
  }






  else{
    sqlite3_vfs *VAR_24 = VAR_13->pVfs;
    char *VAR_25 = 0;
    char const *VAR_26 = FUNC_8(VAR_13->aDb[0].pBt);
    sqlite3_file *VAR_27 = 0;
    i64 VAR_28 = 0;
    int VAR_29;
    int VAR_30 = 0;
    int VAR_31;


    VAR_31 = FUNC_27(VAR_26);
    VAR_25 = FUNC_16(VAR_13, "%s-mjXXXXXX9XXz", VAR_26);
    if( VAR_25==0 ) return VAR_6;
    do {
      u32 VAR_32;
      if( VAR_30 ){
        if( VAR_30>100 ){
          FUNC_30(VAR_4, "MJ delete: %s", VAR_25);
          FUNC_19(VAR_24, VAR_25, 0);
          break;
        }else if( VAR_30==1 ){
          FUNC_30(VAR_4, "MJ collide: %s", VAR_25);
        }
      }
      VAR_30++;
      FUNC_31(sizeof(VAR_32), &VAR_32);
      FUNC_32(13, &VAR_25[VAR_31], "-mj%06X9%02X",
                               (VAR_32>>8)&0xffffff, VAR_32&0xff);


      FUNC_1( VAR_25[FUNC_27(VAR_25)-3]=='9' );
      FUNC_15(VAR_26, VAR_25);
      VAR_17 = FUNC_17(VAR_24, VAR_25, VAR_1, &VAR_29);
    }while( VAR_17==VAR_7 && VAR_29 );
    if( VAR_17==VAR_7 ){

      VAR_17 = FUNC_21(VAR_24, VAR_25, &VAR_27,
          VAR_11|VAR_8|
          VAR_9|VAR_10, 0
      );
    }
    if( VAR_17!=VAR_7 ){
      FUNC_13(VAR_13, VAR_25);
      return VAR_17;
    }







    for(VAR_15=0; VAR_15<VAR_13->nDb; VAR_15++){
      Btree *VAR_33 = VAR_13->aDb[VAR_15].pBt;
      if( FUNC_10(VAR_33) ){
        char const *VAR_34 = FUNC_9(VAR_33);
        if( VAR_34==0 ){
          continue;
        }
        FUNC_1( VAR_34[0]!=0 );
        VAR_17 = FUNC_23(VAR_27, VAR_34, FUNC_27(VAR_34)+1, VAR_28);
        VAR_28 += FUNC_27(VAR_34)+1;
        if( VAR_17!=VAR_7 ){
          FUNC_18(VAR_27);
          FUNC_19(VAR_24, VAR_25, 0);
          FUNC_13(VAR_13, VAR_25);
          return VAR_17;
        }
      }
    }




    if( 0==(FUNC_20(VAR_27)&VAR_5)
     && VAR_7!=(VAR_17 = FUNC_22(VAR_27, VAR_12))
    ){
      FUNC_18(VAR_27);
      FUNC_19(VAR_24, VAR_25, 0);
      FUNC_13(VAR_13, VAR_25);
      return VAR_17;
    }
    for(VAR_15=0; VAR_17==VAR_7 && VAR_15<VAR_13->nDb; VAR_15++){
      Btree *VAR_35 = VAR_13->aDb[VAR_15].pBt;
      if( VAR_35 ){
        VAR_17 = FUNC_5(VAR_35, VAR_25);
      }
    }
    FUNC_18(VAR_27);
    FUNC_1( VAR_17!=VAR_2 );
    if( VAR_17!=VAR_7 ){
      FUNC_13(VAR_13, VAR_25);
      return VAR_17;
    }





    VAR_17 = FUNC_19(VAR_24, VAR_25, 1);
    FUNC_13(VAR_13, VAR_25);
    VAR_25 = 0;
    if( VAR_17 ){
      return VAR_17;
    }
    FUNC_2();
    FUNC_4();
    for(VAR_15=0; VAR_15<VAR_13->nDb; VAR_15++){
      Btree *VAR_36 = VAR_13->aDb[VAR_15].pBt;
      if( VAR_36 ){
        FUNC_6(VAR_36, 1);
      }
    }
    FUNC_14();
    FUNC_3();

    FUNC_28(VAR_13);
  }


  return VAR_17;
}
