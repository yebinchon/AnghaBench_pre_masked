
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_8__ {int MaximumLength; int * Buffer; scalar_t__ Length; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int PWSTR ;
typedef int NTSTATUS ;
typedef char* LPWSTR ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static
BOOL
FUNC_8(PWSTR* VAR_4,
                              LPWSTR VAR_5,
                              LPWSTR VAR_6)
{
    NTSTATUS VAR_7;
    UNICODE_STRING VAR_8, VAR_9;

    FUNC_5(&VAR_8, VAR_5);

    VAR_9.Length = 0;
    VAR_9.MaximumLength = 1024 * sizeof(WCHAR);
    VAR_9.Buffer = FUNC_1(VAR_1, VAR_9.MaximumLength);
    if (VAR_9.Buffer == ((void*)0))
        return VAR_0;

    VAR_9.Buffer[0] = VAR_3;

    VAR_7 = FUNC_6(*VAR_4,
                                           &VAR_8,
                                           &VAR_9);
    if (FUNC_3(VAR_7))
        FUNC_4(&VAR_9, L";");

    FUNC_4(&VAR_9, VAR_6);

    VAR_7 = FUNC_7(VAR_4,
                                       &VAR_8,
                                       &VAR_9);
    FUNC_2(VAR_9.Buffer);
    if (!FUNC_3(VAR_7))
    {
        FUNC_0("RtlSetEnvironmentVariable() failed (Status %lx)\n", VAR_7);
        return VAR_0;
    }

    return VAR_2;
}
