
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ll ;
typedef int ULONGLONG ;


 int FUNC_0 (char*,char*,unsigned long,...) ;

__attribute__((used)) static inline const char* FUNC_1(ULONGLONG VAR_0)
{
    static char VAR_1[17];
    if (sizeof(VAR_0) > sizeof(unsigned long) && VAR_0 >> 32)
        FUNC_0(VAR_1, "%lx%08lx", (unsigned long)(VAR_0 >> 32), (unsigned long)VAR_0);
    else
        FUNC_0(VAR_1, "%lx", (unsigned long)VAR_0);
    return VAR_1;
}
