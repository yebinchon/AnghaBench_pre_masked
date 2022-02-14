
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int junk ;
typedef char* cmsUInt8Number ;
typedef int cmsInt32Number ;
typedef scalar_t__ cmsHANDLE ;


 int FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,void const*,int) ;

__attribute__((used)) static
cmsInt32Number FUNC_3(void)
{
    cmsHANDLE VAR_0;
    const cmsUInt8Number VAR_1[] = { "@\nA 1.e2147483648\n" };

    VAR_0 = FUNC_2(0, (const void*)VAR_1, sizeof(VAR_1));
    if (VAR_0)
        FUNC_1(FUNC_0(), VAR_0);

    return 1;
}
