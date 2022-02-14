
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* data; struct TYPE_3__* next; } ;
typedef TYPE_1__ x1node ;
struct TYPE_4__ {int size; TYPE_1__** ht; } ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;
 TYPE_2__* VAR_0 ;

const char *FUNC_2(const char *VAR_1)
{
  unsigned VAR_2;
  x1node *VAR_3;

  if( VAR_0==0 ) return 0;
  VAR_2 = FUNC_1(VAR_1) & (VAR_0->size-1);
  VAR_3 = VAR_0->ht[VAR_2];
  while( VAR_3 ){
    if( FUNC_0(VAR_3->data,VAR_1)==0 ) break;
    VAR_3 = VAR_3->next;
  }
  return VAR_3 ? VAR_3->data : 0;
}
