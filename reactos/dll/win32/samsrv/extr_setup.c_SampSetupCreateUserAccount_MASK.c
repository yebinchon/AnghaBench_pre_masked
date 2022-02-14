
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
typedef char* ULONG ;
typedef int UCHAR ;
struct TYPE_14__ {int Attributes; void* RelativeId; } ;
struct TYPE_12__ {scalar_t__ QuadPart; } ;
struct TYPE_11__ {int QuadPart; } ;
struct TYPE_10__ {scalar_t__ QuadPart; } ;
struct TYPE_9__ {scalar_t__ QuadPart; } ;
struct TYPE_8__ {scalar_t__ QuadPart; } ;
struct TYPE_13__ {int Version; char* UserId; char* UserAccountControl; scalar_t__ OperatorCount; scalar_t__ AdminCount; scalar_t__ LogonCount; scalar_t__ BadPasswordCount; scalar_t__ CodePage; scalar_t__ CountryCode; void* PrimaryGroupId; TYPE_5__ LastBadPasswordTime; TYPE_4__ AccountExpires; TYPE_3__ PasswordLastSet; TYPE_2__ LastLogoff; TYPE_1__ LastLogon; scalar_t__ Reserved; } ;
typedef TYPE_6__ SAM_USER_FIXED_DATA ;
typedef int* PUSHORT ;
typedef int * PSID ;
typedef int * PSECURITY_DESCRIPTOR ;
typedef int NTSTATUS ;
typedef int LogonHours ;
typedef char* LPWSTR ;
typedef int * LPVOID ;
typedef char* LPCWSTR ;
typedef int * HANDLE ;
typedef TYPE_7__ GROUP_MEMBERSHIP ;
typedef int ENCRYPTED_NT_OWF_PASSWORD ;
typedef int ENCRYPTED_LM_OWF_PASSWORD ;


 int * FUNC_0 (int *,char*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *,int **,char**) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *,int *,int ,int **) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,char*,int ,int **) ;
 int FUNC_9 (int *,char*,int ,int *,...) ;
 int FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *,char*,char*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static
