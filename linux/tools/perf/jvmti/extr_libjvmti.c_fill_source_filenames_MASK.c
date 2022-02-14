
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int methodID; } ;
typedef TYPE_1__ jvmti_line_info_t ;
typedef scalar_t__ jvmtiError ;
typedef int jvmtiEnv ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,char**) ;

__attribute__((used)) static jvmtiError
FUNC_1(jvmtiEnv *VAR_1, int VAR_2,
        const jvmti_line_info_t * VAR_3,
        char ** VAR_4)
{
 int VAR_5;
 jvmtiError VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  VAR_6 = FUNC_0(VAR_1, VAR_3[VAR_5].methodID, &(VAR_4[VAR_5]));
  if (VAR_6 != VAR_0)
   return VAR_6;
 }

 return VAR_0;
}
