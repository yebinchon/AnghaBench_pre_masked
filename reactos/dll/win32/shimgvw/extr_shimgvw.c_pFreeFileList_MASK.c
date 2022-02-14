
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {struct TYPE_6__* Next; TYPE_1__* Prev; } ;
struct TYPE_5__ {int * Next; } ;
typedef TYPE_2__ SHIMGVW_FILENODE ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static VOID
FUNC_1(SHIMGVW_FILENODE *VAR_0)
{
    SHIMGVW_FILENODE *VAR_1;

    VAR_0->Prev->Next = ((void*)0);
    VAR_0->Prev = ((void*)0);

    while (VAR_0)
    {
        VAR_1 = VAR_0;
        VAR_0 = VAR_1->Next;
        FUNC_0(VAR_1);
    }
}
