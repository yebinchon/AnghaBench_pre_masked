
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BYTE ;


 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_1(const void* VAR_0, const void* VAR_1)
{
    const BYTE* const VAR_2 = (const BYTE*)VAR_0;
    const BYTE* const VAR_3 = (const BYTE*)VAR_1;
    size_t VAR_4 = 0;
    while (VAR_2[VAR_4]==VAR_3[VAR_4]) VAR_4++;
    FUNC_0("\nWrong Byte at position %u \n", (unsigned)VAR_4);
}
