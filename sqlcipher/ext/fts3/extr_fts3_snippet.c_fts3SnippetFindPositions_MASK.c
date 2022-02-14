
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* pPhrase; } ;
struct TYPE_9__ {int iCol; int pCsr; TYPE_2__* aPhrase; } ;
struct TYPE_8__ {char* pList; char* pHead; char* pTail; int iHead; int iTail; int nToken; } ;
struct TYPE_7__ {int nToken; } ;
typedef TYPE_2__ SnippetPhrase ;
typedef TYPE_3__ SnippetIter ;
typedef TYPE_4__ Fts3Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char**,int*) ;
 int FUNC_2 (int ,TYPE_4__*,int ,char**) ;

__attribute__((used)) static int FUNC_3(Fts3Expr *VAR_2, int VAR_3, void *VAR_4){
  SnippetIter *VAR_5 = (SnippetIter *)VAR_4;
  SnippetPhrase *VAR_6 = &VAR_5->aPhrase[VAR_3];
  char *VAR_7;
  int VAR_8;

  VAR_6->nToken = VAR_2->pPhrase->nToken;
  VAR_8 = FUNC_2(VAR_5->pCsr, VAR_2, VAR_5->iCol, &VAR_7);
  FUNC_0( VAR_8==VAR_1 || VAR_7==0 );
  if( VAR_7 ){
    int VAR_9 = 0;
    VAR_6->pList = VAR_7;
    FUNC_1(&VAR_7, &VAR_9);
    if( VAR_9<0 ){
      VAR_8 = VAR_0;
    }else{
      VAR_6->pHead = VAR_7;
      VAR_6->pTail = VAR_7;
      VAR_6->iHead = VAR_9;
      VAR_6->iTail = VAR_9;
    }
  }else{
    FUNC_0( VAR_8!=VAR_1 || (
       VAR_6->pList==0 && VAR_6->pHead==0 && VAR_6->pTail==0
    ));
  }

  return VAR_8;
}
