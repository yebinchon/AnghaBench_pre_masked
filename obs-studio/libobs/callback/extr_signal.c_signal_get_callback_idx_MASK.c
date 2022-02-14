
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; struct signal_callback* array; } ;
struct signal_info {TYPE_1__ callbacks; } ;
struct signal_callback {scalar_t__ callback; void* data; } ;
typedef scalar_t__ signal_callback_t ;


 size_t VAR_0 ;

__attribute__((used)) static inline size_t FUNC_0(struct signal_info *VAR_1,
          signal_callback_t VAR_2,
          void *VAR_3)
{
 for (size_t VAR_4 = 0; VAR_4 < VAR_1->callbacks.num; VAR_4++) {
  struct signal_callback *VAR_5 = VAR_1->callbacks.array + VAR_4;

  if (VAR_5->callback == VAR_2 && VAR_5->data == VAR_3)
   return VAR_4;
 }

 return VAR_0;
}
