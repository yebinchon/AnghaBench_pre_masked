
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coreaudio_data {struct coreaudio_data* device_uid; struct coreaudio_data* device_name; int exit_event; } ;


 int FUNC_0 (struct coreaudio_data*) ;
 int FUNC_1 (struct coreaudio_data*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct coreaudio_data *VAR_1 = VAR_0;

 if (VAR_1) {
  FUNC_1(VAR_1);

  FUNC_2(VAR_1->exit_event);
  FUNC_0(VAR_1->device_name);
  FUNC_0(VAR_1->device_uid);
  FUNC_0(VAR_1);
 }
}
