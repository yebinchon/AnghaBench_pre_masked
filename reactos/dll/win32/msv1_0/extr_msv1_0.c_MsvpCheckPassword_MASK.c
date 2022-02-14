
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int Length; int MaximumLength; int * Buffer; } ;
struct TYPE_9__ {int Buffer; } ;
struct TYPE_8__ {int Buffer; } ;
struct TYPE_10__ {scalar_t__ NtPasswordPresent; scalar_t__ LmPasswordPresent; TYPE_2__ LmOwfPassword; TYPE_1__ NtOwfPassword; } ;
struct TYPE_11__ {TYPE_3__ All; } ;
typedef int PUNICODE_STRING ;
typedef TYPE_4__* PSAMPR_USER_INFO_BUFFER ;
typedef TYPE_5__ OEM_STRING ;
typedef int NTSTATUS ;
typedef int LPSTR ;
typedef int LPBYTE ;
typedef int ENCRYPTED_NT_OWF_PASSWORD ;
typedef int ENCRYPTED_LM_OWF_PASSWORD ;
typedef int CHAR ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_5__*,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static
NTSTATUS
FUNC_7(PUNICODE_STRING VAR_4,
                  PSAMPR_USER_INFO_BUFFER VAR_5)
{
    ENCRYPTED_NT_OWF_PASSWORD VAR_6;
    ENCRYPTED_LM_OWF_PASSWORD VAR_7;
    BOOLEAN VAR_8 = VAR_0;
    BOOLEAN VAR_9 = VAR_0;
    OEM_STRING VAR_10;
    CHAR VAR_11[15];
    NTSTATUS VAR_12;

    FUNC_5("(%p %p)\n", VAR_4, VAR_5);


    VAR_10.Length = 15;
    VAR_10.MaximumLength = 15;
    VAR_10.Buffer = VAR_11;
    FUNC_6(VAR_10.Buffer, VAR_10.MaximumLength);

    VAR_12 = FUNC_2(&VAR_10,
                                               VAR_4,
                                               VAR_0);
    if (FUNC_0(VAR_12))
    {

        VAR_12 = FUNC_3(VAR_10.Buffer,
                                   (LPSTR)&VAR_7);
        if (FUNC_0(VAR_12))
        {
            VAR_8 = VAR_3;
        }
    }


    VAR_12 = FUNC_4(VAR_4,
                               (LPBYTE)&VAR_6);
    if (FUNC_0(VAR_12))
    {
        VAR_9 = VAR_3;
    }

    VAR_12 = VAR_2;


    if (VAR_5->All.NtPasswordPresent == VAR_0 &&
        VAR_5->All.LmPasswordPresent == VAR_0)
    {
        FUNC_5("No password check!\n");
        VAR_12 = VAR_1;
        goto done;
    }


    if (VAR_9 && VAR_5->All.NtPasswordPresent)
    {
        FUNC_5("Check NT password hashes:\n");
        if (FUNC_1(&VAR_6,
                           VAR_5->All.NtOwfPassword.Buffer,
                           sizeof(ENCRYPTED_NT_OWF_PASSWORD)))
        {
            FUNC_5("  success!\n");
            VAR_12 = VAR_1;
            goto done;
        }

        FUNC_5("  failed!\n");
    }


    if (VAR_8 && VAR_5->All.LmPasswordPresent)
    {
        FUNC_5("Check LM password hashes:\n");
        if (FUNC_1(&VAR_7,
                           VAR_5->All.LmOwfPassword.Buffer,
                           sizeof(ENCRYPTED_LM_OWF_PASSWORD)))
        {
            FUNC_5("  success!\n");
            VAR_12 = VAR_1;
            goto done;
        }
        FUNC_5("  failed!\n");
    }

done:
    return VAR_12;
}
