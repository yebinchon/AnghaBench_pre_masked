
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ep_struct {int written; } ;
struct TYPE_2__ {size_t num; char** array; } ;
struct ep_func {TYPE_1__ struct_deps; } ;
struct effect_parser {int dummy; } ;
struct dstr {int dummy; } ;


 int FUNC_0 (struct dstr*,char*) ;
 struct ep_struct* FUNC_1 (struct effect_parser*,char const*) ;
 int FUNC_2 (struct dstr*,struct ep_struct*) ;

__attribute__((used)) static inline void FUNC_3(struct effect_parser *VAR_0,
          struct dstr *VAR_1,
          struct ep_func *VAR_2)
{
 size_t VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2->struct_deps.num; VAR_3++) {
  const char *VAR_4 = VAR_2->struct_deps.array[VAR_3];
  struct ep_struct *VAR_5 = FUNC_1(VAR_0, VAR_4);

  if (!VAR_5->written) {
   FUNC_2(VAR_1, VAR_5);
   FUNC_0(VAR_1, "\n");
   VAR_5->written = 1;
  }
 }
}
