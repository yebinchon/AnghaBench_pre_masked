
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ep_sampler {int dummy; } ;
struct TYPE_2__ {size_t num; char** array; } ;
struct ep_func {TYPE_1__ sampler_deps; } ;
struct effect_parser {int dummy; } ;
struct dstr {int dummy; } ;


 int FUNC_0 (struct dstr*,char*) ;
 struct ep_sampler* FUNC_1 (struct effect_parser*,char const*) ;
 int FUNC_2 (struct dstr*,struct ep_sampler*) ;

__attribute__((used)) static inline void FUNC_3(struct effect_parser *VAR_0,
           struct dstr *VAR_1,
           struct ep_func *VAR_2)
{
 size_t VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2->sampler_deps.num; VAR_3++) {
  const char *VAR_4 = VAR_2->sampler_deps.array[VAR_3];

  struct ep_sampler *VAR_5 = FUNC_1(VAR_0, VAR_4);
  FUNC_2(VAR_1, VAR_5);
  FUNC_0(VAR_1, "\n");
 }
}
