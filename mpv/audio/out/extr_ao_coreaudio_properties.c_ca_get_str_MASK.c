
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ca_sel ;
typedef int ca_scope ;
typedef int OSStatus ;
typedef int CFStringRef ;
typedef int AudioObjectID ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int,void**) ;
 char* FUNC_3 (int ) ;
 int VAR_0 ;

OSStatus FUNC_4(AudioObjectID VAR_1, ca_scope VAR_2, ca_sel VAR_3,
                    char **VAR_4)
{
    CFStringRef VAR_5;
    OSStatus VAR_6 =
        FUNC_2(VAR_1, VAR_2, VAR_3, sizeof(CFStringRef), (void **)&VAR_5);
    FUNC_1(VAR_0);

    *VAR_4 = FUNC_3(VAR_5);
    FUNC_0(VAR_5);
coreaudio_error:
    return VAR_6;
}
