
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao {int dummy; } ;
typedef int UInt32 ;
typedef int OSStatus ;
typedef int AudioObjectPropertyAddress ;
typedef int AudioObjectID ;


 int FUNC_0 (struct ao*,char*) ;
 int FUNC_1 (struct ao*) ;
 int VAR_0 ;
 int FUNC_2 (struct ao*) ;

__attribute__((used)) static OSStatus FUNC_3(AudioObjectID VAR_1, UInt32 VAR_2,
                           const AudioObjectPropertyAddress VAR_3[],
                           void *VAR_4)
{
    struct ao *VAR_5 = VAR_4;
    FUNC_0(VAR_5, "Handling potential hotplug event...\n");
    FUNC_2(VAR_5);
    FUNC_1(VAR_5);
    return VAR_0;
}
