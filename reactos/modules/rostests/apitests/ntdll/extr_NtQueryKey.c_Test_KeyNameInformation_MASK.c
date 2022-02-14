
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_10__ {int Length; int MaximumLength; int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_11__ {int NameLength; int Name; } ;
typedef TYPE_2__* PKEY_NAME_INFORMATION ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int * HANDLE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *,int ,TYPE_2__*,int,int*) ;
 int VAR_4 ;
 TYPE_1__ FUNC_5 (char*) ;
 TYPE_2__* FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_8 (int ,int ,TYPE_2__*) ;
 int FUNC_9 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static
void
FUNC_14(void)
{
    UNICODE_STRING VAR_8 = FUNC_5(L"\\Registry\\Machine");
    UNICODE_STRING VAR_9 = FUNC_5(L"\\Registry\\Machine\\Software");
    UNICODE_STRING VAR_10 = FUNC_5(L"Software");
    UNICODE_STRING VAR_11;
    HANDLE VAR_12, VAR_13;
    PKEY_NAME_INFORMATION VAR_14;
    ULONG VAR_15;
    OBJECT_ATTRIBUTES VAR_16;
    NTSTATUS VAR_17;


    FUNC_1(&VAR_16,
        &VAR_8,
        VAR_4,
        ((void*)0),
        ((void*)0));
    VAR_17 = FUNC_3(&VAR_12, VAR_1, &VAR_16);
    FUNC_11(VAR_17, VAR_6);


    VAR_15 = 0;
    VAR_17 = FUNC_4(VAR_12, VAR_2, ((void*)0), 0, &VAR_15);
    FUNC_11(VAR_17, VAR_5);
    FUNC_12(VAR_15, FUNC_0(VAR_0, VAR_3[VAR_8.Length/sizeof(WCHAR)]));


    VAR_14 = FUNC_6(FUNC_9(), 0, VAR_15);
    if (!VAR_14)
    {
        FUNC_13("Out of memory\n");
        return;
    }

    VAR_17 = FUNC_4(VAR_12, VAR_2, VAR_14, VAR_15, &VAR_15);
    FUNC_11(VAR_17, VAR_6);
    FUNC_12(VAR_15, FUNC_0(VAR_0, VAR_3[VAR_8.Length/sizeof(WCHAR)]));
    FUNC_12(VAR_14->NameLength, VAR_8.Length);

    VAR_11.Buffer = VAR_14->Name;
    VAR_11.Length = VAR_14->NameLength;
    VAR_11.MaximumLength = VAR_14->NameLength;
    FUNC_10(FUNC_7(&VAR_11, &VAR_8, VAR_7) == 0, "%.*S\n",
        VAR_11.Length, VAR_11.Buffer);

    FUNC_8(FUNC_9(), 0, VAR_14);


    FUNC_1(&VAR_16,
        &VAR_10,
        VAR_4,
        VAR_12,
        ((void*)0));
    VAR_17 = FUNC_3(&VAR_13, VAR_1, &VAR_16);
    FUNC_11(VAR_17, VAR_6);


    VAR_15 = 0;
    VAR_17 = FUNC_4(VAR_13, VAR_2, ((void*)0), 0, &VAR_15);
    FUNC_11(VAR_17, VAR_5);
    FUNC_12(VAR_15, FUNC_0(VAR_0, VAR_3[VAR_9.Length/sizeof(WCHAR)]));


    VAR_14 = FUNC_6(FUNC_9(), 0, VAR_15);
    FUNC_10(VAR_14 != ((void*)0), "\n");

    VAR_17 = FUNC_4(VAR_13, VAR_2, VAR_14, VAR_15, &VAR_15);
    FUNC_11(VAR_17, VAR_6);
    FUNC_12(VAR_15, FUNC_0(VAR_0, VAR_3[VAR_9.Length/sizeof(WCHAR)]));
    FUNC_12(VAR_14->NameLength, VAR_9.Length);

    VAR_11.Buffer = VAR_14->Name;
    VAR_11.Length = VAR_14->NameLength;
    VAR_11.MaximumLength = VAR_14->NameLength;
    FUNC_10(FUNC_7(&VAR_11, &VAR_9, VAR_7) == 0, "%.*S\n",
        VAR_11.Length, VAR_11.Buffer);

    FUNC_8(FUNC_9(), 0, VAR_14);

    FUNC_2(VAR_13);
    FUNC_2(VAR_12);
}
