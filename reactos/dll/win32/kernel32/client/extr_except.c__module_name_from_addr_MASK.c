
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbi ;
struct TYPE_3__ {scalar_t__ AllocationBase; } ;
typedef TYPE_1__ MEMORY_BASIC_INFORMATION ;
typedef int HMODULE ;
typedef int DWORD ;


 int FUNC_0 (int ,char*,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (void const*,TYPE_1__*,int) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static const char*
FUNC_3(const void* VAR_1, void **VAR_2,
                       char* VAR_3, size_t VAR_4, char** VAR_5)
{
    MEMORY_BASIC_INFORMATION VAR_6;

    if ((VAR_4 > VAR_0) ||
        (FUNC_1(VAR_1, &VAR_6, sizeof(VAR_6)) != sizeof(VAR_6)) ||
        !FUNC_0((HMODULE)VAR_6.AllocationBase, VAR_3, (DWORD)VAR_4))
    {
        VAR_3[0] = '\0';
        *VAR_5 = VAR_3;
        *VAR_2 = 0;
    }
    else
    {
        char* VAR_7 = FUNC_2(VAR_3, '\\'), *VAR_8 = FUNC_2(VAR_3, '/');
        if (VAR_8 && !VAR_7)
            VAR_7 = VAR_8;
        else if (VAR_7 && VAR_8 && VAR_7 < VAR_8)
            VAR_7 = VAR_8;

        if (!VAR_7)
            VAR_7 = VAR_3;
        else
            VAR_7++;

        *VAR_5 = VAR_7;
        *VAR_2 = (void *)VAR_6.AllocationBase;
    }
    return VAR_3;
}
