
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
struct TYPE_4__ {int nrFields; } ;
typedef scalar_t__* LPWSTR ;
typedef scalar_t__ INT ;
typedef TYPE_1__ DATETIME_INFO ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (TYPE_1__ const*,int,scalar_t__*,int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;

__attribute__((used)) static INT
FUNC_4 (const DATETIME_INFO *VAR_0, INT VAR_1, LPWSTR VAR_2)
{
    WCHAR VAR_3[80];
    int VAR_4;

    if (!VAR_2 || (VAR_1 <= 0)) return 0;

    VAR_2[0] = 0;
    for (VAR_4 = 0; VAR_4 < VAR_0->nrFields; VAR_4++)
    {
        FUNC_1(VAR_0, VAR_4, VAR_3, FUNC_0(VAR_3));
        if ((FUNC_3(VAR_2) + FUNC_3(VAR_3)) < VAR_1)
            FUNC_2(VAR_2, VAR_3);
        else break;
    }
    return FUNC_3(VAR_2);
}
