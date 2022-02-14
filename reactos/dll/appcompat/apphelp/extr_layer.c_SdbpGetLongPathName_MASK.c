
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int MaximumLength; int Length; int Buffer; } ;
struct TYPE_6__ {TYPE_1__ Str; } ;
typedef TYPE_2__* PSDB_TMP_STR ;
typedef int PCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int VAR_1 ;

BOOL FUNC_4(PCWSTR VAR_2, PSDB_TMP_STR VAR_3)
{
    DWORD VAR_4 = VAR_3->Str.MaximumLength / 2;
    DWORD VAR_5 = FUNC_1(VAR_2, VAR_3->Str.Buffer, VAR_4);
    if (VAR_5)
    {
        if (VAR_5 >= VAR_4)
        {
            FUNC_3(VAR_3, VAR_5);
            VAR_4 = VAR_3->Str.MaximumLength / 2;
            VAR_5 = FUNC_1(VAR_2, VAR_3->Str.Buffer, VAR_4);
        }
        if (VAR_5 && VAR_5 < VAR_4)
        {
            VAR_3->Str.Length = VAR_5 * 2;
            return VAR_1;
        }
    }
    FUNC_2("Failed to convert short path to long path error 0x%lx\n", FUNC_0());
    return VAR_0;
}
