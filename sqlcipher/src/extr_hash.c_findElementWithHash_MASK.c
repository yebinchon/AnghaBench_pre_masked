
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _ht {unsigned int count; TYPE_1__* chain; } ;
struct TYPE_6__ {unsigned int htsize; unsigned int count; TYPE_1__* first; struct _ht* ht; } ;
struct TYPE_5__ {struct TYPE_5__* next; int pKey; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ HashElem ;
typedef TYPE_2__ Hash ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 unsigned int FUNC_2 (char const*) ;

__attribute__((used)) static HashElem *FUNC_3(
  const Hash *VAR_0,
  const char *VAR_1,
  unsigned int *VAR_2
){
  HashElem *VAR_3;
  unsigned int VAR_4;
  unsigned int VAR_5;
  static HashElem VAR_6 = { 0, 0, 0, 0 };

  if( VAR_0->ht ){
    struct _ht *VAR_7;
    VAR_5 = FUNC_2(VAR_1) % VAR_0->htsize;
    VAR_7 = &VAR_0->ht[VAR_5];
    VAR_3 = VAR_7->chain;
    VAR_4 = VAR_7->count;
  }else{
    VAR_5 = 0;
    VAR_3 = VAR_0->first;
    VAR_4 = VAR_0->count;
  }
  if( VAR_2 ) *VAR_2 = VAR_5;
  while( VAR_4-- ){
    FUNC_0( VAR_3!=0 );
    if( FUNC_1(VAR_3->pKey,VAR_1)==0 ){
      return VAR_3;
    }
    VAR_3 = VAR_3->next;
  }
  return &VAR_6;
}
