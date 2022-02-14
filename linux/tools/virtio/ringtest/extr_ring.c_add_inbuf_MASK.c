
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* data; void* buf; } ;
struct TYPE_5__ {int avail_idx; int num_free; } ;
struct TYPE_4__ {unsigned long addr; unsigned int len; unsigned int index; int flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_3__* VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;

int FUNC_2(unsigned VAR_5, void *VAR_6, void *VAR_7)
{
 unsigned VAR_8, VAR_9;

 if (!VAR_2.num_free)
  return -1;

 VAR_2.num_free--;
 VAR_8 = (VAR_4 - 1) & (VAR_2.avail_idx++);




 VAR_3[VAR_8].addr = (unsigned long)(void*)VAR_6;
 VAR_3[VAR_8].len = VAR_5;





 FUNC_0();
 VAR_9 = VAR_3[VAR_8].index;
 VAR_1[VAR_9].buf = VAR_6;
 VAR_1[VAR_9].data = VAR_7;

 FUNC_1();
 VAR_3[VAR_8].flags = VAR_0;

 return 0;
}
