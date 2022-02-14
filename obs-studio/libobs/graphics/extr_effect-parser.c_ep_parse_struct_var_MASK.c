
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_var {int mapping; int name; int type; } ;
struct effect_parser {int cfp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,char*,char*) ;

__attribute__((used)) static inline int FUNC_5(struct effect_parser *VAR_7,
          struct ep_var *VAR_8)
{
 int VAR_9;




 if (!FUNC_2(&VAR_7->cfp))
  return VAR_3;

 if (FUNC_3(&VAR_7->cfp, ";"))
  return VAR_2;
 if (FUNC_3(&VAR_7->cfp, "}"))
  return VAR_1;

 VAR_9 = FUNC_4(&VAR_7->cfp, VAR_0, "type name", ";");
 if (VAR_9 != VAR_4)
  return VAR_9;

 FUNC_0(&VAR_7->cfp, &VAR_8->type);




 if (!FUNC_2(&VAR_7->cfp))
  return VAR_3;

 if (FUNC_3(&VAR_7->cfp, ";"))
  return VAR_6;
 if (FUNC_3(&VAR_7->cfp, "}"))
  return VAR_5;

 VAR_9 = FUNC_4(&VAR_7->cfp, VAR_0, "variable name", ";");
 if (VAR_9 != VAR_4)
  return VAR_9;

 FUNC_0(&VAR_7->cfp, &VAR_8->name);




 if (!FUNC_2(&VAR_7->cfp))
  return VAR_3;

 if (FUNC_3(&VAR_7->cfp, ":")) {
  if (!FUNC_2(&VAR_7->cfp))
   return VAR_3;

  if (FUNC_3(&VAR_7->cfp, ";"))
   return VAR_6;
  if (FUNC_3(&VAR_7->cfp, "}"))
   return VAR_5;

  VAR_9 = FUNC_4(&VAR_7->cfp, VAR_0, "mapping name",
     ";");
  if (VAR_9 != VAR_4)
   return VAR_9;

  FUNC_0(&VAR_7->cfp, &VAR_8->mapping);

  if (!FUNC_2(&VAR_7->cfp))
   return VAR_3;
 }



 if (!FUNC_3(&VAR_7->cfp, ";")) {
  if (!FUNC_1(&VAR_7->cfp, ";", "}"))
   return VAR_3;
  return VAR_2;
 }

 return VAR_4;
}
