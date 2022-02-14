
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int Length; int MaximumLength; int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef scalar_t__ ULONG ;
struct TYPE_8__ {int NameLength; int Name; } ;
typedef int PUNICODE_STRING ;
typedef TYPE_2__* PKEY_NAME_INFORMATION ;
typedef int NTSTATUS ;
typedef int HKEY ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_2__*,scalar_t__,scalar_t__*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static
void
FUNC_7(HKEY VAR_4, PUNICODE_STRING VAR_5)
{
    UNICODE_STRING VAR_6;
    PKEY_NAME_INFORMATION VAR_7;
    ULONG VAR_8;
    NTSTATUS VAR_9;


    VAR_8 = 0;
    VAR_9 = FUNC_0(VAR_4, VAR_0, ((void*)0), 0, &VAR_8);
    FUNC_6(VAR_9, VAR_2);


    VAR_7 = FUNC_1(FUNC_4(), 0, VAR_8);
    FUNC_5(VAR_7 != ((void*)0), "\n");

    VAR_9 = FUNC_0(VAR_4, VAR_0, VAR_7, VAR_8, &VAR_8);
    FUNC_6(VAR_9, VAR_3);

    VAR_6.Buffer = VAR_7->Name;
    VAR_6.Length = VAR_7->NameLength;
    VAR_6.MaximumLength = VAR_6.Length;

    FUNC_2(VAR_1, &VAR_6, VAR_5);

    FUNC_3(FUNC_4(), 0, VAR_7);
}
