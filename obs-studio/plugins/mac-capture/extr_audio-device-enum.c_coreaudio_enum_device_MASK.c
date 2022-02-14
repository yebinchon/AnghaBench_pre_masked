
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int (* enum_device_proc_t ) (void*,int *,int *,int ) ;
typedef int UInt32 ;
struct TYPE_4__ {int mSelector; int member_2; int member_1; int member_0; } ;
typedef int OSStatus ;
typedef int * CFStringRef ;
typedef TYPE_1__ AudioObjectPropertyAddress ;
typedef int AudioDeviceID ;


 int FUNC_0 (int ,TYPE_1__*,int ,int *,int*,int **) ;
 int FUNC_1 (int ,TYPE_1__*,int ,int *,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_4(enum_device_proc_t VAR_5, void *VAR_6,
      AudioDeviceID VAR_7)
{
 UInt32 VAR_8 = 0;
 CFStringRef VAR_9 = ((void*)0);
 CFStringRef VAR_10 = ((void*)0);
 bool VAR_11 = 1;
 OSStatus VAR_12;

 AudioObjectPropertyAddress VAR_13 = {VAR_3,
        VAR_2,
        VAR_4};


 FUNC_1(VAR_7, &VAR_13, 0, ((void*)0), &VAR_8);
 if (!VAR_8)
  return 1;

 VAR_8 = sizeof(CFStringRef);

 VAR_13.mSelector = VAR_1;
 VAR_12 = FUNC_0(VAR_7, &VAR_13, 0, ((void*)0), &VAR_8, &VAR_10);
 if (!FUNC_3(VAR_12, "get audio device UID"))
  return 1;

 VAR_13.mSelector = VAR_0;
 VAR_12 = FUNC_0(VAR_7, &VAR_13, 0, ((void*)0), &VAR_8, &VAR_9);
 if (!FUNC_3(VAR_12, "get audio device name"))
  goto fail;

 VAR_11 = VAR_5(VAR_6, VAR_9, VAR_10, VAR_7);

fail:
 if (VAR_9)
  FUNC_2(VAR_9);
 if (VAR_10)
  FUNC_2(VAR_10);
 return VAR_11;
}
