
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CFStringRef ;
typedef scalar_t__ CFIndex ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 char* FUNC_3 (int *,scalar_t__) ;

char *FUNC_4(CFStringRef VAR_1)
{
    CFIndex VAR_2 =
        FUNC_2(
            FUNC_1(VAR_1), VAR_0) + 1;
    char *VAR_3 = FUNC_3(((void*)0), VAR_2);
    FUNC_0(VAR_1, VAR_3, VAR_2, VAR_0);
    return VAR_3;
}
