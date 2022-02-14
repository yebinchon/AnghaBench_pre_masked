
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* aiRowLogEst; int nKeyCol; scalar_t__ pPartIdxWhere; TYPE_1__* pTable; int hasStat1; } ;
struct TYPE_5__ {int nRowLogEst; } ;
typedef int LogEst ;
typedef TYPE_2__ Index ;


 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int) ;

void FUNC_6(Index *VAR_0){

  LogEst VAR_1[] = { 33, 32, 30, 28, 26 };
  LogEst *VAR_2 = VAR_0->aiRowLogEst;
  int VAR_3 = FUNC_2(FUNC_0(VAR_1), VAR_0->nKeyCol);
  int VAR_4;


  FUNC_3( !VAR_0->hasStat1 );




  VAR_2[0] = VAR_0->pTable->nRowLogEst;
  if( VAR_0->pPartIdxWhere!=0 ) VAR_2[0] -= 10; FUNC_3( 10==FUNC_5(2) );
  if( VAR_2[0]<33 ) VAR_2[0] = 33; FUNC_3( 33==FUNC_5(10) );



  FUNC_4(&VAR_2[1], VAR_1, VAR_3*sizeof(LogEst));
  for(VAR_4=VAR_3+1; VAR_4<=VAR_0->nKeyCol; VAR_4++){
    VAR_2[VAR_4] = 23; FUNC_3( 23==FUNC_5(5) );
  }

  FUNC_3( 0==FUNC_5(1) );
  if( FUNC_1(VAR_0) ) VAR_2[VAR_0->nKeyCol] = 0;
}
