
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snippetMatch {int iCol; int iTerm; int iStart; int nByte; } ;
struct TYPE_3__ {int nMatch; int nAlloc; struct snippetMatch* aMatch; } ;
typedef TYPE_1__ Snippet ;


 struct snippetMatch* FUNC_0 (struct snippetMatch*,int) ;

__attribute__((used)) static void FUNC_1(
  Snippet *VAR_0,
  int VAR_1, int VAR_2,
  int VAR_3, int VAR_4
){
  int VAR_5;
  struct snippetMatch *VAR_6;
  if( VAR_0->nMatch+1>=VAR_0->nAlloc ){
    VAR_0->nAlloc = VAR_0->nAlloc*2 + 10;
    VAR_0->aMatch = FUNC_0(VAR_0->aMatch, VAR_0->nAlloc*sizeof(VAR_0->aMatch[0]) );
    if( VAR_0->aMatch==0 ){
      VAR_0->nMatch = 0;
      VAR_0->nAlloc = 0;
      return;
    }
  }
  VAR_5 = VAR_0->nMatch++;
  VAR_6 = &VAR_0->aMatch[VAR_5];
  VAR_6->iCol = VAR_1;
  VAR_6->iTerm = VAR_2;
  VAR_6->iStart = VAR_3;
  VAR_6->nByte = VAR_4;
}
