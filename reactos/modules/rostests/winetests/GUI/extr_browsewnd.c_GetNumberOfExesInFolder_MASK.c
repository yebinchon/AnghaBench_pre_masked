
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwFileAttributes; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
typedef int LPWSTR ;
typedef scalar_t__ INT ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_1__*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static INT
FUNC_4(LPWSTR VAR_2)
{
    HANDLE VAR_3;
    WIN32_FIND_DATAW VAR_4;
    INT VAR_5 = 0;

    VAR_3 = FUNC_1(VAR_2,
                           &VAR_4);
    if (VAR_3 == VAR_1)
    {
        FUNC_0(FUNC_3());
        return 0;
    }

    do
    {
        if (!(VAR_4.dwFileAttributes & VAR_0))
        {
            VAR_5++;
        }
    } while (FUNC_2(VAR_3, &VAR_4) != 0);

    return VAR_5;
}
