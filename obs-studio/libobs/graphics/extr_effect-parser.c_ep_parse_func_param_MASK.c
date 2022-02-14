
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_var {int type; int mapping; int name; int var_type; } ;
struct ep_func {int sampler_deps; int struct_deps; } ;
struct effect_parser {int cfp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,char*,char*) ;
 int FUNC_1 (int *,int *,char*,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct effect_parser*,char*,int*) ;
 int * FUNC_6 (struct effect_parser*,int ) ;
 int * FUNC_7 (struct effect_parser*,int ) ;

__attribute__((used)) static inline int FUNC_8(struct effect_parser *VAR_6,
          struct ep_func *VAR_7, struct ep_var *VAR_8)
{
 int VAR_9;
 bool VAR_10 = 0;

 if (!FUNC_2(&VAR_6->cfp))
  return VAR_4;

 VAR_9 = FUNC_5(VAR_6, "in", &VAR_10);
 if (VAR_9 == VAR_4)
  return VAR_4;
 else if (VAR_10)
  VAR_8->var_type = VAR_0;

 if (!VAR_10) {
  VAR_9 = FUNC_5(VAR_6, "inout", &VAR_10);
  if (VAR_9 == VAR_4)
   return VAR_4;
  else if (VAR_10)
   VAR_8->var_type = VAR_1;
 }

 if (!VAR_10) {
  VAR_9 = FUNC_5(VAR_6, "out", &VAR_10);
  if (VAR_9 == VAR_4)
   return VAR_4;
  else if (VAR_10)
   VAR_8->var_type = VAR_2;
 }

 if (!VAR_10) {
  VAR_9 = FUNC_5(VAR_6, "uniform", &VAR_10);
  if (VAR_9 == VAR_4)
   return VAR_4;
  else if (VAR_10)
   VAR_8->var_type = VAR_3;
 }

 VAR_9 = FUNC_0(&VAR_6->cfp, &VAR_8->type, "type", ")");
 if (VAR_9 != VAR_5)
  return VAR_9;

 VAR_9 = FUNC_1(&VAR_6->cfp, &VAR_8->name, "name", ")");
 if (VAR_9 != VAR_5)
  return VAR_9;

 if (!FUNC_2(&VAR_6->cfp))
  return VAR_4;

 if (FUNC_3(&VAR_6->cfp, ":")) {
  VAR_9 = FUNC_1(&VAR_6->cfp, &VAR_8->mapping,
        "mapping specifier", ")");
  if (VAR_9 != VAR_5)
   return VAR_9;

  if (!FUNC_2(&VAR_6->cfp))
   return VAR_4;
 }

 if (FUNC_7(VAR_6, VAR_8->type) != ((void*)0))
  FUNC_4(VAR_7->struct_deps, &VAR_8->type);
 else if (FUNC_6(VAR_6, VAR_8->type) != ((void*)0))
  FUNC_4(VAR_7->sampler_deps, &VAR_8->type);

 return VAR_5;
}
