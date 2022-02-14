
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_8__ {int MaximumLength; scalar_t__ Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int ULONG ;
typedef int TUNNEL ;
typedef scalar_t__ PVOID ;
typedef scalar_t__ PTUNNEL ;


 void* FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,TYPE_1__*,TYPE_1__*,int ,int,int*) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int,TYPE_1__*,TYPE_1__*,TYPE_1__*,int*,int*) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (scalar_t__,int) ;
 int VAR_2 ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int,int) ;

__attribute__((used)) static
void FUNC_15()
{
    UNICODE_STRING VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    ULONG VAR_9, VAR_10, VAR_11, VAR_12;
    PTUNNEL VAR_13;
    PVOID VAR_14;

    VAR_9 = 1;
    VAR_10 = 2;
    FUNC_7(&VAR_3, L"LONGFI~1.TXT");
    FUNC_7(&VAR_4, L"Longfilename.txt");
    FUNC_7(&VAR_7, L"LONGFI~2.TXT");
    FUNC_7(&VAR_8, L"Longfilenamr.txt");
    VAR_13 = FUNC_0(VAR_0, sizeof(TUNNEL));
    FUNC_8(VAR_13, sizeof(TUNNEL));
    VAR_5.MaximumLength = 13 * sizeof(WCHAR);
    VAR_5.Buffer = FUNC_0(VAR_1, VAR_5.MaximumLength);
    VAR_6.MaximumLength = 17 * sizeof(WCHAR);
    VAR_6.Buffer = VAR_14 = FUNC_0(VAR_1, VAR_6.MaximumLength);

    FUNC_6(VAR_13);
    FUNC_2(VAR_13, 1, &VAR_3, &VAR_4, VAR_2, sizeof(ULONG), &VAR_9);
    FUNC_11(FUNC_5(VAR_13, 1, &VAR_3, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "First call");
    FUNC_14(VAR_11, sizeof(ULONG));
    FUNC_14(VAR_12, 1);
    FUNC_12(VAR_6.Buffer, VAR_14);

    FUNC_2(VAR_13, 1, &VAR_3, &VAR_4, VAR_2, sizeof(ULONG), &VAR_10);
    FUNC_11(FUNC_5(VAR_13, 1, &VAR_3, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Second call");
    FUNC_14(VAR_11, sizeof(ULONG));
    FUNC_14(VAR_12, 2);
    FUNC_12(VAR_6.Buffer, VAR_14);

    VAR_6.MaximumLength = 13 * sizeof(WCHAR);
    FUNC_11(FUNC_5(VAR_13, 1, &VAR_3, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Third call");
    FUNC_14(VAR_11, sizeof(ULONG));
    FUNC_14(VAR_12, 2);
    FUNC_9(VAR_6.Buffer != VAR_14, "Buffer didn't get reallocated!\n");
    FUNC_13(VAR_6.MaximumLength, 16 * sizeof(WCHAR));

    FUNC_3(VAR_13, 1);
    FUNC_10(FUNC_5(VAR_13, 1, &VAR_3, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Fourth call");

    FUNC_2(VAR_13, 1, &VAR_3, &VAR_4, VAR_2, sizeof(ULONG), &VAR_9);
    FUNC_11(FUNC_5(VAR_13, 1, &VAR_3, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Fifth call");
    FUNC_14(VAR_11, sizeof(ULONG));
    FUNC_14(VAR_12, 1);

    FUNC_2(VAR_13, 1, &VAR_7, &VAR_8, VAR_2, sizeof(ULONG), &VAR_9);
    FUNC_11(FUNC_5(VAR_13, 1, &VAR_3, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Sixth call");
    FUNC_14(VAR_11, sizeof(ULONG));
    FUNC_14(VAR_12, 1);
    FUNC_11(FUNC_5(VAR_13, 1, &VAR_7, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Seventh call");
    FUNC_14(VAR_11, sizeof(ULONG));
    FUNC_14(VAR_12, 1);

    FUNC_2(VAR_13, 1, &VAR_3, &VAR_4, VAR_2, sizeof(ULONG), &VAR_10);
    FUNC_11(FUNC_5(VAR_13, 1, &VAR_3, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Eighth call");
    FUNC_14(VAR_11, sizeof(ULONG));
    FUNC_14(VAR_12, 2);
    FUNC_11(FUNC_5(VAR_13, 1, &VAR_7, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Ninth call");
    FUNC_14(VAR_11, sizeof(ULONG));
    FUNC_14(VAR_12, 1);

    FUNC_2(VAR_13, 1, &VAR_7, &VAR_8, VAR_2, sizeof(ULONG), &VAR_10);
    FUNC_11(FUNC_5(VAR_13, 1, &VAR_3, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Tenth call");
    FUNC_14(VAR_11, sizeof(ULONG));
    FUNC_14(VAR_12, 2);
    FUNC_11(FUNC_5(VAR_13, 1, &VAR_7, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Eleventh call");
    FUNC_14(VAR_11, sizeof(ULONG));
    FUNC_14(VAR_12, 2);

    FUNC_3(VAR_13, 1);
    FUNC_10(FUNC_5(VAR_13, 1, &VAR_3, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Twelfth call");
    FUNC_10(FUNC_5(VAR_13, 1, &VAR_7, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Thirteenth call");

    FUNC_2(VAR_13, 1, &VAR_3, &VAR_4, VAR_2, sizeof(ULONG), &VAR_9);
    FUNC_11(FUNC_5(VAR_13, 1, &VAR_3, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Fourteenth call");
    FUNC_14(VAR_11, sizeof(ULONG));
    FUNC_14(VAR_12, 1);

    FUNC_2(VAR_13, 1, &VAR_3, &VAR_4, VAR_2, sizeof(ULONG), &VAR_10);
    FUNC_11(FUNC_5(VAR_13, 1, &VAR_3, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Fifteenth call");
    FUNC_14(VAR_11, sizeof(ULONG));
    FUNC_14(VAR_12, 2);

    FUNC_2(VAR_13, 1, &VAR_7, &VAR_8, VAR_2, sizeof(ULONG), &VAR_9);
    FUNC_11(FUNC_5(VAR_13, 1, &VAR_3, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Sixteenth call");
    FUNC_14(VAR_11, sizeof(ULONG));
    FUNC_14(VAR_12, 2);
    FUNC_11(FUNC_5(VAR_13, 1, &VAR_7, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Seventeenth call");
    FUNC_14(VAR_11, sizeof(ULONG));
    FUNC_14(VAR_12, 1);

    FUNC_2(VAR_13, 1, &VAR_7, &VAR_8, VAR_2, sizeof(ULONG), &VAR_10);
    FUNC_11(FUNC_5(VAR_13, 1, &VAR_3, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Eighteenth call");
    FUNC_14(VAR_11, sizeof(ULONG));
    FUNC_14(VAR_12, 2);
    FUNC_11(FUNC_5(VAR_13, 1, &VAR_7, &VAR_5, &VAR_6, &VAR_11, &VAR_12), "Nineteenth call");
    FUNC_14(VAR_11, sizeof(ULONG));
    FUNC_14(VAR_12, 2);

    FUNC_4(VAR_13);
    FUNC_1(VAR_5.Buffer);
    FUNC_1(VAR_6.Buffer);
    FUNC_1(VAR_14);
    FUNC_1(VAR_13);
}
