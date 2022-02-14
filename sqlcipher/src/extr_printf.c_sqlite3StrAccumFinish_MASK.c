
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* zText; size_t nChar; scalar_t__ mxAlloc; } ;
typedef TYPE_1__ StrAccum ;


 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (TYPE_1__*) ;

char *FUNC_2(StrAccum *VAR_0){
  if( VAR_0->zText ){
    VAR_0->zText[VAR_0->nChar] = 0;
    if( VAR_0->mxAlloc>0 && !FUNC_0(VAR_0) ){
      return FUNC_1(VAR_0);
    }
  }
  return VAR_0->zText;
}
