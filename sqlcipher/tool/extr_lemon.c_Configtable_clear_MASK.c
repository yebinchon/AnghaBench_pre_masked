
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; int size; scalar_t__* ht; TYPE_1__* tbl; } ;
struct TYPE_3__ {struct config* data; } ;


 int FUNC_0 (struct config*) ;
 TYPE_2__* VAR_0 ;

void FUNC_1(int(*VAR_1)(struct config *))
{
  int VAR_2;
  if( VAR_0==0 || VAR_0->count==0 ) return;
  if( VAR_1 ) for(VAR_2=0; VAR_2<VAR_0->count; VAR_2++) (*VAR_1)(VAR_0->tbl[VAR_2].data);
  for(VAR_2=0; VAR_2<VAR_0->size; VAR_2++) VAR_0->ht[VAR_2] = 0;
  VAR_0->count = 0;
  return;
}
