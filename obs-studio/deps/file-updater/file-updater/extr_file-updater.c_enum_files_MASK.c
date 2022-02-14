
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_data_t ;
typedef int obs_data_array_t ;


 size_t FUNC_0 (int *) ;
 int * FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(obs_data_t *VAR_0,
         bool (*VAR_1)(void *VAR_2, obs_data_t *VAR_3),
         void *VAR_4)
{
 obs_data_array_t *VAR_5 = FUNC_3(VAR_0, "files");
 size_t VAR_6;

 if (!VAR_5)
  return;

 VAR_6 = FUNC_0(VAR_5);

 for (size_t VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  obs_data_t *VAR_8 = FUNC_1(VAR_5, VAR_7);
  bool VAR_9 = VAR_1(VAR_4, VAR_8);
  FUNC_4(VAR_8);

  if (!VAR_9)
   break;
 }

 FUNC_2(VAR_5);
}
