
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
 int FUNC_0 (struct cf_def*) ;
 size_t FUNC_1 (struct cf_preprocessor*,struct strref const*) ;
 int FUNC_2 (TYPE_1__,size_t) ;

__attribute__((used)) static inline void FUNC_3(struct cf_preprocessor *VAR_1,
         const struct strref *VAR_2)
{
 size_t VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 != VAR_0) {
  struct cf_def *VAR_4 = VAR_1->defines.array;
  FUNC_0(VAR_4 + VAR_3);
  FUNC_2(VAR_1->defines, VAR_3);
 }
}
