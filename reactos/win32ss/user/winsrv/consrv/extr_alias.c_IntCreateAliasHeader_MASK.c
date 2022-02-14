
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
struct TYPE_7__ {int * Buffer; scalar_t__ Length; scalar_t__ MaximumLength; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_9__ {scalar_t__ MaximumLength; scalar_t__ Length; scalar_t__ Buffer; } ;
struct TYPE_8__ {int * Next; int * Data; TYPE_3__ ExeName; } ;
typedef scalar_t__ PWSTR ;
typedef int * PVOID ;
typedef int PCONSRV_CONSOLE ;
typedef TYPE_2__* PALIAS_HEADER ;
typedef scalar_t__ BOOLEAN ;
typedef int ALIAS_HEADER ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,scalar_t__,int **,scalar_t__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static PALIAS_HEADER
FUNC_4(PCONSRV_CONSOLE VAR_0,
                     PVOID VAR_1,
                     USHORT VAR_2,
                     BOOLEAN VAR_3)
{
    UNICODE_STRING VAR_4;

    PALIAS_HEADER VAR_5;

    if (VAR_1 == ((void*)0)) return ((void*)0);

    if (VAR_3)
    {
        VAR_4.Buffer = VAR_1;

        VAR_4.MaximumLength = VAR_2;
    }
    else
    {
        if (!FUNC_2(VAR_0,
                                       VAR_1, VAR_2,
                                       &VAR_4.Buffer, &VAR_4.MaximumLength))
        {
            return ((void*)0);
        }
    }
    VAR_4.Length = VAR_4.MaximumLength;

    VAR_5 = FUNC_0(0, sizeof(ALIAS_HEADER) + VAR_4.Length);
    if (!VAR_5)
    {
        if (!VAR_3) FUNC_1(VAR_4.Buffer);
        return VAR_5;
    }

    VAR_5->ExeName.Buffer = (PWSTR)(VAR_5 + 1);
    VAR_5->ExeName.Length = 0;
    VAR_5->ExeName.MaximumLength = VAR_4.Length;
    FUNC_3(&VAR_5->ExeName, &VAR_4);

    VAR_5->Data = ((void*)0);
    VAR_5->Next = ((void*)0);

    if (!VAR_3) FUNC_1(VAR_4.Buffer);
    return VAR_5;
}
