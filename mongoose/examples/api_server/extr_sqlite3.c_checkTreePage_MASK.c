
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int zContext ;
typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ i64 ;
struct TYPE_21__ {int usableSize; int pageSize; scalar_t__ autoVacuum; } ;
struct TYPE_20__ {scalar_t__ nData; scalar_t__ nPayload; scalar_t__ nLocal; size_t iOverflow; scalar_t__ nKey; } ;
struct TYPE_19__ {int mallocFailed; scalar_t__ mxErr; TYPE_4__* pBt; } ;
struct TYPE_18__ {int nCell; int* aData; int leaf; int hdrOffset; scalar_t__ intKey; scalar_t__ isInit; } ;
typedef int Pgno ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ IntegrityCk ;
typedef TYPE_3__ CellInfo ;
typedef TYPE_4__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int,TYPE_1__**,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int*) ;
 int FUNC_5 (TYPE_2__*,char*,char*,...) ;
 int FUNC_6 (TYPE_2__*,int ,int,int,char*) ;
 int FUNC_7 (TYPE_2__*,int,int ,int,char*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int,char*) ;
 int* FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (int*) ;
 int FUNC_13 (char*,int,int) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (int ) ;
 int FUNC_17 (int,char*,char*,int,...) ;

__attribute__((used)) static int FUNC_18(
  IntegrityCk *VAR_3,
  int VAR_4,
  char *VAR_5,
  i64 *VAR_6,
  i64 *VAR_7
){
  MemPage *VAR_8;
  int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
  int VAR_15, VAR_16;
  int VAR_17;
  u8 *VAR_18;
  BtShared *VAR_19;
  int VAR_20;
  char VAR_21[100];
  char *VAR_22 = 0;
  i64 VAR_23 = 0;
  i64 VAR_24 = 0;

  FUNC_17(sizeof(VAR_21), VAR_21, "Page %d: ", VAR_4);



  VAR_19 = VAR_3->pBt;
  VAR_20 = VAR_19->usableSize;
  if( VAR_4==0 ) return 0;
  if( FUNC_8(VAR_3, VAR_4, VAR_5) ) return 0;
  if( (VAR_10 = FUNC_1(VAR_19, (Pgno)VAR_4, &VAR_8, 0, 0))!=0 ){
    FUNC_5(VAR_3, VAR_21,
       "unable to get the page. error code=%d", VAR_10);
    return 0;
  }



  VAR_8->isInit = 0;
  if( (VAR_10 = FUNC_2(VAR_8))!=0 ){
    FUNC_0( VAR_10==VAR_2 );
    FUNC_5(VAR_3, VAR_21,
                   "btreeInitPage() returns error code %d", VAR_10);
    FUNC_14(VAR_8);
    return 0;
  }



  VAR_11 = 0;
  for(VAR_9=0; VAR_9<VAR_8->nCell && VAR_3->mxErr; VAR_9++){
    u8 *VAR_25;
    u32 VAR_26;
    CellInfo VAR_27;



    FUNC_17(sizeof(VAR_21), VAR_21,
             "On tree page %d cell %d: ", VAR_4, VAR_9);
    VAR_25 = FUNC_9(VAR_8,VAR_9);
    FUNC_3(VAR_8, VAR_25, &VAR_27);
    VAR_26 = VAR_27.nData;
    if( !VAR_8->intKey ) VAR_26 += (int)VAR_27.nKey;


    else if( VAR_9==0 ) VAR_23 = VAR_24 = VAR_27.nKey;
    else{
      if( VAR_27.nKey <= VAR_24 ){
        FUNC_5(VAR_3, VAR_21,
            "Rowid %lld out of order (previous was %lld)", VAR_27.nKey, VAR_24);
      }
      VAR_24 = VAR_27.nKey;
    }
    FUNC_0( VAR_26==VAR_27.nPayload );
    if( (VAR_26>VAR_27.nLocal)
     && (&VAR_25[VAR_27.iOverflow]<=&VAR_8->aData[VAR_19->usableSize])
    ){
      int VAR_28 = (VAR_26 - VAR_27.nLocal + VAR_20 - 5)/(VAR_20 - 4);
      Pgno VAR_29 = FUNC_12(&VAR_25[VAR_27.iOverflow]);

      if( VAR_19->autoVacuum ){
        FUNC_7(VAR_3, VAR_29, VAR_1, VAR_4, VAR_21);
      }

      FUNC_6(VAR_3, 0, VAR_29, VAR_28, VAR_21);
    }



    if( !VAR_8->leaf ){
      VAR_13 = FUNC_12(VAR_25);

      if( VAR_19->autoVacuum ){
        FUNC_7(VAR_3, VAR_13, VAR_0, VAR_4, VAR_21);
      }

      VAR_12 = FUNC_18(VAR_3, VAR_13, VAR_21, &VAR_23, VAR_9==0 ? ((void*)0) : &VAR_24);
      if( VAR_9>0 && VAR_12!=VAR_11 ){
        FUNC_5(VAR_3, VAR_21, "Child page depth differs");
      }
      VAR_11 = VAR_12;
    }
  }

  if( !VAR_8->leaf ){
    VAR_13 = FUNC_12(&VAR_8->aData[VAR_8->hdrOffset+8]);
    FUNC_17(sizeof(VAR_21), VAR_21,
                     "On page %d at right child: ", VAR_4);

    if( VAR_19->autoVacuum ){
      FUNC_7(VAR_3, VAR_13, VAR_0, VAR_4, VAR_21);
    }

    FUNC_18(VAR_3, VAR_13, VAR_21, ((void*)0), !VAR_8->nCell ? ((void*)0) : &VAR_24);
  }




  if( VAR_8->leaf && VAR_8->intKey ){

    if( VAR_6 ){

      if( !VAR_7 ){
        if( VAR_24 > *VAR_6 ){
          FUNC_5(VAR_3, VAR_21,
              "Rowid %lld out of order (max larger than parent min of %lld)",
              VAR_24, *VAR_6);
        }
      }else{
        if( VAR_23 <= *VAR_6 ){
          FUNC_5(VAR_3, VAR_21,
              "Rowid %lld out of order (min less than parent min of %lld)",
              VAR_23, *VAR_6);
        }
        if( VAR_24 > *VAR_7 ){
          FUNC_5(VAR_3, VAR_21,
              "Rowid %lld out of order (max larger than parent max of %lld)",
              VAR_24, *VAR_7);
        }
        *VAR_6 = VAR_24;
      }

    } else if( VAR_7 ){
      if( VAR_23 <= *VAR_7 ){
        FUNC_5(VAR_3, VAR_21,
            "Rowid %lld out of order (min less than parent max of %lld)",
            VAR_23, *VAR_7);
      }
    }
  }



  VAR_18 = VAR_8->aData;
  VAR_15 = VAR_8->hdrOffset;
  VAR_22 = FUNC_16( VAR_19->pageSize );
  if( VAR_22==0 ){
    VAR_3->mallocFailed = 1;
  }else{
    int VAR_30 = FUNC_11(&VAR_18[VAR_15+5]);
    FUNC_0( VAR_30<=VAR_20 );
    FUNC_13(VAR_22+VAR_30, 0, VAR_20-VAR_30);
    FUNC_13(VAR_22, 1, VAR_30);
    VAR_17 = FUNC_10(&VAR_18[VAR_15+3]);
    VAR_16 = VAR_15 + 12 - 4*VAR_8->leaf;
    for(VAR_9=0; VAR_9<VAR_17; VAR_9++){
      int VAR_31 = FUNC_10(&VAR_18[VAR_16+VAR_9*2]);
      u32 VAR_32 = 65536;
      int VAR_33;
      if( VAR_31<=VAR_20-4 ){
        VAR_32 = FUNC_4(VAR_8, &VAR_18[VAR_31]);
      }
      if( (int)(VAR_31+VAR_32-1)>=VAR_20 ){
        FUNC_5(VAR_3, 0,
            "Corruption detected in cell %d on page %d",VAR_9,VAR_4);
      }else{
        for(VAR_33=VAR_31+VAR_32-1; VAR_33>=VAR_31; VAR_33--) VAR_22[VAR_33]++;
      }
    }
    VAR_9 = FUNC_10(&VAR_18[VAR_15+1]);
    while( VAR_9>0 ){
      int VAR_34, VAR_35;
      FUNC_0( VAR_9<=VAR_20-4 );
      VAR_34 = FUNC_10(&VAR_18[VAR_9+2]);
      FUNC_0( VAR_9+VAR_34<=VAR_20 );
      for(VAR_35=VAR_9+VAR_34-1; VAR_35>=VAR_9; VAR_35--) VAR_22[VAR_35]++;
      VAR_35 = FUNC_10(&VAR_18[VAR_9]);
      FUNC_0( VAR_35==0 || VAR_35>VAR_9+VAR_34 );
      FUNC_0( VAR_35<=VAR_20-4 );
      VAR_9 = VAR_35;
    }
    for(VAR_9=VAR_14=0; VAR_9<VAR_20; VAR_9++){
      if( VAR_22[VAR_9]==0 ){
        VAR_14++;
      }else if( VAR_22[VAR_9]>1 ){
        FUNC_5(VAR_3, 0,
          "Multiple uses for byte %d of page %d", VAR_9, VAR_4);
        break;
      }
    }
    if( VAR_14!=VAR_18[VAR_15+7] ){
      FUNC_5(VAR_3, 0,
          "Fragmentation of %d bytes reported as %d on page %d",
          VAR_14, VAR_18[VAR_15+7], VAR_4);
    }
  }
  FUNC_15(VAR_22);
  FUNC_14(VAR_8);
  return VAR_11+1;
}
