
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* Prev; struct TYPE_6__* Next; int Data; } ;
struct TYPE_5__ {int FieldCount; TYPE_2__* LastField; TYPE_2__* FirstField; } ;
typedef scalar_t__ SIZE_T ;
typedef int * PVOID ;
typedef TYPE_1__* PINFCACHELINE ;
typedef TYPE_2__* PINFCACHEFIELD ;
typedef int PCHAR ;
typedef int INFCACHEFIELD ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static
PVOID
FUNC_4(
    PINFCACHELINE VAR_1,
    PCHAR VAR_2)
{
    PINFCACHEFIELD VAR_3;
    SIZE_T VAR_4;

    VAR_4 = sizeof(INFCACHEFIELD) + FUNC_3(VAR_2);
    VAR_3 = (PINFCACHEFIELD)FUNC_0(VAR_4, VAR_0);
    if (VAR_3 == ((void*)0))
    {
        return ((void*)0);
    }
    FUNC_1(VAR_3, 0, VAR_4);

    FUNC_2(VAR_3->Data, VAR_2);


    if (VAR_1->FirstField == ((void*)0))
    {
        VAR_1->FirstField = VAR_3;
        VAR_1->LastField = VAR_3;
    }
    else
    {
        VAR_1->LastField->Next = VAR_3;
        VAR_3->Prev = VAR_1->LastField;
        VAR_1->LastField = VAR_3;
    }
    VAR_1->FieldCount++;

    return (PVOID)VAR_3;
}
