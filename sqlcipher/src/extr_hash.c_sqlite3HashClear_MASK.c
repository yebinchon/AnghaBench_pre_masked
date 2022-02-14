
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ count; scalar_t__ htsize; TYPE_1__* ht; TYPE_1__* first; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ HashElem ;
typedef TYPE_2__ Hash ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(Hash *VAR_0){
  HashElem *VAR_1;

  FUNC_0( VAR_0!=0 );
  VAR_1 = VAR_0->first;
  VAR_0->first = 0;
  FUNC_1(VAR_0->ht);
  VAR_0->ht = 0;
  VAR_0->htsize = 0;
  while( VAR_1 ){
    HashElem *VAR_2 = VAR_1->next;
    FUNC_1(VAR_1);
    VAR_1 = VAR_2;
  }
  VAR_0->count = 0;
}
