
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sSrc ;
typedef int sNC ;
struct TYPE_10__ {int zName; } ;
typedef TYPE_2__ Table ;
struct TYPE_11__ {int nSrc; int ncFlags; struct TYPE_11__* pSrcList; int * pParse; TYPE_1__* a; } ;
struct TYPE_9__ {int iCursor; TYPE_2__* pTab; int zName; } ;
typedef TYPE_3__ SrcList ;
typedef int Parse ;
typedef TYPE_3__ NameContext ;
typedef int ExprList ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;

int FUNC_4(
  Parse *VAR_4,
  Table *VAR_5,
  int VAR_6,
  Expr *VAR_7,
  ExprList *VAR_8
){
  SrcList VAR_9;
  NameContext VAR_10;
  int VAR_11;

  FUNC_0( VAR_6==0 || VAR_5!=0 );
  FUNC_0( VAR_6==VAR_1 || VAR_6==VAR_2 || VAR_6==VAR_0 || VAR_5==0 );
  FUNC_1(&VAR_10, 0, sizeof(VAR_10));
  FUNC_1(&VAR_9, 0, sizeof(VAR_9));
  if( VAR_5 ){
    VAR_9.nSrc = 1;
    VAR_9.a[0].zName = VAR_5->zName;
    VAR_9.a[0].pTab = VAR_5;
    VAR_9.a[0].iCursor = -1;
  }
  VAR_10.pParse = VAR_4;
  VAR_10.pSrcList = &VAR_9;
  VAR_10.ncFlags = VAR_6;
  if( (VAR_11 = FUNC_3(&VAR_10, VAR_7))!=VAR_3 ) return VAR_11;
  if( VAR_8 ) VAR_11 = FUNC_2(&VAR_10, VAR_8);
  return VAR_11;
}
