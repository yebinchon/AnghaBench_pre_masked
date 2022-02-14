
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strref {int dummy; } ;
struct TYPE_2__ {struct cf_def* array; } ;
struct cf_preprocessor {TYPE_1__ defines; } ;
struct cf_def {int dummy; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct cf_preprocessor*,struct strref const*) ;

__attribute__((used)) static inline struct cf_def *
FUNC_1(struct cf_preprocessor *VAR_1, const struct strref *VAR_2)
{
 size_t VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 == VAR_0)
  return ((void*)0);

 return VAR_1->defines.array + VAR_3;
}
