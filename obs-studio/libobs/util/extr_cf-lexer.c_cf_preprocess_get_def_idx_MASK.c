
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strref {int dummy; } ;
struct TYPE_3__ {size_t num; struct cf_def* array; } ;
struct cf_preprocessor {TYPE_1__ defines; } ;
struct TYPE_4__ {int str; } ;
struct cf_def {TYPE_2__ name; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct strref const*) ;

__attribute__((used)) static inline size_t FUNC_1(struct cf_preprocessor *VAR_1,
            const struct strref *VAR_2)
{
 struct cf_def *VAR_3 = VAR_1->defines.array;
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->defines.num; VAR_4++) {
  struct cf_def *VAR_5 = VAR_3 + VAR_4;

  if (FUNC_0(&VAR_5->name.str, VAR_2) == 0)
   return VAR_4;
 }

 return VAR_0;
}
