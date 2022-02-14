
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t num; TYPE_1__* array; } ;
struct error_data {TYPE_2__ errors; } ;
struct TYPE_3__ {scalar_t__ level; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct error_data *VAR_1)
{
 size_t VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->errors.num; VAR_2++)
  if (VAR_1->errors.array[VAR_2].level == VAR_0)
   return 1;

 return 0;
}
