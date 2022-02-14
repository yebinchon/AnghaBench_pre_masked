
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_source_t ;


 int * FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(obs_source_t *VAR_0, obs_source_t *VAR_1)
{
 obs_source_t *VAR_2[2];

 if (VAR_0 == VAR_1)
  return;

 FUNC_1(VAR_1);
 FUNC_1(VAR_0);

 FUNC_2(VAR_1);
 FUNC_2(VAR_0);

 for (size_t VAR_3 = 0; VAR_3 < 2; VAR_3++)
  VAR_2[VAR_3] = FUNC_0(VAR_0, VAR_1, VAR_3);

 FUNC_4(VAR_0);
 FUNC_4(VAR_1);

 for (size_t VAR_4 = 0; VAR_4 < 2; VAR_4++)
  FUNC_3(VAR_2[VAR_4]);
}
