
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ USHORT ;
struct TYPE_12__ {scalar_t__ Length; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_13__ {int * Buffer; scalar_t__ Length; scalar_t__ MaximumLength; } ;
typedef TYPE_2__* PUNICODE_STRING ;
typedef int PHANDLE ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOL ;
typedef int ACCESS_MASK ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int const*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (char*,TYPE_2__*,...) ;
 int * FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int const*) ;
 int FUNC_12 () ;

NTSTATUS FUNC_13(PUNICODE_STRING VAR_3, BOOL VAR_4, ACCESS_MASK VAR_5, PHANDLE VAR_6)
{
    UNICODE_STRING VAR_7;
    const WCHAR* VAR_8 = VAR_0;
    OBJECT_ATTRIBUTES VAR_9 = FUNC_2(VAR_3, VAR_1);
    NTSTATUS VAR_10;
    VAR_3->Buffer = ((void*)0);
    VAR_3->Length = VAR_3->MaximumLength = 0;
    if (VAR_4)
    {
        FUNC_7(&VAR_7, VAR_2);
    }
    else
    {
        VAR_10 = FUNC_5(&VAR_7);
        if (!FUNC_0(VAR_10))
        {
            FUNC_8("Unable to acquire user registry key, Error: 0x%lx\n", VAR_10);
            return VAR_10;
        }
    }
    VAR_3->MaximumLength = (USHORT)(VAR_7.Length + FUNC_11(VAR_8));
    VAR_3->Buffer = FUNC_9(VAR_3->MaximumLength);
    VAR_3->Length = 0;
    FUNC_3(VAR_3, &VAR_7);
    if (!VAR_4)
        FUNC_6(&VAR_7);
    FUNC_4(VAR_3, VAR_8);

    VAR_10 = FUNC_1(VAR_6, VAR_5 | FUNC_12(), &VAR_9);
    if (!FUNC_0(VAR_10))
    {
        FUNC_8("Unable to open Key  \"%wZ\" Status 0x%lx\n", VAR_3, VAR_10);
        FUNC_10(VAR_3->Buffer);
        VAR_3->Buffer = ((void*)0);
    }
    return VAR_10;
}
