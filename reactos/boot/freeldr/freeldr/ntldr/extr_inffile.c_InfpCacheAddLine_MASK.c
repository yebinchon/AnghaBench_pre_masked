
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* Prev; struct TYPE_7__* Next; } ;
struct TYPE_6__ {int LineCount; TYPE_2__* LastLine; TYPE_2__* FirstLine; } ;
typedef TYPE_1__* PINFCACHESECTION ;
typedef TYPE_2__* PINFCACHELINE ;
typedef int INFCACHELINE ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static
PINFCACHELINE
FUNC_2(PINFCACHESECTION VAR_1)
{
    PINFCACHELINE VAR_2;

    if (VAR_1 == ((void*)0))
    {

        return ((void*)0);
    }

    VAR_2 = (PINFCACHELINE)FUNC_0(sizeof(INFCACHELINE), VAR_0);
    if (VAR_2 == ((void*)0))
    {

        return ((void*)0);
    }
    FUNC_1(VAR_2, 0, sizeof(INFCACHELINE));


    if (VAR_1->FirstLine == ((void*)0))
    {
        VAR_1->FirstLine = VAR_2;
        VAR_1->LastLine = VAR_2;
    }
    else
    {
        VAR_1->LastLine->Next = VAR_2;
        VAR_2->Prev = VAR_1->LastLine;
        VAR_1->LastLine = VAR_2;
    }
    VAR_1->LineCount++;

    return VAR_2;
}
