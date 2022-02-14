
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_data_t ;
typedef int obs_data_item_t ;
typedef int json_t ;
typedef enum obs_data_type { ____Placeholder_obs_data_type } obs_data_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *,char const*,int *) ;
 int FUNC_7 (int *,char const*,int *) ;
 int FUNC_8 (int *,char const*,int *) ;
 int FUNC_9 (int *,char const*,int *) ;
 int FUNC_10 (int *,char const*,int *) ;

__attribute__((used)) static json_t *FUNC_11(obs_data_t *VAR_5)
{
 json_t *VAR_6 = FUNC_1();
 obs_data_item_t *VAR_7 = ((void*)0);

 for (VAR_7 = FUNC_2(VAR_5); VAR_7; FUNC_5(&VAR_7)) {
  enum obs_data_type VAR_8 = FUNC_3(VAR_7);
  const char *VAR_9 = FUNC_0(VAR_7);

  if (!FUNC_4(VAR_7))
   continue;

  if (VAR_8 == VAR_4)
   FUNC_10(VAR_6, VAR_9, VAR_7);
  else if (VAR_8 == VAR_2)
   FUNC_8(VAR_6, VAR_9, VAR_7);
  else if (VAR_8 == VAR_1)
   FUNC_7(VAR_6, VAR_9, VAR_7);
  else if (VAR_8 == VAR_3)
   FUNC_9(VAR_6, VAR_9, VAR_7);
  else if (VAR_8 == VAR_0)
   FUNC_6(VAR_6, VAR_9, VAR_7);
 }

 return VAR_6;
}
