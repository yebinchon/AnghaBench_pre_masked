
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_parser {int cfp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,char const*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;

__attribute__((used)) static inline int FUNC_3(struct shader_parser *VAR_4,
           const char *VAR_5, bool *VAR_6)
{
 bool VAR_7 = FUNC_2(&VAR_4->cfp, VAR_5);
 if (VAR_7) {
  if (!FUNC_1(&VAR_4->cfp))
   return VAR_2;

  if (VAR_7 && *VAR_6)
   FUNC_0(&VAR_4->cfp, "'$1' keyword already specified",
        VAR_0, VAR_5, ((void*)0), ((void*)0));
  *VAR_6 = VAR_7;

  return VAR_1;
 }

 return VAR_3;
}