NTSTATUS
FUNC_13(HANDLE VAR_11,
                           LPCWSTR VAR_12,
                           LPCWSTR VAR_13,
                           PSID VAR_14,
                           ULONG VAR_15,
                           ULONG VAR_16)
{
    SAM_USER_FIXED_DATA VAR_17;
    GROUP_MEMBERSHIP VAR_18;
    UCHAR VAR_19[23];
    LPWSTR VAR_20 = L"";
    WCHAR VAR_21[32];
    HANDLE VAR_22 = ((void*)0);
    HANDLE VAR_23 = ((void*)0);
    PSECURITY_DESCRIPTOR VAR_24 = ((void*)0);
    ULONG VAR_25 = 0;
    PSID VAR_26 = ((void*)0);
    NTSTATUS VAR_27;

    VAR_26 = FUNC_0(VAR_14,
                             VAR_15);


    VAR_27 = FUNC_4(VAR_26,
                              &VAR_24,
                              &VAR_25);
    if (!FUNC_1(VAR_27))
        goto done;


    VAR_17.Version = 1;
    VAR_17.Reserved = 0;
    VAR_17.LastLogon.QuadPart = 0;
    VAR_17.LastLogoff.QuadPart = 0;
    VAR_17.PasswordLastSet.QuadPart = 0;
    VAR_17.AccountExpires.QuadPart = VAR_4;
    VAR_17.LastBadPasswordTime.QuadPart = 0;
    VAR_17.UserId = VAR_15;
    VAR_17.PrimaryGroupId = VAR_0;
    VAR_17.UserAccountControl = VAR_16;
    VAR_17.CountryCode = 0;
    VAR_17.CodePage = 0;
    VAR_17.BadPasswordCount = 0;
    VAR_17.LogonCount = 0;
    VAR_17.AdminCount = 0;
    VAR_17.OperatorCount = 0;

    FUNC_11(VAR_21, L"Users\\%08lX", VAR_15);

    VAR_27 = FUNC_6(VAR_11,
                              VAR_21,
                              VAR_3,
                              &VAR_22);
    if (!FUNC_1(VAR_27))
        return VAR_27;

    VAR_27 = FUNC_9(VAR_22,
                             L"F",
                             VAR_5,
                             (LPVOID)&VAR_17,
                             sizeof(SAM_USER_FIXED_DATA));
    if (!FUNC_1(VAR_27))
        goto done;

    VAR_27 = FUNC_9(VAR_22,
                             L"Name",
                             VAR_7,
                             (LPVOID)VAR_12,
                             (FUNC_12(VAR_12) + 1) * sizeof(WCHAR));
    if (!FUNC_1(VAR_27))
        goto done;

    VAR_27 = FUNC_9(VAR_22,
                             L"FullName",
                             VAR_7,
                             (LPVOID)VAR_20,
                             sizeof(WCHAR));
    if (!FUNC_1(VAR_27))
        goto done;

    VAR_27 = FUNC_9(VAR_22,
                             L"HomeDirectory",
                             VAR_7,
                             (LPVOID)VAR_20,
                             sizeof(WCHAR));
    if (!FUNC_1(VAR_27))
        goto done;

    VAR_27 = FUNC_9(VAR_22,
                             L"HomeDirectoryDrive",
                             VAR_7,
                             (LPVOID)VAR_20,
                             sizeof(WCHAR));
    if (!FUNC_1(VAR_27))
        goto done;

    VAR_27 = FUNC_9(VAR_22,
                             L"ScriptPath",
                             VAR_7,
                             (LPVOID)VAR_20,
                             sizeof(WCHAR));
    if (!FUNC_1(VAR_27))
        goto done;

    VAR_27 = FUNC_9(VAR_22,
                             L"ProfilePath",
                             VAR_7,
                             (LPVOID)VAR_20,
                             sizeof(WCHAR));
    if (!FUNC_1(VAR_27))
        goto done;

    VAR_27 = FUNC_9(VAR_22,
                             L"AdminComment",
                             VAR_7,
                             (LPVOID)VAR_13,
                             (FUNC_12(VAR_13) + 1) * sizeof(WCHAR));
    if (!FUNC_1(VAR_27))
        goto done;

    VAR_27 = FUNC_9(VAR_22,
                             L"UserComment",
                             VAR_7,
                             (LPVOID)VAR_20,
                             sizeof(WCHAR));
    if (!FUNC_1(VAR_27))
        goto done;

    VAR_27 = FUNC_9(VAR_22,
                             L"WorkStations",
                             VAR_7,
                             (LPVOID)VAR_20,
                             sizeof(WCHAR));
    if (!FUNC_1(VAR_27))
        goto done;

    VAR_27 = FUNC_9(VAR_22,
                             L"Parameters",
                             VAR_7,
                             (LPVOID)VAR_20,
                             sizeof(WCHAR));
    if (!FUNC_1(VAR_27))
        goto done;


    *((PUSHORT)VAR_19) = 168;
    FUNC_10(&(VAR_19[2]), 0xff, 21);

    VAR_27 = FUNC_9(VAR_22,
                             L"LogonHours",
                             VAR_5,
                             (LPVOID)VAR_19,
                             sizeof(VAR_19));
    if (!FUNC_1(VAR_27))
        goto done;


    VAR_18.RelativeId = VAR_0;
    VAR_18.Attributes = VAR_10 |
                                 VAR_8 |
                                 VAR_9;

    VAR_27 = FUNC_9(VAR_22,
                             L"Groups",
                             VAR_5,
                             (LPVOID)&VAR_18,
                             sizeof(GROUP_MEMBERSHIP));
    if (!FUNC_1(VAR_27))
        goto done;


    VAR_27 = FUNC_9(VAR_22,
                             L"LMPwd",
                             VAR_5,
                             (LPVOID)&VAR_1,
                             sizeof(ENCRYPTED_LM_OWF_PASSWORD));
    if (!FUNC_1(VAR_27))
        goto done;


    VAR_27 = FUNC_9(VAR_22,
                             L"NTPwd",
                             VAR_5,
                             (LPVOID)&VAR_2,
                             sizeof(ENCRYPTED_NT_OWF_PASSWORD));
    if (!FUNC_1(VAR_27))
        goto done;


    VAR_27 = FUNC_9(VAR_22,
                             L"LMPwdHistory",
                             VAR_5,
                             ((void*)0),
                             0);
    if (!FUNC_1(VAR_27))
        goto done;


    VAR_27 = FUNC_9(VAR_22,
                             L"NTPwdHistory",
                             VAR_5,
                             ((void*)0),
                             0);
    if (!FUNC_1(VAR_27))
        goto done;


    VAR_27 = FUNC_9(VAR_22,
                             L"PrivateData",
                             VAR_7,
                             (LPVOID)VAR_20,
                             sizeof(WCHAR));
    if (!FUNC_1(VAR_27))
        goto done;


    VAR_27 = FUNC_9(VAR_22,
                             L"SecDesc",
                             VAR_5,
                             VAR_24,
                             VAR_25);
    if (!FUNC_1(VAR_27))
        goto done;

    VAR_27 = FUNC_8(VAR_11,
                            L"Users\\Names",
                            VAR_3,
                            &VAR_23);
    if (!FUNC_1(VAR_27))
        goto done;

    VAR_27 = FUNC_9(VAR_23,
                            VAR_12,
                            VAR_6,
                            (LPVOID)&VAR_15,
                            sizeof(ULONG));

done:
    FUNC_5(&VAR_23);

    if (VAR_24 != ((void*)0))
        FUNC_2(FUNC_3(), 0, VAR_24);

    if (VAR_26 != ((void*)0))
        FUNC_2(FUNC_3(), 0, VAR_26);

    if (VAR_22 != ((void*)0))
    {
        FUNC_5(&VAR_22);

        if (!FUNC_1(VAR_27))
            FUNC_7(VAR_11,
                             VAR_21);
    }

    return VAR_27;
}
