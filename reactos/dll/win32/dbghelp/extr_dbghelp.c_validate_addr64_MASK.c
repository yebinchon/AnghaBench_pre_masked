
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD64 ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;

BOOL FUNC_3(DWORD64 VAR_3)
{
    if (sizeof(void*) == sizeof(int) && (VAR_3 >> 32))
    {
        FUNC_0("Unsupported address %s\n", FUNC_2(VAR_3));
        FUNC_1(VAR_0);
        return VAR_1;
    }
    return VAR_2;
}
