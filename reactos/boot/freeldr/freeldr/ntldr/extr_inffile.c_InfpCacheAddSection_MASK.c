
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* LastSection; TYPE_1__* FirstSection; } ;
struct TYPE_6__ {struct TYPE_6__* Prev; struct TYPE_6__* Next; int Name; } ;
typedef scalar_t__ SIZE_T ;
typedef TYPE_1__* PINFCACHESECTION ;
typedef TYPE_2__* PINFCACHE ;
typedef int * PCHAR ;
typedef int INFCACHESECTION ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static
PINFCACHESECTION
FUNC_4(
    PINFCACHE VAR_1,
    PCHAR VAR_2)
{
    PINFCACHESECTION VAR_3 = ((void*)0);
    SIZE_T VAR_4;

    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)))
    {

        return ((void*)0);
    }


    VAR_4 = sizeof(INFCACHESECTION) + FUNC_3(VAR_2);
    VAR_3 = (PINFCACHESECTION)FUNC_0(VAR_4, VAR_0);
    if (VAR_3 == ((void*)0))
    {

        return ((void*)0);
    }
    FUNC_1(VAR_3, 0, VAR_4);


    FUNC_2(VAR_3->Name, VAR_2);


    if (VAR_1->FirstSection == ((void*)0))
    {
        VAR_1->FirstSection = VAR_3;
        VAR_1->LastSection = VAR_3;
    }
    else
    {
        VAR_1->LastSection->Next = VAR_3;
        VAR_3->Prev = VAR_1->LastSection;
        VAR_1->LastSection = VAR_3;
    }

    return VAR_3;
}
