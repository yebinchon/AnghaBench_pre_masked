
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int reconnecting; int interleaved_mutex; int delay_capturing; } ;
typedef TYPE_1__ obs_output_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_8(obs_output_t *VAR_0)
{
 if (FUNC_0(VAR_0))
  return 0;

 FUNC_2(&VAR_0->interleaved_mutex);
 FUNC_5(VAR_0);
 FUNC_1(&VAR_0->delay_capturing, 1);
 FUNC_3(&VAR_0->interleaved_mutex);

 if (FUNC_4(VAR_0)) {
  FUNC_6(VAR_0);
  FUNC_1(&VAR_0->reconnecting, 0);
 } else {
  FUNC_7(VAR_0);
 }

 return 1;
}
