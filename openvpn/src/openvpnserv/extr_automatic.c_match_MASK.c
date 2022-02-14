
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwFileAttributes; int const* cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
typedef int TCHAR ;
typedef scalar_t__* LPCTSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int const*,scalar_t__*) ;
 int * FUNC_2 (int const*,scalar_t__) ;

__attribute__((used)) static bool
FUNC_3(const WIN32_FIND_DATA *VAR_1, LPCTSTR VAR_2)
{
    if (VAR_1->dwFileAttributes & VAR_0)
    {
        return 0;
    }

    if (*VAR_2 == FUNC_0('\0'))
    {
        return 1;
    }



    const TCHAR *VAR_3 = FUNC_2(VAR_1->cFileName, FUNC_0('.'));
    return VAR_3 && VAR_3 != VAR_1->cFileName && FUNC_1(VAR_3 + 1, VAR_2) == 0;
}
