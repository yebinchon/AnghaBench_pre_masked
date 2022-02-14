
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * data; int * buf; } ;
struct TYPE_5__ {int last_used_idx; int num_free; } ;
struct TYPE_4__ {int flags; unsigned int len; int index; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;

void *FUNC_1(unsigned *VAR_5, void **VAR_6)
{
 unsigned VAR_7 = (VAR_4 - 1) & VAR_2.last_used_idx;
 unsigned VAR_8;
 void *VAR_9;

 if (VAR_3[VAR_7].flags & VAR_0)
  return ((void*)0);

 FUNC_0();
 *VAR_5 = VAR_3[VAR_7].len;
 VAR_8 = VAR_3[VAR_7].index & (VAR_4 - 1);
 VAR_9 = VAR_1[VAR_8].data;
 *VAR_6 = VAR_1[VAR_8].buf;
 VAR_1[VAR_8].buf = ((void*)0);
 VAR_1[VAR_8].data = ((void*)0);
 VAR_2.num_free++;
 VAR_2.last_used_idx++;
 return VAR_9;
}
