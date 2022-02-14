
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_6__ {struct TYPE_6__* Next; int Name; } ;
struct TYPE_5__ {TYPE_2__* FirstKey; } ;
typedef int PWCHAR ;
typedef TYPE_1__* PINICACHESECTION ;
typedef TYPE_2__* PINICACHEKEY ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static
PINICACHEKEY
FUNC_2(
     PINICACHESECTION VAR_0,
     PWCHAR VAR_1,
     ULONG VAR_2)
{
    PINICACHEKEY VAR_3;

    VAR_3 = VAR_0->FirstKey;
    while (VAR_3 != ((void*)0))
    {
        if (VAR_2 == FUNC_1(VAR_3->Name))
        {
            if (FUNC_0(VAR_3->Name, VAR_1, VAR_2) == 0)
                break;
        }

        VAR_3 = VAR_3->Next;
    }

    return VAR_3;
}
