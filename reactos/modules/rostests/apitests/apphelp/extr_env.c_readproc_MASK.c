
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIZE_T ;
typedef int PVOID ;
typedef int LPVOID ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int,char*,int ,...) ;

__attribute__((used)) static BOOL FUNC_3(HANDLE VAR_1, LPVOID VAR_2, PVOID VAR_3, DWORD VAR_4)
{
    SIZE_T VAR_5;
    if (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_5))
    {
        FUNC_2(VAR_5 == VAR_4, "Expected to read %u bytes, got %lu\n", VAR_4, VAR_5);
        return VAR_5 == VAR_4;
    }
    FUNC_2(0, "RPM failed with %u\n", FUNC_0());
    return VAR_0;
}
