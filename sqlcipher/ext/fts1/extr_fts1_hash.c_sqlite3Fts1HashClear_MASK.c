
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* pKey; struct TYPE_7__* next; } ;
typedef TYPE_1__ fts1HashElem ;
struct TYPE_8__ {scalar_t__ count; int (* xFree ) (TYPE_1__*) ;scalar_t__ copyKey; scalar_t__ htsize; TYPE_1__* ht; TYPE_1__* first; } ;
typedef TYPE_2__ fts1Hash ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(fts1Hash *VAR_0){
  fts1HashElem *VAR_1;

  FUNC_0( VAR_0!=0 );
  VAR_1 = VAR_0->first;
  VAR_0->first = 0;
  if( VAR_0->ht ) VAR_0->xFree(VAR_0->ht);
  VAR_0->ht = 0;
  VAR_0->htsize = 0;
  while( VAR_1 ){
    fts1HashElem *VAR_2 = VAR_1->next;
    if( VAR_0->copyKey && VAR_1->pKey ){
      VAR_0->xFree(VAR_1->pKey);
    }
    VAR_0->xFree(VAR_1);
    VAR_1 = VAR_2;
  }
  VAR_0->count = 0;
}
