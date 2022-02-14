
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_8__ {int * Buffer; int MaximumLength; int Length; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_10__ {struct TYPE_10__* Next; int ExeName; } ;
struct TYPE_9__ {TYPE_3__* Aliases; } ;
typedef int * PVOID ;
typedef TYPE_2__* PCONSRV_CONSOLE ;
typedef TYPE_3__* PALIAS_HEADER ;
typedef scalar_t__ INT ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int *,int ,int **,int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static PALIAS_HEADER
FUNC_3(PCONSRV_CONSOLE VAR_1,
                   PVOID VAR_2,
                   USHORT VAR_3,
                   BOOLEAN VAR_4)
{
    UNICODE_STRING VAR_5;

    PALIAS_HEADER VAR_6 = VAR_1->Aliases;
    INT VAR_7;

    if (VAR_2 == ((void*)0)) return ((void*)0);

    if (VAR_4)
    {
        VAR_5.Buffer = VAR_2;

        VAR_5.MaximumLength = VAR_3;
    }
    else
    {
        if (!FUNC_1(VAR_1,
                                       VAR_2, VAR_3,
                                       &VAR_5.Buffer, &VAR_5.MaximumLength))
        {
            return ((void*)0);
        }
    }
    VAR_5.Length = VAR_5.MaximumLength;

    while (VAR_6)
    {
        VAR_7 = FUNC_2(&VAR_6->ExeName, &VAR_5, VAR_0);
        if (!VAR_7)
        {
            if (!VAR_4) FUNC_0(VAR_5.Buffer);
            return VAR_6;
        }
        if (VAR_7 > 0) break;

        VAR_6 = VAR_6->Next;
    }

    if (!VAR_4) FUNC_0(VAR_5.Buffer);
    return ((void*)0);
}
