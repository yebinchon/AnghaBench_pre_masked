
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_value ;
typedef int sqlite3_str ;
typedef int sqlite3_context ;
struct TYPE_12__ {double iRowid; TYPE_1__* aCoord; } ;
struct TYPE_11__ {int nDim; int nDim2; int nBytesPerCell; int* zData; } ;
struct TYPE_10__ {double i; scalar_t__ f; } ;
typedef TYPE_2__ RtreeNode ;
typedef TYPE_3__ RtreeCell ;
typedef TYPE_2__ Rtree ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int,int ) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,char*,double) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(sqlite3_context *VAR_1, int VAR_2, sqlite3_value **VAR_3){
  RtreeNode VAR_4;
  Rtree VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8;
  sqlite3_str *VAR_9;

  FUNC_1(VAR_2);
  FUNC_2(&VAR_4, 0, sizeof(RtreeNode));
  FUNC_2(&VAR_5, 0, sizeof(Rtree));
  VAR_5.nDim = (u8)FUNC_13(VAR_3[0]);
  if( VAR_5.nDim<1 || VAR_5.nDim>5 ) return;
  VAR_5.nDim2 = VAR_5.nDim*2;
  VAR_5.nBytesPerCell = 8 + 8 * VAR_5.nDim;
  VAR_4.zData = (u8 *)FUNC_11(VAR_3[1]);
  VAR_7 = FUNC_12(VAR_3[1]);
  if( VAR_7<4 ) return;
  if( VAR_7<FUNC_0(&VAR_4)*VAR_5.nBytesPerCell ) return;

  VAR_9 = FUNC_10(0);
  for(VAR_6=0; VAR_6<FUNC_0(&VAR_4); VAR_6++){
    RtreeCell VAR_10;
    int VAR_11;

    FUNC_3(&VAR_5, &VAR_4, VAR_6, &VAR_10);
    if( VAR_6>0 ) FUNC_6(VAR_9, " ", 1);
    FUNC_7(VAR_9, "{%lld", VAR_10.iRowid);
    for(VAR_11=0; VAR_11<VAR_5.nDim2; VAR_11++){

      FUNC_7(VAR_9, " %g", (double)VAR_10.aCoord[VAR_11].f);



    }
    FUNC_6(VAR_9, "}", 1);
  }
  VAR_8 = FUNC_8(VAR_9);
  FUNC_5(VAR_1, FUNC_9(VAR_9), -1, VAR_0);
  FUNC_4(VAR_1, VAR_8);
}
