
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct _ht {scalar_t__ count; TYPE_2__* chain; } ;
struct TYPE_10__ {scalar_t__ count; scalar_t__ first; struct _ht* ht; } ;
struct TYPE_9__ {struct TYPE_9__* next; TYPE_1__* prev; } ;
struct TYPE_8__ {TYPE_2__* next; } ;
typedef TYPE_2__ HashElem ;
typedef TYPE_3__ Hash ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(
  Hash *VAR_0,
  HashElem* VAR_1,
  unsigned int VAR_2
){
  struct _ht *VAR_3;
  if( VAR_1->prev ){
    VAR_1->prev->next = VAR_1->next;
  }else{
    VAR_0->first = VAR_1->next;
  }
  if( VAR_1->next ){
    VAR_1->next->prev = VAR_1->prev;
  }
  if( VAR_0->ht ){
    VAR_3 = &VAR_0->ht[VAR_2];
    if( VAR_3->chain==VAR_1 ){
      VAR_3->chain = VAR_1->next;
    }
    FUNC_0( VAR_3->count>0 );
    VAR_3->count--;
  }
  FUNC_2( VAR_1 );
  VAR_0->count--;
  if( VAR_0->count==0 ){
    FUNC_0( VAR_0->first==0 );
    FUNC_0( VAR_0->count==0 );
    FUNC_1(VAR_0);
  }
}
