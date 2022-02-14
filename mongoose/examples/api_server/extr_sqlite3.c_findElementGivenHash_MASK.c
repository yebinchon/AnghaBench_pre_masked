
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct _ht {int count; TYPE_1__* chain; } ;
struct TYPE_7__ {int count; TYPE_1__* first; struct _ht* ht; } ;
struct TYPE_6__ {int nKey; struct TYPE_6__* next; int pKey; } ;
typedef TYPE_1__ HashElem ;
typedef TYPE_2__ Hash ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static HashElem *FUNC_2(
  const Hash *VAR_0,
  const char *VAR_1,
  int VAR_2,
  unsigned int VAR_3
){
  HashElem *VAR_4;
  int VAR_5;

  if( VAR_0->ht ){
    struct _ht *VAR_6 = &VAR_0->ht[VAR_3];
    VAR_4 = VAR_6->chain;
    VAR_5 = VAR_6->count;
  }else{
    VAR_4 = VAR_0->first;
    VAR_5 = VAR_0->count;
  }
  while( VAR_5-- && FUNC_0(VAR_4) ){
    if( VAR_4->nKey==VAR_2 && FUNC_1(VAR_4->pKey,VAR_1,VAR_2)==0 ){
      return VAR_4;
    }
    VAR_4 = VAR_4->next;
  }
  return 0;
}
