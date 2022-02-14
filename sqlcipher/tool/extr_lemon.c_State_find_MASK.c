
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct state* data; struct TYPE_3__* next; int key; } ;
typedef TYPE_1__ x3node ;
struct state {int dummy; } ;
struct config {int dummy; } ;
struct TYPE_4__ {int size; TYPE_1__** ht; } ;


 scalar_t__ FUNC_0 (int ,struct config*) ;
 int FUNC_1 (struct config*) ;
 TYPE_2__* VAR_0 ;

struct state *FUNC_2(struct config *VAR_1)
{
  unsigned VAR_2;
  x3node *VAR_3;

  if( VAR_0==0 ) return 0;
  VAR_2 = FUNC_1(VAR_1) & (VAR_0->size-1);
  VAR_3 = VAR_0->ht[VAR_2];
  while( VAR_3 ){
    if( FUNC_0(VAR_3->key,VAR_1)==0 ) break;
    VAR_3 = VAR_3->next;
  }
  return VAR_3 ? VAR_3->data : 0;
}
