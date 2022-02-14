
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_data {int file; } ;
typedef struct config_data config_t ;
typedef int FILE ;


 int FUNC_0 (struct config_data*) ;
 int FUNC_1 (char const*) ;
 struct config_data* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct config_data*) ;
 int * FUNC_5 (char const*,char*) ;

config_t *FUNC_6(const char *VAR_0)
{
 struct config_data *VAR_1;
 FILE *VAR_2;

 VAR_2 = FUNC_5(VAR_0, "wb");
 if (!VAR_2)
  return ((void*)0);
 FUNC_3(VAR_2);

 VAR_1 = FUNC_2(sizeof(struct config_data));

 if (!FUNC_4(VAR_1)) {
  FUNC_0(VAR_1);
  return ((void*)0);
 }

 VAR_1->file = FUNC_1(VAR_0);
 return VAR_1;
}
