
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ll ;
typedef int ULONGLONG ;


 int FUNC_0 (char*,char*,unsigned long,...) ;

__attribute__((used)) static const char *FUNC_1(ULONGLONG VAR_0)
{
    static char VAR_1[16][64];
    static int VAR_2;

    VAR_2 &= 0x0f;

    if (sizeof(VAR_0) > sizeof(unsigned long) && VAR_0 >> 32)
        FUNC_0(VAR_1[VAR_2], "0x%lx%08lx", (unsigned long)(VAR_0 >> 32), (unsigned long)VAR_0);
    else
        FUNC_0(VAR_1[VAR_2], "0x%08lx", (unsigned long)VAR_0);

    return VAR_1[VAR_2++];
}
