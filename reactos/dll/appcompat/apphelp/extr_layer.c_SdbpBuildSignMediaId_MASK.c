
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int dwFileAttributes; int nFileSizeLow; } ;
typedef TYPE_2__ WIN32_FIND_DATAW ;
typedef int WCHAR ;
typedef int USHORT ;
struct TYPE_11__ {int Length; scalar_t__ Buffer; int MaximumLength; } ;
struct TYPE_13__ {TYPE_1__ Str; } ;
typedef TYPE_3__ SDB_TMP_STR ;
typedef char* PWCHAR ;
typedef TYPE_3__* PSDB_TMP_STR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,scalar_t__,int) ;
 int FUNC_8 (scalar_t__,int ,int ,int,scalar_t__) ;
 int VAR_4 ;
 char* FUNC_9 (scalar_t__,char) ;

BOOL FUNC_10(PSDB_TMP_STR VAR_5)
{
    SDB_TMP_STR VAR_6;
    PWCHAR VAR_7;

    FUNC_4(&VAR_6);
    FUNC_5(&VAR_6, VAR_5->Str.Length / sizeof(WCHAR) + 30);
    FUNC_7(VAR_6.Str.Buffer, VAR_6.Str.MaximumLength, VAR_5->Str.Buffer, VAR_5->Str.Length);
    VAR_7 = FUNC_9(VAR_5->Str.Buffer, '\\');
    if (VAR_7)
    {
        HANDLE VAR_8;
        WIN32_FIND_DATAW VAR_9;
        VAR_7[1] = '*';
        VAR_7[2] = '\0';
        VAR_8 = FUNC_1(VAR_5->Str.Buffer, &VAR_9);
        if (VAR_8 != VAR_2)
        {
            DWORD VAR_10 = 0;
            do
            {
                if (!(VAR_9.dwFileAttributes & VAR_1) && VAR_9.nFileSizeLow)
                    VAR_10 = VAR_10 << 1 ^ VAR_9.nFileSizeLow;
            } while (FUNC_2(VAR_8, &VAR_9));

            FUNC_0(VAR_8);
            FUNC_5(VAR_5, (VAR_5->Str.Length >> 1) + 20);
            FUNC_8(VAR_5->Str.Buffer, VAR_5->Str.MaximumLength, VAR_3, VAR_10, VAR_6.Str.Buffer + 3);
            VAR_5->Str.Length = (USHORT)FUNC_6(VAR_5->Str.Buffer) * sizeof(WCHAR);
            FUNC_3(&VAR_6);
            return VAR_4;
        }
    }
    FUNC_3(&VAR_6);
    FUNC_3(VAR_5);
    return VAR_0;
}
