
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tRowcnt ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_12__ {int* anEq; int* anLt; int iHash; int isPSample; int iCol; int * anDLt; } ;
struct TYPE_11__ {int nCol; scalar_t__ nRow; int iPrn; int nPSample; TYPE_2__ current; int * aBest; int db; } ;
typedef TYPE_1__ Stat4Accum ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ,TYPE_2__*,int ,scalar_t__) ;
 int FUNC_7 (int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  int VAR_4;


  Stat4Accum *VAR_5 = (Stat4Accum*)FUNC_8(VAR_3[0]);
  int VAR_6 = FUNC_10(VAR_3[1]);

  FUNC_0( VAR_2 );
  FUNC_0( *VAR_1 );
  FUNC_1( VAR_5->nCol>0 );
  FUNC_1( VAR_6<VAR_5->nCol );

  if( VAR_5->nRow==0 ){

    for(VAR_4=0; VAR_4<VAR_5->nCol; VAR_4++) VAR_5->current.anEq[VAR_4] = 1;
  }else{

    FUNC_5(VAR_5, VAR_6);



    for(VAR_4=0; VAR_4<VAR_6; VAR_4++){
      VAR_5->current.anEq[VAR_4]++;
    }
    for(VAR_4=VAR_6; VAR_4<VAR_5->nCol; VAR_4++){
      VAR_5->current.anDLt[VAR_4]++;



      VAR_5->current.anEq[VAR_4] = 1;
    }
  }
  VAR_5->nRow++;
}
