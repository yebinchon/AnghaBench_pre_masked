
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* FirstSection; } ;
struct TYPE_5__ {struct TYPE_5__* Next; int Name; } ;
typedef int * PWCHAR ;
typedef TYPE_1__* PINICACHESECTION ;
typedef TYPE_2__* PINICACHE ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ,int *) ;

PINICACHESECTION
FUNC_2(
    PINICACHE VAR_0,
    PWCHAR VAR_1)
{
    PINICACHESECTION VAR_2 = ((void*)0);

    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
    {
        FUNC_0("Invalid parameter\n");
        return ((void*)0);
    }


    VAR_2 = VAR_0->FirstSection;
    while (VAR_2 != ((void*)0))
    {
        FUNC_0("Comparing '%S' and '%S'\n", VAR_2->Name, VAR_1);


        if (FUNC_1(VAR_2->Name, VAR_1) == 0)
            return VAR_2;


        VAR_2 = VAR_2->Next;
    }

    FUNC_0("Section not found\n");

    return ((void*)0);
}
