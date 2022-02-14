
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tRowcnt ;
struct TYPE_9__ {int db; int zDatabase; } ;
typedef TYPE_1__ analysisInfo ;
struct TYPE_10__ {int tabFlags; int szTabRow; int nRowLogEst; } ;
typedef TYPE_2__ Table ;
struct TYPE_11__ {int nKeyCol; int hasStat1; scalar_t__ pPartIdxWhere; int szIdxRow; TYPE_2__* pTable; int * aiRowLogEst; scalar_t__ bUnordered; int * aiRowEst; } ;
typedef TYPE_3__ Index ;


 int VAR_0 ;
 int FUNC_0 (char**,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int *,int *,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int ,char*,int ) ;
 TYPE_2__* FUNC_4 (int ,char*,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static int FUNC_9(void *VAR_1, int VAR_2, char **VAR_3, char **VAR_4){
  analysisInfo *VAR_5 = (analysisInfo*)VAR_1;
  Index *VAR_6;
  Table *VAR_7;
  const char *VAR_8;

  FUNC_1( VAR_2==3 );
  FUNC_0(VAR_4, VAR_2);

  if( VAR_3==0 || VAR_3[0]==0 || VAR_3[2]==0 ){
    return 0;
  }
  VAR_7 = FUNC_4(VAR_5->db, VAR_3[0], VAR_5->zDatabase);
  if( VAR_7==0 ){
    return 0;
  }
  if( VAR_3[1]==0 ){
    VAR_6 = 0;
  }else if( FUNC_8(VAR_3[0],VAR_3[1])==0 ){
    VAR_6 = FUNC_7(VAR_7);
  }else{
    VAR_6 = FUNC_3(VAR_5->db, VAR_3[1], VAR_5->zDatabase);
  }
  VAR_8 = VAR_3[2];

  if( VAR_6 ){
    tRowcnt *VAR_9 = 0;
    int VAR_10 = VAR_6->nKeyCol+1;
    VAR_6->bUnordered = 0;
    FUNC_2((char*)VAR_8, VAR_10, VAR_9, VAR_6->aiRowLogEst, VAR_6);
    VAR_6->hasStat1 = 1;
    if( VAR_6->pPartIdxWhere==0 ){
      VAR_7->nRowLogEst = VAR_6->aiRowLogEst[0];
      VAR_7->tabFlags |= VAR_0;
    }
  }else{
    Index VAR_11;
    VAR_11.szIdxRow = VAR_7->szTabRow;



    FUNC_2((char*)VAR_8, 1, 0, &VAR_7->nRowLogEst, &VAR_11);
    VAR_7->szTabRow = VAR_11.szIdxRow;
    VAR_7->tabFlags |= VAR_0;
  }

  return 0;
}
