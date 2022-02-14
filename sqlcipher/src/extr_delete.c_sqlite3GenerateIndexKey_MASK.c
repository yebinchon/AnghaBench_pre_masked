
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_16__ {int nKeyCol; int nColumn; scalar_t__* aiColumn; TYPE_1__* pTable; scalar_t__ pPartIdxWhere; scalar_t__ uniqNotNull; } ;
struct TYPE_15__ {int iSelfTab; int db; int * pVdbe; } ;
struct TYPE_14__ {scalar_t__ pSelect; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*,int,int,int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 char* FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (int *,int ,int,int,int) ;
 int FUNC_6 (int *,int,char const*,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_2__*) ;

int FUNC_9(
  Parse *VAR_5,
  Index *VAR_6,
  int VAR_7,
  int VAR_8,
  int VAR_9,
  int *VAR_10,
  Index *VAR_11,
  int VAR_12
){
  Vdbe *VAR_13 = VAR_5->pVdbe;
  int VAR_14;
  int VAR_15;
  int VAR_16;

  if( VAR_10 ){
    if( VAR_6->pPartIdxWhere ){
      *VAR_10 = FUNC_8(VAR_5);
      VAR_5->iSelfTab = VAR_7 + 1;
      FUNC_1(VAR_5, VAR_6->pPartIdxWhere, *VAR_10,
                            VAR_3);
      VAR_5->iSelfTab = 0;
    }else{
      *VAR_10 = 0;
    }
  }
  VAR_16 = (VAR_9 && VAR_6->uniqNotNull) ? VAR_6->nKeyCol : VAR_6->nColumn;
  VAR_15 = FUNC_2(VAR_5, VAR_16);
  if( VAR_11 && (VAR_15!=VAR_12 || VAR_11->pPartIdxWhere) ) VAR_11 = 0;
  for(VAR_14=0; VAR_14<VAR_16; VAR_14++){
    if( VAR_11
     && VAR_11->aiColumn[VAR_14]==VAR_6->aiColumn[VAR_14]
     && VAR_11->aiColumn[VAR_14]!=VAR_4
    ){

      continue;
    }
    FUNC_0(VAR_5, VAR_6, VAR_7, VAR_14, VAR_15+VAR_14);






    FUNC_7(VAR_13, VAR_1);
  }
  if( VAR_8 ){
    FUNC_5(VAR_13, VAR_0, VAR_15, VAR_16, VAR_8);
    if( VAR_6->pTable->pSelect ){
      const char *VAR_17 = FUNC_3(VAR_5->db, VAR_6);
      FUNC_6(VAR_13, -1, VAR_17, VAR_2);
    }
  }
  FUNC_4(VAR_5, VAR_15, VAR_16);
  return VAR_15;
}
