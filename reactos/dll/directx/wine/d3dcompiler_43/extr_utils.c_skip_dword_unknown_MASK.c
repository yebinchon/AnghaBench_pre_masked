
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int DWORD ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char const**,unsigned int*) ;

void FUNC_2(const char **VAR_0, unsigned int VAR_1)
{
    unsigned int VAR_2;
    DWORD VAR_3;

    FUNC_0("Skipping %u unknown DWORDs:\n", VAR_1);
    for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2)
    {
        FUNC_1(VAR_0, &VAR_3);
        FUNC_0("\t0x%08x\n", VAR_3);
    }
}
