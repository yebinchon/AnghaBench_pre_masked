
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {size_t size; size_t producer; scalar_t__* queue; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,void*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(struct ptr_ring *VAR_1, void *VAR_2)
{
 if (FUNC_2(!VAR_1->size) || VAR_1->queue[VAR_1->producer])
  return -VAR_0;



 FUNC_1();

 FUNC_0(VAR_1->queue[VAR_1->producer++], VAR_2);
 if (FUNC_2(VAR_1->producer >= VAR_1->size))
  VAR_1->producer = 0;
 return 0;
}
