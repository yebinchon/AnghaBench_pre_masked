
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_qsv {int params; int context; } ;
typedef int obs_data_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct obs_qsv*,int *) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static bool FUNC_5(void *VAR_1, obs_data_t *VAR_2)
{
 struct obs_qsv *VAR_3 = VAR_1;
 bool VAR_4 = FUNC_3(VAR_3, VAR_2);
 int VAR_5;

 if (VAR_4) {
  FUNC_0(&VAR_0);

  VAR_5 = FUNC_2(VAR_3->context, &VAR_3->params);
  if (VAR_5 != 0)
   FUNC_4("Failed to reconfigure: %d", VAR_5);

  FUNC_1(&VAR_0);

  return VAR_5 == 0;
 }

 return 0;
}
