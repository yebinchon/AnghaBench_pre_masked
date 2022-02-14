
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct lexer {int dummy; } ;
struct config_data {int dummy; } ;
struct TYPE_6__ {int sections; int * file; } ;
typedef TYPE_1__ config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct lexer*) ;
 int FUNC_4 (struct lexer*) ;
 int FUNC_5 (struct lexer*,char const*) ;
 int FUNC_6 (int *,struct lexer*) ;

int FUNC_7(config_t **VAR_2, const char *VAR_3)
{
 struct lexer VAR_4;

 if (!VAR_2)
  return VAR_0;

 *VAR_2 = FUNC_1(sizeof(struct config_data));
 if (!*VAR_2)
  return VAR_0;

 if (!FUNC_2(*VAR_2)) {
  FUNC_0(*VAR_2);
  return VAR_0;
 }

 (*VAR_2)->file = ((void*)0);

 FUNC_4(&VAR_4);
 FUNC_5(&VAR_4, VAR_3);
 FUNC_6(&(*VAR_2)->sections, &VAR_4);
 FUNC_3(&VAR_4);

 return VAR_1;
}
