
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__** from; struct TYPE_3__* next; struct state* data; struct config* key; } ;
typedef TYPE_1__ x3node ;
struct state {int dummy; } ;
struct s_x3 {int size; int count; TYPE_1__** ht; TYPE_1__* tbl; } ;
struct config {int dummy; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct config*,struct config*) ;
 int FUNC_3 (struct config*) ;
 struct s_x3* VAR_0 ;

int FUNC_4(struct state *VAR_1, struct config *VAR_2)
{
  x3node *VAR_3;
  unsigned VAR_4;
  unsigned VAR_5;

  if( VAR_0==0 ) return 0;
  VAR_5 = FUNC_3(VAR_2);
  VAR_4 = VAR_5 & (VAR_0->size-1);
  VAR_3 = VAR_0->ht[VAR_4];
  while( VAR_3 ){
    if( FUNC_2(VAR_3->key,VAR_2)==0 ){


      return 0;
    }
    VAR_3 = VAR_3->next;
  }
  if( VAR_0->count>=VAR_0->size ){

    int VAR_6,VAR_7;
    struct s_x3 VAR_8;
    VAR_8.size = VAR_7 = VAR_0->size*2;
    VAR_8.count = VAR_0->count;
    VAR_8.tbl = (x3node*)FUNC_0(VAR_7, sizeof(x3node) + sizeof(x3node*));
    if( VAR_8.tbl==0 ) return 0;
    VAR_8.ht = (x3node**)&(VAR_8.tbl[VAR_7]);
    for(VAR_6=0; VAR_6<VAR_7; VAR_6++) VAR_8.ht[VAR_6] = 0;
    for(VAR_6=0; VAR_6<VAR_0->count; VAR_6++){
      x3node *VAR_9, *VAR_10;
      VAR_9 = &(VAR_0->tbl[VAR_6]);
      VAR_4 = FUNC_3(VAR_9->key) & (VAR_7-1);
      VAR_10 = &(VAR_8.tbl[VAR_6]);
      if( VAR_8.ht[VAR_4] ) VAR_8.ht[VAR_4]->from = &(VAR_10->next);
      VAR_10->next = VAR_8.ht[VAR_4];
      VAR_10->key = VAR_9->key;
      VAR_10->data = VAR_9->data;
      VAR_10->from = &(VAR_8.ht[VAR_4]);
      VAR_8.ht[VAR_4] = VAR_10;
    }
    FUNC_1(VAR_0->tbl);
    *VAR_0 = VAR_8;
  }

  VAR_4 = VAR_5 & (VAR_0->size-1);
  VAR_3 = &(VAR_0->tbl[VAR_0->count++]);
  VAR_3->key = VAR_2;
  VAR_3->data = VAR_1;
  if( VAR_0->ht[VAR_4] ) VAR_0->ht[VAR_4]->from = &(VAR_3->next);
  VAR_3->next = VAR_0->ht[VAR_4];
  VAR_0->ht[VAR_4] = VAR_3;
  VAR_3->from = &(VAR_0->ht[VAR_4]);
  return 1;
}
