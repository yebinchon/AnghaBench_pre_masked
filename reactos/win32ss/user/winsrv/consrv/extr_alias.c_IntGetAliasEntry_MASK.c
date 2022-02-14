
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_7__ {int * Buffer; int MaximumLength; int Length; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_9__ {struct TYPE_9__* Next; int Source; } ;
struct TYPE_8__ {TYPE_3__* Data; } ;
typedef int * PVOID ;
typedef int PCONSRV_CONSOLE ;
typedef TYPE_2__* PALIAS_HEADER ;
typedef TYPE_3__* PALIAS_ENTRY ;
typedef scalar_t__ INT ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ,int **,int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static PALIAS_ENTRY
FUNC_3(PCONSRV_CONSOLE VAR_1,
                 PALIAS_HEADER VAR_2,
                 PVOID VAR_3,
                 USHORT VAR_4,
                 BOOLEAN VAR_5)
{
    UNICODE_STRING VAR_6;

    PALIAS_ENTRY VAR_7;
    INT VAR_8;

    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) return ((void*)0);

    if (VAR_5)
    {
        VAR_6.Buffer = VAR_3;

        VAR_6.MaximumLength = VAR_4;
    }
    else
    {
        if (!FUNC_1(VAR_1,
                                       VAR_3, VAR_4,
                                       &VAR_6.Buffer, &VAR_6.MaximumLength))
        {
            return ((void*)0);
        }
    }
    VAR_6.Length = VAR_6.MaximumLength;

    VAR_7 = VAR_2->Data;
    while (VAR_7)
    {
        VAR_8 = FUNC_2(&VAR_7->Source, &VAR_6, VAR_0);
        if (!VAR_8)
        {
            if (!VAR_5) FUNC_0(VAR_6.Buffer);
            return VAR_7;
        }
        if (VAR_8 > 0) break;

        VAR_7 = VAR_7->Next;
    }

    if (!VAR_5) FUNC_0(VAR_6.Buffer);
    return ((void*)0);
}
