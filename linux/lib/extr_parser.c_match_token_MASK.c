
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct match_token {int token; int pattern; } ;
typedef struct match_token* match_table_t ;


 int FUNC_0 (char*,int ,int *) ;

int FUNC_1(char *VAR_0, const match_table_t VAR_1, substring_t VAR_2[])
{
 const struct match_token *VAR_3;

 for (VAR_3 = VAR_1; !FUNC_0(VAR_0, VAR_3->pattern, VAR_2) ; VAR_3++)
  ;

 return VAR_3->token;
}
