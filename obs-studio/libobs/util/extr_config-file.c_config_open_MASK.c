
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct config_data {int dummy; } ;
typedef enum config_open_type { ____Placeholder_config_open_type } config_open_type ;
struct TYPE_7__ {int sections; int file; } ;
typedef TYPE_1__ config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(config_t **VAR_3, const char *VAR_4,
  enum config_open_type VAR_5)
{
 int VAR_6;
 bool VAR_7 = VAR_5 == VAR_1;

 if (!VAR_3)
  return VAR_0;

 *VAR_3 = FUNC_2(sizeof(struct config_data));
 if (!*VAR_3)
  return VAR_0;

 if (!FUNC_5(*VAR_3)) {
  FUNC_0(*VAR_3);
  return VAR_0;
 }

 (*VAR_3)->file = FUNC_1(VAR_4);

 VAR_6 = FUNC_4(&(*VAR_3)->sections, VAR_4, VAR_7);

 if (VAR_6 != VAR_2) {
  FUNC_3(*VAR_3);
  *VAR_3 = ((void*)0);
 }

 return VAR_6;
}
