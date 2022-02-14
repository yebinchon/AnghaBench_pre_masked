
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct TYPE_4__ {int count; TYPE_1__* tbl; } ;
struct TYPE_3__ {struct symbol* data; } ;


 TYPE_2__* VAR_0 ;

struct symbol *FUNC_0(int VAR_1)
{
  struct symbol *VAR_2;
  if( VAR_0 && VAR_1>0 && VAR_1<=VAR_0->count ){
    VAR_2 = VAR_0->tbl[VAR_1-1].data;
  }else{
    VAR_2 = 0;
  }
  return VAR_2;
}
