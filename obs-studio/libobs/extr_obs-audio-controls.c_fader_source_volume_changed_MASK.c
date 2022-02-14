
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_fader {int ignore_next_signal; float cur_db; int mutex; } ;
typedef int calldata_t ;


 scalar_t__ FUNC_0 (int *,char*) ;
 float FUNC_1 (float const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct obs_fader*,float const) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, calldata_t *VAR_1)
{
 struct obs_fader *VAR_2 = (struct obs_fader *)VAR_0;

 FUNC_2(&VAR_2->mutex);

 if (VAR_2->ignore_next_signal) {
  VAR_2->ignore_next_signal = 0;
  FUNC_3(&VAR_2->mutex);
  return;
 }

 const float VAR_3 = (float)FUNC_0(VAR_1, "volume");
 const float VAR_4 = FUNC_1(VAR_3);
 VAR_2->cur_db = VAR_4;

 FUNC_3(&VAR_2->mutex);

 FUNC_4(VAR_2, VAR_4);
}
