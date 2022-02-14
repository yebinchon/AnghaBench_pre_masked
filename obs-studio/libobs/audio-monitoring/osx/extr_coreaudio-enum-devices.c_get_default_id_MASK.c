
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int id ;
typedef int UInt32 ;
struct TYPE_3__ {int member_2; int member_1; int member_0; } ;
typedef int OSStatus ;
typedef TYPE_1__ AudioObjectPropertyAddress ;
typedef int AudioDeviceID ;


 int FUNC_0 (int ,TYPE_1__*,int ,int *,int*,int *) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char**,int ,int) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(char **VAR_5)
{
 AudioObjectPropertyAddress VAR_6 = {
  VAR_1,
  VAR_3,
  VAR_2};

 if (*VAR_5)
  return;

 OSStatus VAR_7;
 AudioDeviceID VAR_8 = 0;
 UInt32 VAR_9 = sizeof(VAR_8);

 VAR_7 = FUNC_0(VAR_4, &VAR_6, 0,
       ((void*)0), &VAR_9, &VAR_8);
 if (FUNC_3(VAR_7, "AudioObjectGetPropertyData"))
  FUNC_2(VAR_0, VAR_5, VAR_8,
       1);
 if (!*VAR_5)
  *VAR_5 = FUNC_1(1);
}
