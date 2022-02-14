
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct coreaudio_data {char* device_name; int device_id; } ;
typedef int UInt32 ;
struct TYPE_3__ {int member_2; int member_1; int member_0; } ;
typedef scalar_t__ OSStatus ;
typedef int * CFStringRef ;
typedef TYPE_1__ AudioObjectPropertyAddress ;


 scalar_t__ FUNC_0 (int ,TYPE_1__ const*,int ,int *,int*,int **) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,...) ;
 char* FUNC_4 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static bool FUNC_5(struct coreaudio_data *VAR_6)
{
 CFStringRef VAR_7 = ((void*)0);
 UInt32 VAR_8 = sizeof(CFStringRef);
 char *VAR_9 = ((void*)0);

 const AudioObjectPropertyAddress VAR_10 = {
  VAR_1,
  VAR_3,
  VAR_2};

 OSStatus VAR_11 = FUNC_0(VAR_6->device_id, &VAR_10, 0,
         ((void*)0), &VAR_8, &VAR_7);
 if (VAR_11 != VAR_5) {
  FUNC_3(VAR_0,
       "[coreaudio_get_device_name] failed to "
       "get name: %d",
       (int)VAR_11);
  return 0;
 }

 VAR_9 = FUNC_4(VAR_7, VAR_4);
 if (!VAR_9) {
  FUNC_3(VAR_0, "[coreaudio_get_device_name] failed to "
      "convert name to cstr for some reason");
  return 0;
 }

 FUNC_2(VAR_6->device_name);
 VAR_6->device_name = VAR_9;

 if (VAR_7)
  FUNC_1(VAR_7);

 return 1;
}
