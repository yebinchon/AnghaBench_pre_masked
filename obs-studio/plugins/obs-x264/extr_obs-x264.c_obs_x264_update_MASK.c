
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_x264 {int params; int context; } ;
typedef int obs_data_t ;


 int FUNC_0 (struct obs_x264*,int *,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0, obs_data_t *VAR_1)
{
 struct obs_x264 *VAR_2 = VAR_0;
 bool VAR_3 = FUNC_0(VAR_2, VAR_1, 1);
 int VAR_4;

 if (VAR_3) {
  VAR_4 = FUNC_2(VAR_2->context, &VAR_2->params);
  if (VAR_4 != 0)
   FUNC_1("Failed to reconfigure: %d", VAR_4);
  return VAR_4 == 0;
 }

 return 0;
}
