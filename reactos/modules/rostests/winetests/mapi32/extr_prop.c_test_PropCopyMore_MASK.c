
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef char WCHAR ;
typedef size_t ULONG ;
struct TYPE_12__ {int cb; int lpb; } ;
struct TYPE_13__ {char* lpszA; char* lpszW; TYPE_1__ bin; } ;
struct TYPE_14__ {int ulPropTag; TYPE_2__ Value; } ;
typedef TYPE_3__ SPropValue ;
typedef scalar_t__ SCODE ;
typedef int LPBYTE ;
typedef int ALLOCATEMORE ;


 size_t FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;



 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_3__*,int,int) ;
 int FUNC_6 (int,char*,...) ;
 scalar_t__ FUNC_7 (int,TYPE_3__**) ;
 scalar_t__ FUNC_8 (int,TYPE_3__*,TYPE_3__**) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_3__*,TYPE_3__*,int *,TYPE_3__*) ;
 int* VAR_1 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    static char VAR_2[] = "Hi!";
    static WCHAR VAR_3[] = { 'H', 'i', '!', '\0' };
    SPropValue *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    ULONG VAR_6;
    SCODE VAR_7;

    if (!&FUNC_10)
    {
        FUNC_13("PropCopyMore is not available\n");
        return;
    }

    VAR_7 = FUNC_7(sizeof(SPropValue), &VAR_4);
    FUNC_6(VAR_7 == VAR_0, "Expected MAPIAllocateBuffer to return S_OK, got 0x%x\n", VAR_7);
    if (FUNC_1(VAR_7))
    {
        FUNC_11("MAPIAllocateBuffer failed\n");
        return;
    }

    VAR_7 = FUNC_8(sizeof(SPropValue), VAR_4, &VAR_5);
    FUNC_6(VAR_7 == VAR_0, "Expected MAPIAllocateMore to return S_OK, got 0x%x\n", VAR_7);
    if (FUNC_1(VAR_7))
    {
        FUNC_11("MAPIAllocateMore failed\n");
        return;
    }

    for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++)
    {
        VAR_5->ulPropTag = VAR_1[VAR_6];

        switch (VAR_1[VAR_6])
        {
        case 129:
            VAR_5->Value.lpszA = VAR_2;
            break;
        case 128:
            VAR_5->Value.lpszW = VAR_3;
            break;
        case 130:
            VAR_5->Value.bin.cb = 4;
            VAR_5->Value.bin.lpb = (LPBYTE)VAR_2;
            break;
        }

        FUNC_5(VAR_4, 0xff, sizeof(SPropValue));

        VAR_7 = FUNC_10(VAR_4, VAR_5, (ALLOCATEMORE*)FUNC_8, VAR_4);
        FUNC_6(!VAR_7 && VAR_4->ulPropTag == VAR_5->ulPropTag,
           "PropCopyMore: Expected 0x0,%d, got 0x%08x,%d\n",
           VAR_5->ulPropTag, VAR_7, VAR_4->ulPropTag);
        if (FUNC_2(VAR_7))
        {
            switch (VAR_1[VAR_6])
            {
            case 129:
                FUNC_6(FUNC_3(VAR_4->Value.lpszA, VAR_5->Value.lpszA) == 0,
                   "PropCopyMore: Ascii string differs\n");
                break;
            case 128:
                FUNC_6(FUNC_12(VAR_4->Value.lpszW, VAR_5->Value.lpszW) == 0,
                   "PropCopyMore: Unicode string differs\n");
                break;
            case 130:
                FUNC_6(VAR_4->Value.bin.cb == 4 &&
                   !FUNC_4(VAR_5->Value.bin.lpb, VAR_4->Value.bin.lpb, 4),
                   "PropCopyMore: Binary array  differs\n");
                break;
            }
        }
    }


    VAR_7 = FUNC_9(VAR_4);
    FUNC_6(VAR_7 == VAR_0, "Expected MAPIFreeBuffer to return S_OK, got 0x%x\n", VAR_7);
}
