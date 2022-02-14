
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_param {int name; int type; } ;
struct effect_parser {int cfp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ,char*,char*) ;
 int FUNC_7 (struct effect_parser*,struct ep_param*) ;

__attribute__((used)) static inline int FUNC_8(struct effect_parser *VAR_7,
      struct ep_param *VAR_8)
{
 int VAR_9;




 if (!FUNC_4(&VAR_7->cfp))
  return VAR_3;

 if (FUNC_5(&VAR_7->cfp, ";"))
  return VAR_2;
 if (FUNC_5(&VAR_7->cfp, ">"))
  return VAR_1;

 VAR_9 = FUNC_6(&VAR_7->cfp, VAR_0, "type name", ";");
 if (VAR_9 != VAR_4)
  return VAR_9;

 FUNC_0(VAR_8->type);
 FUNC_2(&VAR_7->cfp, &VAR_8->type);




 if (!FUNC_4(&VAR_7->cfp))
  return VAR_3;

 if (FUNC_5(&VAR_7->cfp, ";")) {
  FUNC_1(&VAR_7->cfp, "variable name");
  return VAR_6;
 }
 if (FUNC_5(&VAR_7->cfp, ">")) {
  FUNC_1(&VAR_7->cfp, "variable name");
  return VAR_5;
 }

 VAR_9 = FUNC_6(&VAR_7->cfp, VAR_0, "variable name", ";");
 if (VAR_9 != VAR_4)
  return VAR_9;

 FUNC_0(VAR_8->name);
 FUNC_2(&VAR_7->cfp, &VAR_8->name);




 if (!FUNC_4(&VAR_7->cfp))
  return VAR_3;

 if (FUNC_5(&VAR_7->cfp, ":")) {
  FUNC_1(&VAR_7->cfp, "= or ;");
  return VAR_5;
 } else if (FUNC_5(&VAR_7->cfp, ">")) {
  FUNC_1(&VAR_7->cfp, "= or ;");
  return VAR_5;
 } else if (FUNC_5(&VAR_7->cfp, "=")) {
  if (!FUNC_7(VAR_7, VAR_8)) {
   FUNC_1(&VAR_7->cfp, "assignment value");
   return VAR_5;
  }
 }



 if (!FUNC_5(&VAR_7->cfp, ";")) {
  if (!FUNC_3(&VAR_7->cfp, ";", ">")) {
   FUNC_1(&VAR_7->cfp, "; or >");
   return VAR_3;
  }
  return VAR_2;
 }

 return VAR_4;
}
