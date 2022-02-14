
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ tRowcnt ;
struct Stat4Sample {int iCol; scalar_t__* anDLt; scalar_t__* anLt; scalar_t__* anEq; } ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;
struct TYPE_5__ {scalar_t__* anLt; scalar_t__* anEq; scalar_t__* anDLt; } ;
struct TYPE_6__ {int nCol; int nKeyCol; int iGet; int mxSample; int iPrn; struct Stat4Sample* aBest; struct Stat4Sample* a; TYPE_1__ current; scalar_t__ nPSample; scalar_t__ nRow; int * db; } ;
typedef int Stat4Sample ;
typedef TYPE_2__ Stat4Accum ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int *,int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  Stat4Accum *VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9;
  sqlite3 *VAR_10;





  FUNC_0(VAR_3);
  VAR_6 = FUNC_6(VAR_4[0]);
  FUNC_1( VAR_6>0 );
  VAR_8 = sizeof(tRowcnt)<8 ? (VAR_6+1)&~1 : VAR_6;
  VAR_7 = FUNC_6(VAR_4[1]);
  FUNC_1( VAR_7<=VAR_6 );
  FUNC_1( VAR_7>0 );


  VAR_9 = sizeof(*VAR_5)
    + sizeof(tRowcnt)*VAR_8
    + sizeof(tRowcnt)*VAR_8





  ;
  VAR_10 = FUNC_3(VAR_2);
  VAR_5 = FUNC_2(VAR_10, VAR_9);
  if( VAR_5==0 ){
    FUNC_5(VAR_2);
    return;
  }

  VAR_5->db = VAR_10;
  VAR_5->nRow = 0;
  VAR_5->nCol = VAR_6;
  VAR_5->nKeyCol = VAR_7;
  VAR_5->current.anDLt = (tRowcnt*)&VAR_5[1];
  VAR_5->current.anEq = &VAR_5->current.anDLt[VAR_8];
  FUNC_4(VAR_2, VAR_5, sizeof(*VAR_5), VAR_1);
}
