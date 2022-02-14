
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _fts2ht {TYPE_1__* chain; int count; } ;
struct TYPE_5__ {struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef TYPE_1__ fts2HashElem ;
struct TYPE_6__ {TYPE_1__* first; } ;
typedef TYPE_2__ fts2Hash ;



__attribute__((used)) static void FUNC_0(
  fts2Hash *VAR_0,
  struct _fts2ht *VAR_1,
  fts2HashElem *VAR_2
){
  fts2HashElem *VAR_3;
  VAR_3 = VAR_1->chain;
  if( VAR_3 ){
    VAR_2->next = VAR_3;
    VAR_2->prev = VAR_3->prev;
    if( VAR_3->prev ){ VAR_3->prev->next = VAR_2; }
    else { VAR_0->first = VAR_2; }
    VAR_3->prev = VAR_2;
  }else{
    VAR_2->next = VAR_0->first;
    if( VAR_0->first ){ VAR_0->first->prev = VAR_2; }
    VAR_2->prev = 0;
    VAR_0->first = VAR_2;
  }
  VAR_1->count++;
  VAR_1->chain = VAR_2;
}
