
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct state {int dummy; } ;
struct TYPE_4__ {int count; TYPE_1__* tbl; } ;
struct TYPE_3__ {struct state* data; } ;


 scalar_t__ FUNC_0 (int,int) ;
 TYPE_2__* VAR_0 ;

struct state **FUNC_1(void)
{
  struct state **VAR_1;
  int VAR_2,VAR_3;
  if( VAR_0==0 ) return 0;
  VAR_3 = VAR_0->count;
  VAR_1 = (struct state **)FUNC_0(VAR_3, sizeof(struct state *));
  if( VAR_1 ){
    for(VAR_2=0; VAR_2<VAR_3; VAR_2++) VAR_1[VAR_2] = VAR_0->tbl[VAR_2].data;
  }
  return VAR_1;
}
