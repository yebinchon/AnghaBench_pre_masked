
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coreaudio_data {int retry_time; scalar_t__ no_devices; int device_uid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct coreaudio_data*) ;
 int FUNC_2 (struct coreaudio_data*) ;

__attribute__((used)) static void FUNC_3(struct coreaudio_data *VAR_1)
{
 if (!FUNC_2(VAR_1)) {
  FUNC_0(VAR_0,
       "coreaudio: failed to find device "
       "uid: %s, waiting for connection",
       VAR_1->device_uid);

  VAR_1->retry_time = 2000;

  if (VAR_1->no_devices)
   FUNC_0(VAR_0, "coreaudio: no device found");
  else
   FUNC_1(VAR_1);
 }
}
