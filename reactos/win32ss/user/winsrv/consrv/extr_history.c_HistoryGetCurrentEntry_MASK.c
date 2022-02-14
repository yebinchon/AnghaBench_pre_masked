
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {scalar_t__ NumEntries; size_t Position; TYPE_1__* Entries; } ;
struct TYPE_7__ {scalar_t__ Length; } ;
typedef TYPE_1__* PUNICODE_STRING ;
typedef TYPE_2__* PHISTORY_BUFFER ;
typedef int PCONSRV_CONSOLE ;


 TYPE_2__* FUNC_0 (int ,TYPE_1__*) ;

VOID
FUNC_1(PCONSRV_CONSOLE VAR_0,
                       PUNICODE_STRING VAR_1,
                       PUNICODE_STRING VAR_2)
{
    PHISTORY_BUFFER VAR_3 = FUNC_0(VAR_0, VAR_1);

    if (!VAR_3 || VAR_3->NumEntries == 0)
        VAR_2->Length = 0;
    else
        *VAR_2 = VAR_3->Entries[VAR_3->Position];
}
