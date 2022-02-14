
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* Name; int * LastKey; int * FirstKey; struct TYPE_5__* Next; } ;
typedef TYPE_1__* PINICACHESECTION ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static
PINICACHESECTION
FUNC_2(
    PINICACHESECTION VAR_1)
{
    PINICACHESECTION VAR_2;

    if (VAR_1 == ((void*)0))
        return ((void*)0);

    VAR_2 = VAR_1->Next;
    while (VAR_1->FirstKey != ((void*)0))
    {
        VAR_1->FirstKey = FUNC_0(VAR_1->FirstKey);
    }
    VAR_1->LastKey = ((void*)0);

    if (VAR_1->Name != ((void*)0))
    {
        FUNC_1(VAR_0, 0, VAR_1->Name);
        VAR_1->Name = ((void*)0);
    }

    FUNC_1(VAR_0, 0, VAR_1);

    return VAR_2;
}
