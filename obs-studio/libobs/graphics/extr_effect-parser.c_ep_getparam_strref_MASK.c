
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strref {int dummy; } ;
struct ep_param {int name; } ;
struct TYPE_2__ {size_t num; struct ep_param* array; } ;
struct effect_parser {TYPE_1__ params; } ;


 scalar_t__ FUNC_0 (struct strref const*,int ) ;

__attribute__((used)) static inline struct ep_param *FUNC_1(struct effect_parser *VAR_0,
        const struct strref *VAR_1)
{
 size_t VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->params.num; VAR_2++) {
  if (FUNC_0(VAR_1, VAR_0->params.array[VAR_2].name) == 0)
   return VAR_0->params.array + VAR_2;
 }

 return ((void*)0);
}
