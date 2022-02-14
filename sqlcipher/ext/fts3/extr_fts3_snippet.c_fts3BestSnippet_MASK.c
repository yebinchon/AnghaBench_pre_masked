
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u64 ;
typedef int sqlite3_int64 ;
typedef int sIter ;
struct TYPE_14__ {int pExpr; } ;
struct TYPE_13__ {int iCol; int iPos; int hlmask; int covered; } ;
struct TYPE_12__ {int iCol; int nSnippet; int nPhrase; int iCurrent; struct TYPE_12__* aPhrase; scalar_t__ pHead; TYPE_4__* pCsr; } ;
typedef TYPE_1__ SnippetPhrase ;
typedef TYPE_1__ SnippetIter ;
typedef TYPE_3__ SnippetFragment ;
typedef TYPE_4__ Fts3Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,void*) ;
 int FUNC_2 (TYPE_4__*,int*,int ) ;
 int FUNC_3 (TYPE_1__*,int,int*,int*,int*,int*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(
  int VAR_3,
  Fts3Cursor *VAR_4,
  int VAR_5,
  u64 VAR_6,
  u64 *VAR_7,
  SnippetFragment *VAR_8,
  int *VAR_9
){
  int VAR_10;
  int VAR_11;
  SnippetIter VAR_12;
  sqlite3_int64 VAR_13;
  int VAR_14 = -1;
  int VAR_15;

  FUNC_5(&VAR_12, 0, sizeof(VAR_12));




  VAR_10 = FUNC_2(VAR_4, &VAR_11, 0);
  if( VAR_10!=VAR_1 ){
    return VAR_10;
  }




  VAR_13 = sizeof(SnippetPhrase) * VAR_11;
  VAR_12.aPhrase = (SnippetPhrase *)FUNC_7(VAR_13);
  if( !VAR_12.aPhrase ){
    return VAR_0;
  }
  FUNC_5(VAR_12.aPhrase, 0, VAR_13);




  VAR_12.pCsr = VAR_4;
  VAR_12.iCol = VAR_5;
  VAR_12.nSnippet = VAR_3;
  VAR_12.nPhrase = VAR_11;
  VAR_12.iCurrent = -1;
  VAR_10 = FUNC_1(VAR_4->pExpr, VAR_2, (void*)&VAR_12);
  if( VAR_10==VAR_1 ){


    for(VAR_15=0; VAR_15<VAR_11; VAR_15++){
      if( VAR_12.aPhrase[VAR_15].pHead ){
        *VAR_7 |= (u64)1 << VAR_15;
      }
    }




    VAR_8->iCol = VAR_5;
    while( !FUNC_4(&VAR_12) ){
      int VAR_16;
      int VAR_17;
      u64 VAR_18;
      u64 VAR_19;
      FUNC_3(&VAR_12, VAR_6, &VAR_16, &VAR_17, &VAR_18,&VAR_19);
      FUNC_0( VAR_17>=0 );
      if( VAR_17>VAR_14 ){
        VAR_8->iPos = VAR_16;
        VAR_8->hlmask = VAR_19;
        VAR_8->covered = VAR_18;
        VAR_14 = VAR_17;
      }
    }

    *VAR_9 = VAR_14;
  }
  FUNC_6(VAR_12.aPhrase);
  return VAR_10;
}
