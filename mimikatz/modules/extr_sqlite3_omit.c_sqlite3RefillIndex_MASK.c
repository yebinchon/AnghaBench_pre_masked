
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_26__ {scalar_t__ mallocFailed; TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_27__ {int zName; int tnum; } ;
typedef TYPE_3__ Table ;
struct TYPE_29__ {int tnum; int nKeyCol; int zName; int pSchema; TYPE_3__* pTable; } ;
struct TYPE_28__ {int nTab; scalar_t__ nErr; TYPE_2__* db; } ;
struct TYPE_25__ {int zDbSName; } ;
typedef TYPE_4__ Parse ;
typedef int KeyInfo ;
typedef TYPE_5__ Index ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_5__*,int,int,int ,int*,int ,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int * FUNC_6 (TYPE_4__*) ;
 int * FUNC_7 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,int,int,TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_4__*,int) ;
 int FUNC_12 (TYPE_4__*,int) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (TYPE_4__*,int,int ,int,int ) ;
 int FUNC_15 (TYPE_4__*,int ,TYPE_5__*) ;
 int FUNC_16 (int *,int ,int) ;
 int FUNC_17 (int *,int ,int,int) ;
 int FUNC_18 (int *,int ,int,int,int) ;
 int FUNC_19 (int *,int ,int,int,int,char*,int ) ;
 int FUNC_20 (int *,int ,int,int,int,int) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 (int *,int ) ;

__attribute__((used)) static void FUNC_26(Parse *VAR_20, Index *VAR_21, int VAR_22){
  Table *VAR_23 = VAR_21->pTable;
  int VAR_24 = VAR_20->nTab++;
  int VAR_25 = VAR_20->nTab++;
  int VAR_26;
  int VAR_27;
  int VAR_28;
  int VAR_29;
  int VAR_30;
  Vdbe *VAR_31;
  KeyInfo *VAR_32;
  int VAR_33;
  sqlite3 *VAR_34 = VAR_20->db;
  int VAR_35 = FUNC_13(VAR_34, VAR_21->pSchema);


  if( FUNC_3(VAR_20, VAR_19, VAR_21->zName, 0,
      VAR_34->aDb[VAR_35].zDbSName ) ){
    return;
  }



  FUNC_14(VAR_20, VAR_35, VAR_23->tnum, 1, VAR_23->zName);

  VAR_31 = FUNC_6(VAR_20);
  if( VAR_31==0 ) return;
  if( VAR_22>=0 ){
    VAR_29 = VAR_22;
  }else{
    VAR_29 = VAR_21->tnum;
  }
  VAR_32 = FUNC_7(VAR_20, VAR_21);
  FUNC_2( VAR_32!=0 || VAR_34->mallocFailed || VAR_20->nErr );


  VAR_26 = VAR_20->nTab++;
  FUNC_19(VAR_31, VAR_16, VAR_26, 0, VAR_21->nKeyCol, (char*)
                    FUNC_8(VAR_32), VAR_18);



  FUNC_10(VAR_20, VAR_24, VAR_35, VAR_23, VAR_8);
  VAR_27 = FUNC_17(VAR_31, VAR_10, VAR_24, 0); FUNC_1(VAR_31);
  VAR_33 = FUNC_5(VAR_20);
  FUNC_9(VAR_20);

  FUNC_4(VAR_20,VAR_21,VAR_24,VAR_33,0,&VAR_30,0,0);
  FUNC_17(VAR_31, VAR_14, VAR_26, VAR_33);
  FUNC_12(VAR_20, VAR_30);
  FUNC_17(VAR_31, VAR_7, VAR_24, VAR_27+1); FUNC_1(VAR_31);
  FUNC_24(VAR_31, VAR_27);
  if( VAR_22<0 ) FUNC_17(VAR_31, VAR_4, VAR_29, VAR_35);
  FUNC_19(VAR_31, VAR_9, VAR_25, VAR_29, VAR_35,
                    (char *)VAR_32, VAR_18);
  FUNC_21(VAR_31, VAR_1|((VAR_22>=0)?VAR_2:0));

  VAR_27 = FUNC_17(VAR_31, VAR_17, VAR_26, 0); FUNC_1(VAR_31);
  if( FUNC_0(VAR_21) ){
    int VAR_36 = FUNC_23(VAR_31, 1);
    VAR_28 = FUNC_22(VAR_31);
    FUNC_25(VAR_31, VAR_0);
    FUNC_20(VAR_31, VAR_12, VAR_26, VAR_36, VAR_33,
                         VAR_21->nKeyCol); FUNC_1(VAR_31);
    FUNC_15(VAR_20, VAR_0, VAR_21);
    FUNC_24(VAR_31, VAR_36);
  }else{
    VAR_28 = FUNC_22(VAR_31);
  }
  FUNC_18(VAR_31, VAR_13, VAR_26, VAR_33, VAR_25);
  FUNC_16(VAR_31, VAR_11, VAR_25);
  FUNC_17(VAR_31, VAR_6, VAR_25, VAR_33);
  FUNC_21(VAR_31, VAR_3);
  FUNC_11(VAR_20, VAR_33);
  FUNC_17(VAR_31, VAR_15, VAR_26, VAR_28); FUNC_1(VAR_31);
  FUNC_24(VAR_31, VAR_27);

  FUNC_16(VAR_31, VAR_5, VAR_24);
  FUNC_16(VAR_31, VAR_5, VAR_25);
  FUNC_16(VAR_31, VAR_5, VAR_26);
}
