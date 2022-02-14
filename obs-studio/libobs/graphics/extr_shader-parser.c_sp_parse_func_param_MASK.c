
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_var {int mapping; int name; int type; int var_type; } ;
struct shader_parser {int cfp; } ;


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
 int FUNC_4 (struct shader_parser*,char*,int*) ;

__attribute__((used)) static inline int FUNC_5(struct shader_parser *VAR_6,
          struct shader_var *VAR_7)
{
 int VAR_8;
 bool VAR_9 = 0;

 if (!FUNC_2(&VAR_6->cfp))
  return VAR_0;

 VAR_8 = FUNC_4(VAR_6, "in", &VAR_9);
 if (VAR_8 == VAR_0)
  return VAR_0;
 else if (VAR_9)
  VAR_7->var_type = VAR_2;

 if (!VAR_9) {
  VAR_8 = FUNC_4(VAR_6, "inout", &VAR_9);
  if (VAR_8 == VAR_0)
   return VAR_0;
  else if (VAR_9)
   VAR_7->var_type = VAR_3;
 }

 if (!VAR_9) {
  VAR_8 = FUNC_4(VAR_6, "out", &VAR_9);
  if (VAR_8 == VAR_0)
   return VAR_0;
  else if (VAR_9)
   VAR_7->var_type = VAR_4;
 }

 if (!VAR_9) {
  VAR_8 = FUNC_4(VAR_6, "uniform", &VAR_9);
  if (VAR_8 == VAR_0)
   return VAR_0;
  else if (VAR_9)
   VAR_7->var_type = VAR_5;
 }

 VAR_8 = FUNC_0(&VAR_6->cfp, &VAR_7->type, "type", ")");
 if (VAR_8 != VAR_1)
  return VAR_8;

 VAR_8 = FUNC_1(&VAR_6->cfp, &VAR_7->name, "name", ")");
 if (VAR_8 != VAR_1)
  return VAR_8;

 if (!FUNC_2(&VAR_6->cfp))
  return VAR_0;

 if (FUNC_3(&VAR_6->cfp, ":")) {
  VAR_8 = FUNC_1(&VAR_6->cfp, &VAR_7->mapping,
        "mapping specifier", ")");
  if (VAR_8 != VAR_1)
   return VAR_8;

  if (!FUNC_2(&VAR_6->cfp))
   return VAR_0;
 }

 return VAR_1;
}
