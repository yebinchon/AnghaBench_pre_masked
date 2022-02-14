
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * LastField; struct TYPE_6__* FirstField; struct TYPE_6__* Next; struct TYPE_6__* Key; } ;
typedef TYPE_1__* PINFCACHELINE ;
typedef TYPE_1__* PINFCACHEFIELD ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static
PINFCACHELINE
FUNC_1(
    PINFCACHELINE VAR_3)
{
    PINFCACHELINE VAR_4;
    PINFCACHEFIELD VAR_5;

    if (VAR_3 == ((void*)0))
    {
        return ((void*)0);
    }

    VAR_4 = VAR_3->Next;
    if (VAR_3->Key != ((void*)0))
    {
        FUNC_0(VAR_3->Key, VAR_1);
        VAR_3->Key = ((void*)0);
    }


    while (VAR_3->FirstField != ((void*)0))
    {
        VAR_5 = VAR_3->FirstField->Next;
        FUNC_0(VAR_3->FirstField, VAR_0);
        VAR_3->FirstField = VAR_5;
    }
    VAR_3->LastField = ((void*)0);

    FUNC_0(VAR_3, VAR_2);

    return VAR_4;
}
