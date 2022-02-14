
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t nCustHeaders; TYPE_1__* custHeaders; } ;
typedef TYPE_2__ http_request_t ;
struct TYPE_4__ {int wFlags; int lpszField; } ;
typedef int LPCWSTR ;
typedef size_t INT ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static INT FUNC_3(http_request_t *VAR_1, LPCWSTR VAR_2,
                                     int VAR_3, BOOL VAR_4)
{
    DWORD VAR_5;

    FUNC_0("%s, %d, %d\n", FUNC_1(VAR_2), VAR_3, VAR_4);

    for (VAR_5 = 0; VAR_5 < VAR_1->nCustHeaders; VAR_5++)
    {
        if (FUNC_2(VAR_1->custHeaders[VAR_5].lpszField, VAR_2))
            continue;

        if (VAR_4 && !(VAR_1->custHeaders[VAR_5].wFlags & VAR_0))
            continue;

        if (!VAR_4 && (VAR_1->custHeaders[VAR_5].wFlags & VAR_0))
            continue;

        if (VAR_3 == 0)
            break;
        VAR_3 --;
    }

    if (VAR_5 >= VAR_1->nCustHeaders)
 VAR_5 = -1;

    FUNC_0("Return: %d\n", VAR_5);
    return VAR_5;
}
