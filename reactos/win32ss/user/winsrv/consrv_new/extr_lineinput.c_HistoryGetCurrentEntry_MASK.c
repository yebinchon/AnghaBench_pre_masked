
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {scalar_t__ NumEntries; size_t Position; TYPE_1__* Entries; } ;
struct TYPE_5__ {scalar_t__ Length; } ;
typedef TYPE_1__* PUNICODE_STRING ;
typedef TYPE_2__* PHISTORY_BUFFER ;
typedef int PCONSOLE ;


 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static VOID
FUNC_1(PCONSOLE VAR_0, PUNICODE_STRING VAR_1)
{
    PHISTORY_BUFFER VAR_2 = FUNC_0(VAR_0);

    if (!VAR_2 || VAR_2->NumEntries == 0)
        VAR_1->Length = 0;
    else
        *VAR_1 = VAR_2->Entries[VAR_2->Position];
}
