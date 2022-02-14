
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* data; struct TYPE_3__** from; struct TYPE_3__* next; } ;
typedef TYPE_1__ x1node ;
struct s_x1 {int size; int count; TYPE_1__** ht; TYPE_1__* tbl; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*) ;
 struct s_x1* VAR_0 ;

int FUNC_4(const char *VAR_1)
{
  x1node *VAR_2;
  unsigned VAR_3;
  unsigned VAR_4;

  if( VAR_0==0 ) return 0;
  VAR_4 = FUNC_3(VAR_1);
  VAR_3 = VAR_4 & (VAR_0->size-1);
  VAR_2 = VAR_0->ht[VAR_3];
  while( VAR_2 ){
    if( FUNC_2(VAR_2->data,VAR_1)==0 ){


      return 0;
    }
    VAR_2 = VAR_2->next;
  }
  if( VAR_0->count>=VAR_0->size ){

    int VAR_5,VAR_6;
    struct s_x1 VAR_7;
    VAR_7.size = VAR_6 = VAR_0->size*2;
    VAR_7.count = VAR_0->count;
    VAR_7.tbl = (x1node*)FUNC_0(VAR_6, sizeof(x1node) + sizeof(x1node*));
    if( VAR_7.tbl==0 ) return 0;
    VAR_7.ht = (x1node**)&(VAR_7.tbl[VAR_6]);
    for(VAR_5=0; VAR_5<VAR_6; VAR_5++) VAR_7.ht[VAR_5] = 0;
    for(VAR_5=0; VAR_5<VAR_0->count; VAR_5++){
      x1node *VAR_8, *VAR_9;
      VAR_8 = &(VAR_0->tbl[VAR_5]);
      VAR_3 = FUNC_3(VAR_8->data) & (VAR_6-1);
      VAR_9 = &(VAR_7.tbl[VAR_5]);
      if( VAR_7.ht[VAR_3] ) VAR_7.ht[VAR_3]->from = &(VAR_9->next);
      VAR_9->next = VAR_7.ht[VAR_3];
      VAR_9->data = VAR_8->data;
      VAR_9->from = &(VAR_7.ht[VAR_3]);
      VAR_7.ht[VAR_3] = VAR_9;
    }
    FUNC_1(VAR_0->tbl);
    *VAR_0 = VAR_7;
  }

  VAR_3 = VAR_4 & (VAR_0->size-1);
  VAR_2 = &(VAR_0->tbl[VAR_0->count++]);
  VAR_2->data = VAR_1;
  if( VAR_0->ht[VAR_3] ) VAR_0->ht[VAR_3]->from = &(VAR_2->next);
  VAR_2->next = VAR_0->ht[VAR_3];
  VAR_0->ht[VAR_3] = VAR_2;
  VAR_2->from = &(VAR_0->ht[VAR_3]);
  return 1;
}
