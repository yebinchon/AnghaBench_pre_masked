
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int record_disabled; int reader_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static inline bool FUNC_5(struct ring_buffer_per_cpu *VAR_0)
{
 if (FUNC_2(!FUNC_1())) {
  FUNC_3(&VAR_0->reader_lock);
  return 1;
 }
 if (FUNC_4(&VAR_0->reader_lock))
  return 1;


 FUNC_0(&VAR_0->record_disabled);
 return 0;
}
