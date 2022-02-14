
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t num; TYPE_1__* array; } ;
struct error_data {TYPE_2__ errors; } ;
struct TYPE_3__ {int level; } ;



__attribute__((used)) static inline size_t FUNC_0(struct error_data *VAR_0, int VAR_1)
{
 size_t VAR_2 = 0, VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0->errors.num; VAR_3++) {
  if (VAR_0->errors.array[VAR_3].level == VAR_1)
   VAR_2++;
 }

 return VAR_2;
}
