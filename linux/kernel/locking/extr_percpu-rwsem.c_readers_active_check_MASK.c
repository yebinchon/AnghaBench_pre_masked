
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_rw_semaphore {int * read_count; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(struct percpu_rw_semaphore *VAR_0)
{
 if (FUNC_0(*VAR_0->read_count) != 0)
  return 0;






 FUNC_1();

 return 1;
}
