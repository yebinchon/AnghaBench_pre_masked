
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
typedef int USHORT ;
struct TYPE_14__ {int* Buffer; int Length; size_t MaximumLength; } ;
struct TYPE_13__ {int lCase; int ShortName; } ;
struct TYPE_12__ {int Length; int* Buffer; int MaximumLength; } ;
typedef TYPE_1__* PUNICODE_STRING ;
typedef TYPE_2__* PFAT_DIR_ENTRY ;
typedef TYPE_3__ OEM_STRING ;
typedef int CHAR ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

VOID
FUNC_6(
    PFAT_DIR_ENTRY VAR_3,
    PUNICODE_STRING VAR_4)
{
    OEM_STRING VAR_5;
    USHORT VAR_6;
    CHAR VAR_7[12];

    FUNC_3(VAR_7, VAR_3->ShortName, 11);
    VAR_7[11] = 0;
    if (VAR_7[0] == 0x05)
    {
        VAR_7[0] = 0xe5;
    }

    VAR_5.Buffer = VAR_7;
    for (VAR_5.Length = 0;
         VAR_5.Length < 8 && VAR_5.Buffer[VAR_5.Length] != ' ';
         VAR_5.Length++);
    VAR_5.MaximumLength = VAR_5.Length;

    FUNC_5(VAR_4, &VAR_5, VAR_0);

    if (FUNC_0(VAR_3->lCase, VAR_1))
    {
        FUNC_4(VAR_4, VAR_4, VAR_0);
    }

    if (VAR_7[8] != ' ')
    {
        VAR_6 = VAR_4->Length;
        VAR_4->Buffer += VAR_6 / sizeof(WCHAR);
        if (!FUNC_2(VAR_3))
        {
            VAR_6 += sizeof(WCHAR);
            VAR_4->Buffer[0] = L'.';
            VAR_4->Buffer++;
        }
        VAR_4->Length = 0;
        VAR_4->MaximumLength -= VAR_6;

        VAR_5.Buffer = &VAR_7[8];
        for (VAR_5.Length = 0;
        VAR_5.Length < 3 && VAR_5.Buffer[VAR_5.Length] != ' ';
        VAR_5.Length++);
        VAR_5.MaximumLength = VAR_5.Length;
        FUNC_5(VAR_4, &VAR_5, VAR_0);
        if (FUNC_0(VAR_3->lCase, VAR_2))
        {
            FUNC_4(VAR_4, VAR_4, VAR_0);
        }
        VAR_4->Buffer -= VAR_6 / sizeof(WCHAR);
        VAR_4->Length += VAR_6;
        VAR_4->MaximumLength += VAR_6;
    }

    VAR_4->Buffer[VAR_4->Length / sizeof(WCHAR)] = 0;
    FUNC_1("'%wZ'\n", VAR_4);
}
