
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ LineUpPressed; } ;
struct TYPE_6__ {scalar_t__ NumEntries; scalar_t__ Position; int * Entries; } ;
typedef int * PUNICODE_STRING ;
typedef TYPE_1__* PHISTORY_BUFFER ;
typedef TYPE_2__* PCONSRV_CONSOLE ;
typedef size_t INT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__) ;
 scalar_t__ VAR_1 ;

BOOL
FUNC_2(PCONSRV_CONSOLE VAR_2,
                         PUNICODE_STRING VAR_3,
                         PUNICODE_STRING VAR_4,
                         PUNICODE_STRING VAR_5)
{
    INT VAR_6;


    PHISTORY_BUFFER VAR_7 = FUNC_0(VAR_2, VAR_3);
    if (!VAR_7 || VAR_7->NumEntries == 0) return VAR_0;





    if (VAR_2->LineUpPressed)
        VAR_7->Position = (VAR_7->Position ? VAR_7->Position : VAR_7->NumEntries) - 1;
    VAR_2->LineUpPressed = VAR_1;
    VAR_6 = VAR_7->Position;
    do
    {
        if (FUNC_1(VAR_4, &VAR_7->Entries[VAR_6], VAR_0))
        {
            VAR_7->Position = VAR_6;
            *VAR_5 = VAR_7->Entries[VAR_6];
            return VAR_1;
        }
        if (--VAR_6 < 0) VAR_6 += VAR_7->NumEntries;
    } while (VAR_6 != VAR_7->Position);

    return VAR_0;
}
