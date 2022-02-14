
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int obs_enum_audio_device_cb ;
typedef int UInt32 ;
struct TYPE_4__ {int member_2; int member_1; int member_0; } ;
typedef int OSStatus ;
typedef TYPE_1__ AudioObjectPropertyAddress ;
typedef int AudioDeviceID ;


 int FUNC_0 (int ,TYPE_1__*,int ,int *,int*,int *) ;
 int FUNC_1 (int ,TYPE_1__*,int ,int *,int*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int ,void*,int ,int) ;
 scalar_t__ FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(obs_enum_audio_device_cb VAR_4, void *VAR_5,
          bool VAR_6)
{
 AudioObjectPropertyAddress VAR_7 = {VAR_0,
        VAR_2,
        VAR_1};

 UInt32 VAR_8 = 0;
 UInt32 VAR_9;
 OSStatus VAR_10;
 AudioDeviceID *VAR_11;

 VAR_10 = FUNC_1(VAR_3, &VAR_7,
           0, ((void*)0), &VAR_8);
 if (!FUNC_5(VAR_10, "get data size"))
  return;

 VAR_11 = FUNC_3(VAR_8);
 VAR_9 = VAR_8 / sizeof(AudioDeviceID);

 VAR_10 = FUNC_0(VAR_3, &VAR_7, 0,
       ((void*)0), &VAR_8, VAR_11);
 if (FUNC_5(VAR_10, "get data")) {
  for (UInt32 VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
   if (!FUNC_4(VAR_4, VAR_5, VAR_11[VAR_12],
             VAR_6))
    break;
  }
 }

 FUNC_2(VAR_11);
}
