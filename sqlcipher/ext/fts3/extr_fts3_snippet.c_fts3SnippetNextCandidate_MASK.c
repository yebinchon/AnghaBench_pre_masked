
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ iCurrent; int nPhrase; int nSnippet; TYPE_1__* aPhrase; } ;
struct TYPE_4__ {int iHead; int iTail; scalar_t__ pTail; scalar_t__ pHead; } ;
typedef TYPE_1__ SnippetPhrase ;
typedef TYPE_2__ SnippetIter ;


 int FUNC_0 (scalar_t__*,int*,int) ;

__attribute__((used)) static int FUNC_1(SnippetIter *VAR_0){
  int VAR_1;

  if( VAR_0->iCurrent<0 ){




    VAR_0->iCurrent = 0;




    for(VAR_1=0; VAR_1<VAR_0->nPhrase; VAR_1++){
      SnippetPhrase *VAR_2 = &VAR_0->aPhrase[VAR_1];
      FUNC_0(&VAR_2->pHead, &VAR_2->iHead, VAR_0->nSnippet);
    }
  }else{
    int VAR_3;
    int VAR_4 = 0x7FFFFFFF;

    for(VAR_1=0; VAR_1<VAR_0->nPhrase; VAR_1++){
      SnippetPhrase *VAR_5 = &VAR_0->aPhrase[VAR_1];
      if( VAR_5->pHead && VAR_5->iHead<VAR_4 ){
        VAR_4 = VAR_5->iHead;
      }
    }
    if( VAR_4==0x7FFFFFFF ){
      return 1;
    }

    VAR_0->iCurrent = VAR_3 = VAR_4 - VAR_0->nSnippet + 1;
    for(VAR_1=0; VAR_1<VAR_0->nPhrase; VAR_1++){
      SnippetPhrase *VAR_6 = &VAR_0->aPhrase[VAR_1];
      FUNC_0(&VAR_6->pHead, &VAR_6->iHead, VAR_4+1);
      FUNC_0(&VAR_6->pTail, &VAR_6->iTail, VAR_3);
    }
  }

  return 0;
}
