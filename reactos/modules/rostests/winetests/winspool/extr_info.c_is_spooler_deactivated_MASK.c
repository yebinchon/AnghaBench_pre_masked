
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static BOOL FUNC_1(DWORD VAR_3, DWORD VAR_4)
{
    if (!VAR_3 && VAR_4 == VAR_1)
    {
        static int VAR_5 = 0;
        if (!VAR_5)
        {
            VAR_5 = 1;
            FUNC_0("The service 'Spooler' is required for many tests\n");
        }
        return VAR_2;
    }
    return VAR_0;
}
