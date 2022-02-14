
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_parser {int cfp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,char const*,int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct shader_parser *VAR_1,
            const char *VAR_2, bool VAR_3)
{
 if (VAR_3)
  FUNC_0(&VAR_1->cfp,
       "'$1' keyword cannot be used with a "
       "function",
       VAR_0, VAR_2, ((void*)0), ((void*)0));
}
