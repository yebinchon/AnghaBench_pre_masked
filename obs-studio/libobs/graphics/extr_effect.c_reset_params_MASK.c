
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pass_shaderparam {TYPE_1__* eparam; } ;
struct darray {size_t num; struct pass_shaderparam* array; } ;
struct TYPE_2__ {int changed; } ;



__attribute__((used)) static inline void FUNC_0(struct darray *VAR_0)
{
 struct pass_shaderparam *VAR_1 = VAR_0->array;
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num; VAR_2++)
  VAR_1[VAR_2].eparam->changed = 0;
}
