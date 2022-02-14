
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_var {char* type; } ;
struct shader_parser {int cfp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int *,int *,int *) ;
 int FUNC_1 (int *,char*,char*,int *) ;
 int FUNC_2 (struct shader_parser*,struct shader_var*,int) ;

__attribute__((used)) static inline int FUNC_3(struct shader_parser *VAR_2,
          struct shader_var *VAR_3)
{
 const char *VAR_4 = VAR_3->type + 5;
 int VAR_5 = 0, VAR_6, VAR_7;



 if (VAR_4[0] < '1' || VAR_4[0] > '4')
  FUNC_0(&VAR_2->cfp, "Invalid row count", VAR_0, ((void*)0),
       ((void*)0), ((void*)0));

 VAR_5 = VAR_4[0] - '0';

 if (VAR_4[1] == 'x') {
  if (VAR_4[2] < '1' || VAR_4[2] > '4')
   FUNC_0(&VAR_2->cfp, "Invalid column count", VAR_0,
        ((void*)0), ((void*)0), ((void*)0));

  VAR_5 *= VAR_4[2] - '0';
 }



 VAR_6 = FUNC_1(&VAR_2->cfp, "{", ";", ((void*)0));
 if (VAR_6 != VAR_1)
  return VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  char *VAR_8 = ((VAR_7 + 1) < VAR_5) ? "," : "}";

  VAR_6 = FUNC_2(VAR_2, VAR_3, 1);
  if (VAR_6 != VAR_1)
   return VAR_6;

  VAR_6 = FUNC_1(&VAR_2->cfp, VAR_8, ";", ((void*)0));
  if (VAR_6 != VAR_1)
   return VAR_6;
 }

 return VAR_1;
}
