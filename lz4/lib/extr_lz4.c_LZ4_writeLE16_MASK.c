
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U16 ;
typedef scalar_t__ BYTE ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void*,int) ;

__attribute__((used)) static void FUNC_2(void* VAR_0, U16 VAR_1)
{
    if (FUNC_0()) {
        FUNC_1(VAR_0, VAR_1);
    } else {
        BYTE* VAR_2 = (BYTE*)VAR_0;
        VAR_2[0] = (BYTE) VAR_1;
        VAR_2[1] = (BYTE)(VAR_1>>8);
    }
}
