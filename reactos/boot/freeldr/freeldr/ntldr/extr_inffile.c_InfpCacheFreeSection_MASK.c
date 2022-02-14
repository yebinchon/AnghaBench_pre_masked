
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * LastLine; int * FirstLine; struct TYPE_5__* Next; } ;
typedef TYPE_1__* PINFCACHESECTION ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int * FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static
PINFCACHESECTION
FUNC_2(
    PINFCACHESECTION VAR_1)
{
    PINFCACHESECTION VAR_2;

    if (VAR_1 == ((void*)0))
    {
        return ((void*)0);
    }


    VAR_2 = VAR_1->Next;
    while (VAR_1->FirstLine != ((void*)0))
    {
        VAR_1->FirstLine = FUNC_1(VAR_1->FirstLine);
    }
    VAR_1->LastLine = ((void*)0);

    FUNC_0(VAR_1, VAR_0);

    return VAR_2;
}
