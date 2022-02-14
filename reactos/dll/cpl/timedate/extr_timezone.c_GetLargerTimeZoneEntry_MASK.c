
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ Bias; } ;
struct TYPE_6__ {struct TYPE_6__* Next; int Description; TYPE_1__ TimezoneInfo; } ;
typedef TYPE_2__* PTIMEZONE_ENTRY ;
typedef int LPWSTR ;
typedef scalar_t__ LONG ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static
PTIMEZONE_ENTRY
FUNC_1(
    LONG VAR_1,
    LPWSTR VAR_2)
{
    PTIMEZONE_ENTRY VAR_3;

    VAR_3 = VAR_0;
    while (VAR_3 != ((void*)0))
    {
        if (VAR_3->TimezoneInfo.Bias < VAR_1)
            return VAR_3;

        if (VAR_3->TimezoneInfo.Bias == VAR_1)
        {
            if (FUNC_0(VAR_3->Description, VAR_2) > 0)
                return VAR_3;
        }

        VAR_3 = VAR_3->Next;
    }

    return ((void*)0);
}
