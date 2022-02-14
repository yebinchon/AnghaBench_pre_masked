
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_3__ {scalar_t__ NumEntries; size_t Position; int * Entries; } ;
typedef int * PUNICODE_STRING ;
typedef TYPE_1__* PHISTORY_BUFFER ;
typedef int PCONSRV_CONSOLE ;
typedef size_t INT ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (int ,scalar_t__) ;

BOOL
FUNC_3(PCONSRV_CONSOLE VAR_2,
                     PUNICODE_STRING VAR_3,
                     INT VAR_4,
                     PUNICODE_STRING VAR_5)
{
    PHISTORY_BUFFER VAR_6 = FUNC_0(VAR_2, VAR_3);
    ULONG VAR_7 = 0;

    if (!VAR_6 || VAR_6->NumEntries == 0) return VAR_0;

    VAR_7 = VAR_6->Position + VAR_4;
    VAR_7 = FUNC_2(FUNC_1(VAR_7, 0), VAR_6->NumEntries - 1);
    VAR_6->Position = VAR_7;

    *VAR_5 = VAR_6->Entries[VAR_6->Position];
    return VAR_1;
}
