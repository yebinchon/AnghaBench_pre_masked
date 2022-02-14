
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int reader_lock; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct ring_buffer_per_cpu *VAR_0, bool VAR_1)
{
 if (FUNC_0(VAR_1))
  FUNC_1(&VAR_0->reader_lock);
 return;
}
