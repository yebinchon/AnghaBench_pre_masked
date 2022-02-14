
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vring_desc {unsigned long addr; unsigned int len; unsigned int next; int flags; } ;
struct TYPE_8__ {void* data; } ;
struct TYPE_7__ {unsigned int free_head; scalar_t__ avail_idx; int num_free; } ;
struct TYPE_6__ {TYPE_1__* avail; struct vring_desc* desc; } ;
struct TYPE_5__ {unsigned int* ring; scalar_t__ idx; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;

int FUNC_1(unsigned VAR_5, void *VAR_6, void *VAR_7)
{
 unsigned VAR_8;

 unsigned VAR_9;

 struct vring_desc *VAR_10;

 if (!VAR_2.num_free)
  return -1;




 VAR_8 = VAR_2.free_head;

 VAR_2.num_free--;

 VAR_10 = VAR_3.desc;
 VAR_10[VAR_8].flags = VAR_0;
 VAR_10[VAR_8].addr = (unsigned long)(void *)VAR_6;
 VAR_10[VAR_8].len = VAR_5;




 VAR_10[VAR_8].flags &= ~VAR_0;

 VAR_2.free_head = VAR_10[VAR_8].next;


 VAR_1[VAR_8].data = VAR_7;
 FUNC_0();
 VAR_9 = (VAR_4 - 1) & (VAR_2.avail_idx++);
 VAR_3.avail->ring[VAR_9] = VAR_8;


 FUNC_0();

 VAR_3.avail->idx = VAR_2.avail_idx;
 return 0;
}
