
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hMonthCal; } ;
typedef int SYSTEMTIME ;
typedef int LPARAM ;
typedef int DWORD ;
typedef TYPE_1__ DATETIME_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static BOOL FUNC_2(const DATETIME_INFO *VAR_7, const SYSTEMTIME *VAR_8)
{
    SYSTEMTIME VAR_9[2];
    DWORD VAR_10;

    if ((FUNC_0(VAR_8, &VAR_5) == 1) ||
        (FUNC_0(VAR_8, &VAR_6) == -1))
        return VAR_0;

    VAR_10 = FUNC_1 (VAR_7->hMonthCal, VAR_3, 0, (LPARAM)VAR_9);

    if (VAR_10 & VAR_1)
    {
        if (FUNC_0(VAR_8, &VAR_9[1]) == 1)
           return VAR_0;
    }

    if (VAR_10 & VAR_2)
    {
        if (FUNC_0(VAR_8, &VAR_9[0]) == -1)
           return VAR_0;
    }

    return VAR_4;
}
