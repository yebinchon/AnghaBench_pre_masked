
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_volmeter {int mutex; int cur_db; } ;
typedef int calldata_t ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (float) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, calldata_t *VAR_1)
{
 struct obs_volmeter *VAR_2 = (struct obs_volmeter *)VAR_0;

 FUNC_2(&VAR_2->mutex);

 float VAR_3 = (float)FUNC_0(VAR_1, "volume");
 VAR_2->cur_db = FUNC_1(VAR_3);

 FUNC_3(&VAR_2->mutex);
}
