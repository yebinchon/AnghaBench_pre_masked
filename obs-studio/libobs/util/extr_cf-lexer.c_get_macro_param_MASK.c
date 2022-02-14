
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strref {int dummy; } ;
struct TYPE_3__ {size_t num; struct macro_param* array; } ;
struct macro_params {TYPE_1__ params; } ;
struct TYPE_4__ {int str; } ;
struct macro_param {TYPE_2__ name; } ;


 scalar_t__ FUNC_0 (int *,struct strref const*) ;

__attribute__((used)) static inline struct macro_param *
FUNC_1(const struct macro_params *VAR_0, const struct strref *VAR_1)
{
 size_t VAR_2;
 if (!VAR_0)
  return ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_0->params.num; VAR_2++) {
  struct macro_param *VAR_3 = VAR_0->params.array + VAR_2;
  if (FUNC_0(&VAR_3->name.str, VAR_1) == 0)
   return VAR_3;
 }

 return ((void*)0);
}
