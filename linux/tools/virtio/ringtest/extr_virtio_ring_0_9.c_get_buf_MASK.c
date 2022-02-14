
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int * data; } ;
struct TYPE_11__ {int last_used_idx; unsigned int free_head; int num_free; } ;
struct TYPE_10__ {TYPE_3__* desc; TYPE_2__* used; } ;
struct TYPE_9__ {unsigned int len; unsigned int next; scalar_t__ addr; } ;
struct TYPE_8__ {unsigned int idx; TYPE_1__* ring; } ;
struct TYPE_7__ {unsigned int id; unsigned int len; } ;


 TYPE_6__* VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;

void *FUNC_1(unsigned *VAR_4, void **VAR_5)
{
 unsigned VAR_6;
 unsigned VAR_7;
 void *VAR_8;
 if (VAR_2.used->idx == VAR_1.last_used_idx)
  return ((void*)0);

 FUNC_0();




 VAR_6 = (VAR_3 - 1) & VAR_1.last_used_idx;
 VAR_7 = VAR_2.used->ring[VAR_6].id;






 *VAR_4 = VAR_2.used->ring[VAR_6].len;

 VAR_8 = VAR_0[VAR_7].data;
 *VAR_5 = (void*)(unsigned long)VAR_2.desc[VAR_7].addr;
 VAR_0[VAR_7].data = ((void*)0);

 VAR_2.desc[VAR_7].next = VAR_1.free_head;
 VAR_1.free_head = VAR_7;

 VAR_1.num_free++;
 VAR_1.last_used_idx++;
 return VAR_8;
}
