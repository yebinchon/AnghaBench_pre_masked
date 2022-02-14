
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int dummy; } ;
struct list_head {scalar_t__ prev; scalar_t__ next; } ;


 scalar_t__ FUNC_0 (struct ring_buffer_per_cpu*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ring_buffer_per_cpu *VAR_0,
    struct list_head *VAR_1)
{
 if (FUNC_0(VAR_0, FUNC_1(VAR_1->prev) != VAR_1->prev))
  return 1;
 if (FUNC_0(VAR_0, FUNC_1(VAR_1->next) != VAR_1->next))
  return 1;
 return 0;
}
