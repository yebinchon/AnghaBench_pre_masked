
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int i ;
typedef int WCHAR ;
struct TYPE_6__ {int MaximumLength; int Length; char* Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int *,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,int,int *) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*,int ,int *,int ,int*) ;
 scalar_t__ FUNC_9 (int ,TYPE_1__*,int ,int ,int*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_11(void)
{
    HANDLE VAR_8;
    NTSTATUS VAR_9, VAR_10;
    OBJECT_ATTRIBUTES VAR_11;
    UNICODE_STRING VAR_12;
    DWORD VAR_13;

    FUNC_2(&VAR_11, &VAR_7, 0, 0, 0);
    VAR_9 = FUNC_7(&VAR_8, VAR_1|VAR_0, &VAR_11);
    FUNC_4(VAR_9 == VAR_6, "NtOpenKey Failed: 0x%08x\n", VAR_9);

    VAR_12.MaximumLength = 0xfffc;
    VAR_12.Length = VAR_12.MaximumLength - sizeof(WCHAR);
    VAR_12.Buffer = FUNC_1(FUNC_0(), 0, VAR_12.MaximumLength);
    for (VAR_13 = 0; VAR_13 < VAR_12.Length / sizeof(WCHAR); VAR_13++)
        VAR_12.Buffer[VAR_13] = 'a';
    VAR_12.Buffer[VAR_13] = 0;

    VAR_9 = FUNC_6(VAR_8, &VAR_12);
    FUNC_4(VAR_9 == VAR_5, "NtDeleteValueKey with nonexistent long value name returned 0x%08x\n", VAR_9);
    VAR_9 = FUNC_9(VAR_8, &VAR_12, 0, VAR_3, &VAR_13, sizeof(VAR_13));
    FUNC_4(VAR_9 == VAR_4 || FUNC_3(VAR_9 == VAR_6) ,
       "NtSetValueKey with long value name returned 0x%08x\n", VAR_9);
    VAR_10 = (VAR_9 == VAR_6) ? VAR_6 : VAR_5;
    VAR_9 = FUNC_6(VAR_8, &VAR_12);
    FUNC_4(VAR_9 == VAR_10, "NtDeleteValueKey with long value name returned 0x%08x\n", VAR_9);

    VAR_9 = FUNC_8(VAR_8, &VAR_12, VAR_2, ((void*)0), 0, &VAR_13);
    FUNC_4(VAR_9 == VAR_5, "NtQueryValueKey with nonexistent long value name returned 0x%08x\n", VAR_9);

    FUNC_10(&VAR_12);
    FUNC_5(VAR_8);
}
