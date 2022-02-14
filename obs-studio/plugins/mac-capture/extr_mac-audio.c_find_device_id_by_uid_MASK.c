
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct coreaudio_data {int default_device; int no_devices; int device_id; scalar_t__ device_uid; scalar_t__ input; } ;
typedef int UInt32 ;
struct TYPE_3__ {int mSelector; int mElement; int mScope; } ;
typedef scalar_t__ OSStatus ;
typedef int * CFStringRef ;
typedef TYPE_1__ AudioObjectPropertyAddress ;
typedef int AudioDeviceID ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*,int,int **,int*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct coreaudio_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static bool FUNC_7(struct coreaudio_data *VAR_6)
{
 UInt32 VAR_7 = sizeof(AudioDeviceID);
 CFStringRef VAR_8 = ((void*)0);
 CFStringRef VAR_9 = ((void*)0);
 UInt32 VAR_10 = 0;
 OSStatus VAR_11;
 bool VAR_12;

 AudioObjectPropertyAddress VAR_13 = {
  .mScope = VAR_2,
  .mElement = VAR_1};

 if (!VAR_6->device_uid)
  VAR_6->device_uid = FUNC_4("default");

 VAR_6->default_device = 0;
 VAR_6->no_devices = 0;


 if (FUNC_3(VAR_6->device_uid, "default") == 0) {
  if (VAR_6->input) {
   VAR_6->default_device = 1;
  } else {
   if (!FUNC_6(VAR_6)) {
    VAR_6->no_devices = 1;
    return 0;
   }
  }
 }

 VAR_8 = FUNC_2(((void*)0), VAR_6->device_uid,
        VAR_4);

 if (VAR_6->default_device) {
  VAR_13.mSelector = VAR_0;
  VAR_11 = FUNC_0(VAR_3,
        &VAR_13, VAR_10, &VAR_9,
        &VAR_7, &VAR_6->device_id);
  VAR_12 = (VAR_11 == VAR_5);
 } else {
  VAR_12 = FUNC_5(VAR_8, &VAR_6->device_id);
 }

 if (VAR_8)
  FUNC_1(VAR_8);

 return VAR_12;
}
