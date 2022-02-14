
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ dwFileVersionMS; scalar_t__ dwFileVersionLS; } ;
typedef TYPE_1__ VS_FIXEDFILEINFO ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int const*,scalar_t__*,scalar_t__*) ;

int FUNC_1( VS_FIXEDFILEINFO *VAR_0, const WCHAR *VAR_1 )
{
    DWORD VAR_2, VAR_3;

    FUNC_0( VAR_1, &VAR_2, &VAR_3 );

    if (VAR_0->dwFileVersionMS > VAR_2) return 1;
    else if (VAR_0->dwFileVersionMS < VAR_2) return -1;
    else if (VAR_0->dwFileVersionLS > VAR_3) return 1;
    else if (VAR_0->dwFileVersionLS < VAR_3) return -1;
    return 0;
}
