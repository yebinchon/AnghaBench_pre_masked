
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct coreaudio_data {int retry_time; int device_name; } ;
typedef int UInt32 ;
struct TYPE_3__ {scalar_t__ mSelector; } ;
typedef int OSStatus ;
typedef TYPE_1__ AudioObjectPropertyAddress ;
typedef int AudioObjectID ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct coreaudio_data*) ;
 int FUNC_3 (struct coreaudio_data*) ;
 int FUNC_4 (struct coreaudio_data*) ;
 int VAR_2 ;

__attribute__((used)) static OSStatus
FUNC_5(AudioObjectID VAR_3, UInt32 VAR_4,
        const AudioObjectPropertyAddress VAR_5[], void *VAR_6)
{
 struct coreaudio_data *VAR_7 = VAR_6;

 FUNC_3(VAR_7);
 FUNC_4(VAR_7);

 if (VAR_5[0].mSelector == VAR_1)
  VAR_7->retry_time = 300;
 else
  VAR_7->retry_time = 2000;

 FUNC_1(VAR_0,
      "coreaudio: device '%s' disconnected or changed.  "
      "attempting to reconnect",
      VAR_7->device_name);

 FUNC_2(VAR_7);

 FUNC_0(VAR_3);
 FUNC_0(VAR_4);

 return VAR_2;
}
