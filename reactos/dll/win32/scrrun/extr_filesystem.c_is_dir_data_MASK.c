
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwFileAttributes; int cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static inline BOOL FUNC_1(const WIN32_FIND_DATAW *VAR_1)
{
    static const WCHAR VAR_2[] = {'.','.',0};
    static const WCHAR VAR_3[] = {'.',0};

    return (VAR_1->dwFileAttributes & VAR_0) &&
            FUNC_0(VAR_1->cFileName, VAR_2) &&
            FUNC_0(VAR_1->cFileName, VAR_3);
}
