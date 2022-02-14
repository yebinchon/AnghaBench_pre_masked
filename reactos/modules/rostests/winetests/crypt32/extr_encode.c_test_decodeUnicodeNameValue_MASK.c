
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {int cbData; int pbData; } ;
struct TYPE_9__ {scalar_t__ valueType; int str; TYPE_1__ encoded; } ;
struct TYPE_7__ {int cbData; scalar_t__ pbData; } ;
struct TYPE_8__ {scalar_t__ dwValueType; TYPE_2__ Value; } ;
typedef TYPE_3__* PCERT_NAME_VALUE ;
typedef int LPWSTR ;
typedef size_t DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 size_t FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,size_t,...) ;
 scalar_t__ FUNC_5 (size_t,int ,int ,int ,int ,int *,int **,size_t*) ;
 int FUNC_6 (int ,int ,int) ;
 TYPE_4__* VAR_3 ;

__attribute__((used)) static void FUNC_7(DWORD VAR_4)
{
    DWORD VAR_5;

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++)
    {
        BYTE *VAR_6 = ((void*)0);
        BOOL VAR_7;
        DWORD VAR_8 = 0;

        VAR_7 = FUNC_5(VAR_4, VAR_2,
         VAR_3[VAR_5].encoded.pbData, VAR_3[VAR_5].encoded.cbData,
         VAR_0, ((void*)0), &VAR_6, &VAR_8);
        FUNC_4(VAR_7 || FUNC_3(FUNC_1() == VAR_1 ),
         "CryptDecodeObjectEx failed: %08x\n", FUNC_1());
        if (VAR_7 && VAR_6)
        {
            PCERT_NAME_VALUE VAR_9 = (PCERT_NAME_VALUE)VAR_6;

            FUNC_4(VAR_9->dwValueType == VAR_3[VAR_5].valueType,
             "Expected value type %d, got %d\n", VAR_3[VAR_5].valueType,
             VAR_9->dwValueType);
            FUNC_4(!FUNC_6((LPWSTR)VAR_9->Value.pbData, VAR_3[VAR_5].str,
             VAR_9->Value.cbData / sizeof(WCHAR)),
             "Unexpected decoded value for index %d (value type %d)\n", VAR_5,
             VAR_3[VAR_5].valueType);
            FUNC_2(VAR_6);
        }
    }
}
