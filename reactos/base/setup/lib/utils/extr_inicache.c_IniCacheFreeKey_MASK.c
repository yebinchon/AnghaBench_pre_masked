
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* Data; struct TYPE_5__* Name; struct TYPE_5__* Next; } ;
typedef TYPE_1__* PINICACHEKEY ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static
PINICACHEKEY
FUNC_1(
    PINICACHEKEY VAR_1)
{
    PINICACHEKEY VAR_2;

    if (VAR_1 == ((void*)0))
        return ((void*)0);

    VAR_2 = VAR_1->Next;
    if (VAR_1->Name != ((void*)0))
    {
        FUNC_0(VAR_0, 0, VAR_1->Name);
        VAR_1->Name = ((void*)0);
    }

    if (VAR_1->Data != ((void*)0))
    {
        FUNC_0(VAR_0, 0, VAR_1->Data);
        VAR_1->Data = ((void*)0);
    }

    FUNC_0(VAR_0, 0, VAR_1);

    return VAR_2;
}
