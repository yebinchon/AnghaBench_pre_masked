
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* json; } ;
typedef TYPE_1__ obs_data_t ;
typedef int json_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 char const* FUNC_3 (int *,int) ;
 int * FUNC_4 (TYPE_1__*) ;

const char *FUNC_5(obs_data_t *VAR_1)
{
 if (!VAR_1)
  return ((void*)0);


 FUNC_1(VAR_1->json);
 VAR_1->json = ((void*)0);

 json_t *VAR_2 = FUNC_4(VAR_1);
 VAR_1->json = FUNC_3(VAR_2, VAR_0 | FUNC_0(4));
 FUNC_2(VAR_2);

 return VAR_1->json;
}
