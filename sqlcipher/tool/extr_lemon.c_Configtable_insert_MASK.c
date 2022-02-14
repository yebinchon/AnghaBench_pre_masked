
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__** from; struct TYPE_3__* next; struct config* data; } ;
typedef TYPE_1__ x4node ;
struct s_x4 {int size; int count; TYPE_1__** ht; TYPE_1__* tbl; } ;
struct config {int dummy; } ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct config*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct s_x4* VAR_0 ;

int FUNC_4(struct config *VAR_1)
{
  x4node *VAR_2;
  unsigned VAR_3;
  unsigned VAR_4;

  if( VAR_0==0 ) return 0;
  VAR_4 = FUNC_2(VAR_1);
  VAR_3 = VAR_4 & (VAR_0->size-1);
  VAR_2 = VAR_0->ht[VAR_3];
  while( VAR_2 ){
    if( FUNC_0((const char *) VAR_2->data,(const char *) VAR_1)==0 ){


      return 0;
    }
    VAR_2 = VAR_2->next;
  }
  if( VAR_0->count>=VAR_0->size ){

    int VAR_5,VAR_6;
    struct s_x4 VAR_7;
    VAR_7.size = VAR_6 = VAR_0->size*2;
    VAR_7.count = VAR_0->count;
    VAR_7.tbl = (x4node*)FUNC_1(VAR_6, sizeof(x4node) + sizeof(x4node*));
    if( VAR_7.tbl==0 ) return 0;
    VAR_7.ht = (x4node**)&(VAR_7.tbl[VAR_6]);
    for(VAR_5=0; VAR_5<VAR_6; VAR_5++) VAR_7.ht[VAR_5] = 0;
    for(VAR_5=0; VAR_5<VAR_0->count; VAR_5++){
      x4node *VAR_8, *VAR_9;
      VAR_8 = &(VAR_0->tbl[VAR_5]);
      VAR_3 = FUNC_2(VAR_8->data) & (VAR_6-1);
      VAR_9 = &(VAR_7.tbl[VAR_5]);
      if( VAR_7.ht[VAR_3] ) VAR_7.ht[VAR_3]->from = &(VAR_9->next);
      VAR_9->next = VAR_7.ht[VAR_3];
      VAR_9->data = VAR_8->data;
      VAR_9->from = &(VAR_7.ht[VAR_3]);
      VAR_7.ht[VAR_3] = VAR_9;
    }
    FUNC_3(VAR_0->tbl);
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
