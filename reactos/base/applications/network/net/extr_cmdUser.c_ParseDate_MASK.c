
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int dwHighDateTime; int dwLowDateTime; } ;
struct TYPE_10__ {int HighPart; int LowPart; } ;
struct TYPE_12__ {TYPE_1__ u; } ;
struct TYPE_11__ {int wMonth; int wDay; int wYear; int member_0; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef int * PWSTR ;
typedef int PULONG ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int INT ;
typedef TYPE_4__ FILETIME ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_2 (int **,int*) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*) ;
 int VAR_3 ;

__attribute__((used)) static
BOOL
FUNC_6(
    PWSTR VAR_4,
    PULONG VAR_5)
{
    SYSTEMTIME VAR_6 = {0};
    FILETIME VAR_7, VAR_8;
    LARGE_INTEGER VAR_9;
    INT VAR_10 = 0;
    PWSTR VAR_11 = VAR_4;

    if (!*VAR_4)
        return VAR_0;

    FUNC_0(VAR_2,
                   VAR_1,
                   (PWSTR)&VAR_10,
                   sizeof(INT));

    switch (VAR_10)
    {
        case 0:
        default:
            if (!FUNC_2(&VAR_11, &VAR_6.wMonth))
                return VAR_0;
            if (!FUNC_3(&VAR_11))
                return VAR_0;
            if (!FUNC_2(&VAR_11, &VAR_6.wDay))
                return VAR_0;
            if (!FUNC_3(&VAR_11))
                return VAR_0;
            if (!FUNC_2(&VAR_11, &VAR_6.wYear))
                return VAR_0;
            break;

        case 1:
            if (!FUNC_2(&VAR_11, &VAR_6.wDay))
                return VAR_0;
            if (!FUNC_3(&VAR_11))
                return VAR_0;
            if (!FUNC_2(&VAR_11, &VAR_6.wMonth))
                return VAR_0;
            if (!FUNC_3(&VAR_11))
                return VAR_0;
            if (!FUNC_2(&VAR_11, &VAR_6.wYear))
                return VAR_0;
            break;

        case 2:
            if (!FUNC_2(&VAR_11, &VAR_6.wYear))
                return VAR_0;
            if (!FUNC_3(&VAR_11))
                return VAR_0;
            if (!FUNC_2(&VAR_11, &VAR_6.wMonth))
                return VAR_0;
            if (!FUNC_3(&VAR_11))
                return VAR_0;
            if (!FUNC_2(&VAR_11, &VAR_6.wDay))
                return VAR_0;
            break;
    }




    if (VAR_6.wYear <= 99)
    {
        if (VAR_6.wYear >= 80)
            VAR_6.wYear += 1900;
        else
            VAR_6.wYear += 2000;
    }

    if (!FUNC_5(&VAR_6, &VAR_7))
        return VAR_0;

    if (!FUNC_1(&VAR_7, &VAR_8))
        return VAR_0;

    VAR_9.u.LowPart = VAR_8.dwLowDateTime;
    VAR_9.u.HighPart = VAR_8.dwHighDateTime;

    if (!FUNC_4(&VAR_9, VAR_5))
        return VAR_0;

    return VAR_3;
}
