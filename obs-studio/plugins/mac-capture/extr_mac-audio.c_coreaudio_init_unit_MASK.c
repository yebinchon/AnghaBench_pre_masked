
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct coreaudio_data {int au_initialized; int unit; } ;
struct TYPE_3__ {int componentSubType; int componentType; } ;
typedef int OSStatus ;
typedef TYPE_1__ AudioComponentDescription ;
typedef int AudioComponent ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,struct coreaudio_data*,char*,char*) ;
 int FUNC_3 (struct coreaudio_data*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_4(struct coreaudio_data *VAR_2)
{
 AudioComponentDescription VAR_3 = {
  .componentType = VAR_1,
  .componentSubType = VAR_0};

 AudioComponent VAR_4 = FUNC_0(((void*)0), &VAR_3);
 if (!VAR_4) {
  FUNC_3(VAR_2, "coreaudio_init_unit", "find component failed");
  return 0;
 }

 OSStatus VAR_5 = FUNC_1(VAR_4, &VAR_2->unit);
 if (!FUNC_2(VAR_5, VAR_2, "coreaudio_init_unit", "instance unit"))
  return 0;

 VAR_2->au_initialized = 1;
 return 1;
}
