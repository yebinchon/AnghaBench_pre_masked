
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; char** array; } ;
struct ep_func {int written; TYPE_1__ func_deps; } ;
struct effect_parser {int dummy; } ;
struct dstr {int dummy; } ;
struct darray {int dummy; } ;


 int FUNC_0 (struct dstr*,char*) ;
 struct ep_func* FUNC_1 (struct effect_parser*,char const*) ;
 int FUNC_2 (struct effect_parser*,struct dstr*,struct ep_func*,struct darray*) ;

__attribute__((used)) static inline void FUNC_3(struct effect_parser *VAR_0,
        struct dstr *VAR_1,
        struct ep_func *VAR_2,
        struct darray *VAR_3)
{
 size_t VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_2->func_deps.num; VAR_4++) {
  const char *VAR_5 = VAR_2->func_deps.array[VAR_4];
  struct ep_func *VAR_6 = FUNC_1(VAR_0, VAR_5);

  if (!VAR_6->written) {
   FUNC_2(VAR_0, VAR_1, VAR_6, VAR_3);
   FUNC_0(VAR_1, "\n\n");
  }
 }
}
