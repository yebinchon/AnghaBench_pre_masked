
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {int* queue; size_t producer; } ;



__attribute__((used)) static inline bool FUNC_0(struct ptr_ring *VAR_0)
{
 return VAR_0->queue[VAR_0->producer];
}
