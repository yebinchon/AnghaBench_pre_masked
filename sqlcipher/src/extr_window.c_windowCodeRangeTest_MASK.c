
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* pMWin; TYPE_5__* pParse; } ;
typedef TYPE_4__ WindowCodeArg ;
typedef int Vdbe ;
struct TYPE_15__ {int nMem; } ;
struct TYPE_13__ {TYPE_2__* pOrderBy; } ;
struct TYPE_12__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_11__ {scalar_t__ sortOrder; } ;
typedef TYPE_5__ Parse ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*) ;
 int * FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (int *,int,int,int,int) ;
 int FUNC_7 (int *,int ,int ,int,int ,char*,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_4__*,int,int) ;

__attribute__((used)) static void FUNC_12(
  WindowCodeArg *VAR_7,
  int VAR_8,
  int VAR_9,
  int VAR_10,
  int VAR_11,
  int VAR_12
){
  Parse *VAR_13 = VAR_7->pParse;
  Vdbe *VAR_14 = FUNC_4(VAR_13);
  int VAR_15 = FUNC_3(VAR_13);
  int VAR_16 = FUNC_3(VAR_13);
  int VAR_17 = VAR_0;
  int VAR_18;

  int VAR_19 = ++VAR_13->nMem;

  FUNC_2( VAR_8==129 || VAR_8==128 || VAR_8==VAR_1 );
  FUNC_2( VAR_7->pMWin->pOrderBy && VAR_7->pMWin->pOrderBy->nExpr==1 );
  if( VAR_7->pMWin->pOrderBy->a[0].sortOrder ){
    switch( VAR_8 ){
      case 129: VAR_8 = VAR_1; break;
      case 128: VAR_8 = VAR_2; break;
      default: FUNC_2( VAR_8==VAR_1 ); VAR_8 = 129; break;
    }
    VAR_17 = VAR_4;
  }

  FUNC_11(VAR_7, VAR_9, VAR_15);
  FUNC_11(VAR_7, VAR_11, VAR_16);




  FUNC_7(VAR_14, VAR_3, 0, VAR_19, 0, "", VAR_5);
  VAR_18 = FUNC_6(VAR_14, 129, VAR_19, 0, VAR_15);
  FUNC_0(VAR_14);
  FUNC_6(VAR_14, VAR_17, VAR_10, VAR_15, VAR_15);
  FUNC_9(VAR_14, VAR_18);
  FUNC_6(VAR_14, VAR_8, VAR_16, VAR_12, VAR_15); FUNC_0(VAR_14);
  FUNC_8(VAR_14, VAR_6);
  FUNC_2( VAR_8==129 || VAR_8==128 || VAR_8==VAR_2 || VAR_8==VAR_1 );
  FUNC_10(VAR_8==129); FUNC_1(VAR_14, VAR_8==129);
  FUNC_10(VAR_8==VAR_2); FUNC_1(VAR_14, VAR_8==VAR_2);
  FUNC_10(VAR_8==VAR_1); FUNC_1(VAR_14, VAR_8==VAR_1);
  FUNC_10(VAR_8==128); FUNC_1(VAR_14, VAR_8==128);

  FUNC_5(VAR_13, VAR_15);
  FUNC_5(VAR_13, VAR_16);
}
