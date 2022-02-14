
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u8 ;
typedef int Vdbe ;
struct TYPE_14__ {scalar_t__ pSelect; int nCol; TYPE_3__* pIndex; } ;
typedef TYPE_1__ Table ;
struct TYPE_16__ {int nColumn; int nKeyCol; scalar_t__ uniqNotNull; scalar_t__ pPartIdxWhere; struct TYPE_16__* pNext; } ;
struct TYPE_15__ {scalar_t__ nested; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Index ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
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
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,TYPE_1__*,int ) ;
 int FUNC_9 (int *,int ,int,int) ;
 int FUNC_10 (int *,int ,int,int,int) ;
 int FUNC_11 (int *,int ,int,int,int,char*,int ) ;
 int FUNC_12 (int *,int ,int,int,int,int ) ;
 int FUNC_13 (int *,TYPE_1__*,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *) ;

void FUNC_16(
  Parse *VAR_13,
  Table *VAR_14,
  int VAR_15,
  int VAR_16,
  int VAR_17,
  int *VAR_18,
  int VAR_19,
  int VAR_20,
  int VAR_21
){
  Vdbe *VAR_22;
  Index *VAR_23;
  u8 VAR_24;
  int VAR_25;
  int VAR_26;
  int VAR_27;
  u8 VAR_28 = 0;

  FUNC_3( VAR_19==0
       || VAR_19==VAR_2
       || VAR_19==(VAR_2|VAR_5)
  );

  VAR_22 = FUNC_5(VAR_13);
  FUNC_3( VAR_22!=0 );
  FUNC_3( VAR_14->pSelect==0 );
  for(VAR_27=0, VAR_23=VAR_14->pIndex; VAR_23; VAR_23=VAR_23->pNext, VAR_27++){
    if( VAR_18[VAR_27]==0 ) continue;
    VAR_28 = 1;
    if( VAR_23->pPartIdxWhere ){
      FUNC_9(VAR_22, VAR_10, VAR_18[VAR_27], FUNC_15(VAR_22)+2);
      FUNC_2(VAR_22);
    }
    VAR_24 = (VAR_21 ? VAR_6 : 0);
    if( FUNC_1(VAR_23) && !FUNC_0(VAR_14) ){
      FUNC_3( VAR_13->nested==0 );
      VAR_24 |= VAR_4;
      VAR_24 |= (VAR_19 & VAR_5);
    }
    FUNC_12(VAR_22, VAR_7, VAR_16+VAR_27, VAR_18[VAR_27],
                         VAR_18[VAR_27]+1,
                         VAR_23->uniqNotNull ? VAR_23->nKeyCol: VAR_23->nColumn);
    FUNC_14(VAR_22, VAR_24);
  }
  if( !FUNC_0(VAR_14) ) return;
  VAR_25 = VAR_17 + 1;
  VAR_26 = FUNC_4(VAR_13);
  FUNC_10(VAR_22, VAR_11, VAR_25, VAR_14->nCol, VAR_26);
  FUNC_7(VAR_22, VAR_14);
  if( !VAR_28 ){
    FUNC_8(VAR_22, VAR_14, 0);
  }
  if( VAR_13->nested ){
    VAR_24 = 0;
  }else{
    VAR_24 = VAR_4;
    VAR_24 |= (VAR_19?VAR_19:VAR_3);
  }
  if( VAR_20 ){
    VAR_24 |= VAR_0;
  }
  if( VAR_21 ){
    VAR_24 |= VAR_6;
  }
  FUNC_10(VAR_22, VAR_8, VAR_15, VAR_26, VAR_17);
  if( !VAR_13->nested ){
    FUNC_13(VAR_22, VAR_14, VAR_12);
  }
  FUNC_14(VAR_22, VAR_24);
}
