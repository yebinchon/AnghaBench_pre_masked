
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_16__ {int iPhrase; TYPE_6__* pPhrase; } ;
struct TYPE_12__ {char* pList; } ;
struct TYPE_15__ {int iColumn; TYPE_3__ doclist; } ;
struct TYPE_14__ {int nColumn; } ;
struct TYPE_13__ {scalar_t__ flag; int nCol; int* aMatchinfo; TYPE_2__* pCursor; } ;
struct TYPE_10__ {scalar_t__ pVtab; } ;
struct TYPE_11__ {TYPE_1__ base; } ;
typedef TYPE_4__ MatchInfo ;
typedef TYPE_5__ Fts3Table ;
typedef TYPE_6__ Fts3Phrase ;
typedef TYPE_7__ Fts3Expr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char*,int*) ;

__attribute__((used)) static int FUNC_3(
  Fts3Expr *VAR_4,
  MatchInfo *VAR_5
){
  Fts3Table *VAR_6 = (Fts3Table *)VAR_5->pCursor->base.pVtab;
  int VAR_7;
  Fts3Phrase *VAR_8 = VAR_4->pPhrase;
  char *VAR_9 = VAR_8->doclist.pList;
  int VAR_10 = 0;

  FUNC_0( VAR_5->flag==VAR_1 || VAR_5->flag==VAR_0 );
  if( VAR_5->flag==VAR_0 ){
    VAR_7 = VAR_4->iPhrase * VAR_5->nCol;
  }else{
    VAR_7 = VAR_4->iPhrase * ((VAR_5->nCol + 31) / 32);
  }

  while( 1 ){
    int VAR_11 = FUNC_1(&VAR_9);
    if( (VAR_8->iColumn>=VAR_6->nColumn || VAR_8->iColumn==VAR_10) ){
      if( VAR_5->flag==VAR_0 ){
        VAR_5->aMatchinfo[VAR_7 + VAR_10] = (u32)VAR_11;
      }else if( VAR_11 ){
        VAR_5->aMatchinfo[VAR_7 + (VAR_10+1)/32] |= (1 << (VAR_10&0x1F));
      }
    }
    FUNC_0( *VAR_9==0x00 || *VAR_9==0x01 );
    if( *VAR_9!=0x01 ) break;
    VAR_9++;
    VAR_9 += FUNC_2(VAR_9, &VAR_10);
    if( VAR_10>=VAR_5->nCol ) return VAR_2;
  }
  return VAR_3;
}
