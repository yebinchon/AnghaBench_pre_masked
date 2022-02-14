
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WCHAR ;
typedef int USHORT ;
struct TYPE_15__ {int Length; } ;
struct TYPE_14__ {scalar_t__ Length; int MaximumLength; scalar_t__* Buffer; } ;
struct TYPE_13__ {TYPE_9__ PathNameU; } ;
typedef scalar_t__* PWCHAR ;
typedef TYPE_1__* PVFATFCB ;
typedef TYPE_2__* PUNICODE_STRING ;
typedef int NTSTATUS ;


 scalar_t__* FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_9__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static
NTSTATUS
FUNC_6(
    PVFATFCB VAR_6,
    PUNICODE_STRING VAR_7,
    PUNICODE_STRING VAR_8,
    PUNICODE_STRING VAR_9)
{
    PWCHAR VAR_10;
    USHORT VAR_11;

    VAR_11 = VAR_6->PathNameU.Length + FUNC_4(VAR_7->Length, VAR_8->Length);
    if (!FUNC_5(VAR_6))
    {
        VAR_11 += sizeof(WCHAR);
    }

    if (VAR_11 > VAR_0 * sizeof(WCHAR))
    {
        return VAR_3;
    }
    VAR_10 = FUNC_0(VAR_1, VAR_11 + sizeof(WCHAR), VAR_5);
    if (!VAR_10)
    {
        return VAR_2;
    }
    VAR_9->Buffer = VAR_10;
    VAR_9->Length = 0;
    VAR_9->MaximumLength = VAR_11;

    FUNC_3(VAR_9, &VAR_6->PathNameU);
    if (!FUNC_5(VAR_6))
    {
        FUNC_2(VAR_9, L"\\");
    }
    if (VAR_7->Length > 0)
    {
        FUNC_1(VAR_9, VAR_7);
    }
    else
    {
        FUNC_1(VAR_9, VAR_8);
    }
    VAR_9->Buffer[VAR_9->Length / sizeof(WCHAR)] = 0;

    return VAR_4;
}
