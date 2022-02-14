
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_17__ {int nErr; TYPE_1__* db; int * pVdbe; } ;
struct TYPE_16__ {int iLimit; int iOffset; } ;
struct TYPE_15__ {int iSdst; int nSdst; int eDest; int iSDParm; char* zAffSdst; } ;
struct TYPE_14__ {scalar_t__ mallocFailed; } ;
typedef TYPE_2__ SelectDest ;
typedef TYPE_3__ Select ;
typedef TYPE_4__ Parse ;
typedef int KeyInfo ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_4__*,int,int) ;
 int FUNC_4 (TYPE_4__*,int,int,int) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *,int ,int,int) ;
 int FUNC_11 (int *,int ,int,int,int) ;
 int FUNC_12 (int *,int ,int,int,int,char*,int) ;
 int FUNC_13 (int *,int ,int,int,int,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(
  Parse *VAR_18,
  Select *VAR_19,
  SelectDest *VAR_20,
  SelectDest *VAR_21,
  int VAR_22,
  int VAR_23,
  KeyInfo *VAR_24,
  int VAR_25
){
  Vdbe *VAR_26 = VAR_18->pVdbe;
  int VAR_27;
  int VAR_28;

  VAR_28 = FUNC_15(VAR_26);
  VAR_27 = FUNC_17(VAR_26);



  if( VAR_23 ){
    int VAR_29, VAR_30;
    VAR_29 = FUNC_9(VAR_26, VAR_5, VAR_23); FUNC_0(VAR_26);
    VAR_30 = FUNC_12(VAR_26, VAR_1, VAR_20->iSdst, VAR_23+1, VAR_20->nSdst,
                              (char*)FUNC_7(VAR_24), VAR_14);
    FUNC_11(VAR_26, VAR_8, VAR_30+2, VAR_27, VAR_30+2); FUNC_0(VAR_26);
    FUNC_16(VAR_26, VAR_29);
    FUNC_11(VAR_26, VAR_2, VAR_20->iSdst, VAR_23+1, VAR_20->nSdst-1);
    FUNC_10(VAR_26, VAR_7, 1, VAR_23);
  }
  if( VAR_18->db->mallocFailed ) return 0;



  FUNC_2(VAR_26, VAR_19->iOffset, VAR_27);

  FUNC_1( VAR_21->eDest!=VAR_15 );
  FUNC_1( VAR_21->eDest!=VAR_17 );
  switch( VAR_21->eDest ){


    case 130: {
      int VAR_31 = FUNC_6(VAR_18);
      int VAR_32 = FUNC_6(VAR_18);
      FUNC_11(VAR_26, VAR_9, VAR_20->iSdst, VAR_20->nSdst, VAR_31);
      FUNC_10(VAR_26, VAR_10, VAR_21->iSDParm, VAR_32);
      FUNC_11(VAR_26, VAR_6, VAR_21->iSDParm, VAR_31, VAR_32);
      FUNC_14(VAR_26, VAR_0);
      FUNC_8(VAR_18, VAR_32);
      FUNC_8(VAR_18, VAR_31);
      break;
    }




    case 128: {
      int VAR_33;
      FUNC_19( VAR_20->nSdst>1 );
      VAR_33 = FUNC_6(VAR_18);
      FUNC_12(VAR_26, VAR_9, VAR_20->iSdst, VAR_20->nSdst,
          VAR_33, VAR_21->zAffSdst, VAR_20->nSdst);
      FUNC_3(VAR_18, VAR_20->iSdst, VAR_20->nSdst);
      FUNC_13(VAR_26, VAR_4, VAR_21->iSDParm, VAR_33,
                           VAR_20->iSdst, VAR_20->nSdst);
      FUNC_8(VAR_18, VAR_33);
      break;
    }





    case 129: {
      FUNC_1( VAR_20->nSdst==1 || VAR_18->nErr>0 ); FUNC_19( VAR_20->nSdst!=1 );
      FUNC_4(VAR_18, VAR_20->iSdst, VAR_21->iSDParm, 1);

      break;
    }





    case 131: {
      if( VAR_21->iSdst==0 ){
        VAR_21->iSdst = FUNC_5(VAR_18, VAR_20->nSdst);
        VAR_21->nSdst = VAR_20->nSdst;
      }
      FUNC_4(VAR_18, VAR_20->iSdst, VAR_21->iSdst, VAR_20->nSdst);
      FUNC_9(VAR_26, VAR_13, VAR_21->iSDParm);
      break;
    }
    default: {
      FUNC_1( VAR_21->eDest==VAR_16 );
      FUNC_10(VAR_26, VAR_11, VAR_20->iSdst, VAR_20->nSdst);
      FUNC_3(VAR_18, VAR_20->iSdst, VAR_20->nSdst);
      break;
    }
  }



  if( VAR_19->iLimit ){
    FUNC_10(VAR_26, VAR_3, VAR_19->iLimit, VAR_25); FUNC_0(VAR_26);
  }



  FUNC_18(VAR_26, VAR_27);
  FUNC_9(VAR_26, VAR_12, VAR_22);

  return VAR_28;
}
