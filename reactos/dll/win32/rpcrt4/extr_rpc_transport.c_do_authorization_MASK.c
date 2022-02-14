
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct authinfo {int data_len; char* data; int scheme; int max_token; void* finished; int exp; int attr; int ctx; int cred; } ;
typedef int auth_value ;
typedef char WCHAR ;
typedef int ULONG ;
typedef int TimeStamp ;
struct TYPE_16__ {int* AuthnSchemes; TYPE_4__* TransportCredentials; } ;
struct TYPE_15__ {int PasswordLength; int Password; int UserLength; int User; } ;
struct TYPE_14__ {int cbBuffer; char* pvBuffer; void* BufferType; } ;
struct TYPE_13__ {int cBuffers; TYPE_3__* pBuffers; int ulVersion; } ;
struct TYPE_12__ {int cbMaxToken; } ;
typedef TYPE_1__ SecPkgInfoW ;
typedef TYPE_2__ SecBufferDesc ;
typedef TYPE_3__ SecBuffer ;
typedef TYPE_4__ SEC_WINNT_AUTH_IDENTITY_W ;
typedef char SEC_WCHAR ;
typedef int SECURITY_STATUS ;
typedef scalar_t__ RPC_STATUS ;
typedef TYPE_5__ RPC_HTTP_TRANSPORT_CREDENTIALS_W ;
typedef int HINTERNET ;
typedef int DWORD ;
typedef void* BOOL ;


 int FUNC_0 (int *,char*,int ,int *,TYPE_4__*,int *,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 void* VAR_1 ;
 int FUNC_2 (char*,int const) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 void* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *,int *,char*,int,int ,int ,TYPE_2__*,int ,int *,TYPE_2__*,int *,int *) ;
 int FUNC_8 (char*,TYPE_1__**) ;



 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (char*) ;
 void* VAR_14 ;
 int FUNC_10 (int ,int ,int ,int ,char*,int,int *,int *) ;
 struct authinfo* FUNC_11 () ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char const*,int,char*) ;
 int FUNC_14 (struct authinfo*) ;
 int FUNC_15 (int ,int const,char*,int) ;
 int FUNC_16 (char const*) ;

__attribute__((used)) static RPC_STATUS FUNC_17(HINTERNET VAR_15, SEC_WCHAR *VAR_16,
                                   const RPC_HTTP_TRANSPORT_CREDENTIALS_W *VAR_17, struct authinfo **VAR_18)
{
    struct authinfo *VAR_19 = *VAR_18;
    SEC_WINNT_AUTH_IDENTITY_W *VAR_20 = VAR_17->TransportCredentials;
    RPC_STATUS VAR_21 = VAR_8;

    if ((!VAR_19 && !(VAR_19 = FUNC_11()))) return VAR_8;

    switch (VAR_17->AuthnSchemes[0])
    {
    case 130:
    {
        int VAR_22 = FUNC_10(VAR_0, 0, VAR_20->User, VAR_20->UserLength, ((void*)0), 0, ((void*)0), ((void*)0));
        int VAR_23 = FUNC_10(VAR_0, 0, VAR_20->Password, VAR_20->PasswordLength, ((void*)0), 0, ((void*)0), ((void*)0));

        VAR_19->data_len = VAR_22 + VAR_23 + 1;
        if (!(VAR_19->data = FUNC_5(FUNC_4(), 0, VAR_19->data_len)))
        {
            VAR_21 = VAR_7;
            break;
        }
        FUNC_10(VAR_0, 0, VAR_20->User, VAR_20->UserLength, VAR_19->data, VAR_22, ((void*)0), ((void*)0));
        VAR_19->data[VAR_22] = ':';
        FUNC_10(VAR_0, 0, VAR_20->Password, VAR_20->PasswordLength, VAR_19->data + VAR_22 + 1, VAR_23, ((void*)0), ((void*)0));

        VAR_19->scheme = 130;
        VAR_19->finished = VAR_14;
        VAR_21 = VAR_6;
        break;
    }
    case 128:
    case 129:
    {

        static SEC_WCHAR VAR_24[] = {'N','T','L','M',0}, VAR_25[] = {'N','e','g','o','t','i','a','t','e',0};
        SECURITY_STATUS VAR_26;
        SecBufferDesc VAR_27, VAR_28;
        SecBuffer VAR_29, VAR_30;
        ULONG VAR_31 = VAR_2|VAR_5|VAR_4|VAR_3;
        SEC_WCHAR *VAR_32;
        int VAR_33;
        const WCHAR *VAR_34;
        WCHAR VAR_35[2048];
        DWORD VAR_36 = sizeof(VAR_35);
        BOOL VAR_37 = VAR_1;

        if (VAR_17->AuthnSchemes[0] == 128) VAR_32 = VAR_24;
        else VAR_32 = VAR_25;
        VAR_33 = FUNC_16( VAR_32 );

        if (!*VAR_18)
        {
            TimeStamp VAR_38;
            SecPkgInfoW *VAR_39;

            VAR_26 = FUNC_0(((void*)0), VAR_32, VAR_10, ((void*)0), VAR_20, ((void*)0), ((void*)0), &VAR_19->cred, &VAR_38);
            if (VAR_26 != VAR_12) break;

            VAR_26 = FUNC_8(VAR_32, &VAR_39);
            if (VAR_26 != VAR_12) break;

            VAR_19->max_token = VAR_39->cbMaxToken;
            FUNC_3(VAR_39);
            VAR_37 = VAR_14;
        }
        else
        {
            if (VAR_19->finished || !FUNC_15(VAR_15, VAR_17->AuthnSchemes[0], VAR_35, VAR_36)) break;
            if (FUNC_12(VAR_35) != VAR_19->scheme)
            {
                FUNC_1("authentication scheme changed\n");
                break;
            }
        }
        VAR_30.BufferType = VAR_9;
        VAR_30.cbBuffer = 0;
        VAR_30.pvBuffer = ((void*)0);

        VAR_28.ulVersion = 0;
        VAR_28.cBuffers = 1;
        VAR_28.pBuffers = &VAR_30;

        VAR_34 = VAR_35 + VAR_33;
        if (!VAR_37 && *VAR_34 == ' ')
        {
            int VAR_40 = FUNC_16(++VAR_34);
            VAR_30.cbBuffer = FUNC_13(VAR_34, VAR_40, ((void*)0));
            if (!(VAR_30.pvBuffer = FUNC_5(FUNC_4(), 0, VAR_30.cbBuffer))) break;
            FUNC_13(VAR_34, VAR_40, VAR_30.pvBuffer);
        }
        VAR_29.BufferType = VAR_9;
        VAR_29.cbBuffer = VAR_19->max_token;
        if (!(VAR_29.pvBuffer = FUNC_5(FUNC_4(), 0, VAR_29.cbBuffer)))
        {
            FUNC_6(FUNC_4(), 0, VAR_30.pvBuffer);
            break;
        }
        VAR_27.ulVersion = 0;
        VAR_27.cBuffers = 1;
        VAR_27.pBuffers = &VAR_29;

        VAR_26 = FUNC_7(VAR_37 ? &VAR_19->cred : ((void*)0), VAR_37 ? ((void*)0) : &VAR_19->ctx,
                                         VAR_37 ? VAR_16 : ((void*)0), VAR_31, 0, VAR_11,
                                         VAR_30.pvBuffer ? &VAR_28 : ((void*)0), 0, &VAR_19->ctx, &VAR_27,
                                         &VAR_19->attr, &VAR_19->exp);
        FUNC_6(FUNC_4(), 0, VAR_30.pvBuffer);
        if (VAR_26 == VAR_12)
        {
            FUNC_6(FUNC_4(), 0, VAR_19->data);
            VAR_19->data = VAR_29.pvBuffer;
            VAR_19->data_len = VAR_29.cbBuffer;
            VAR_19->finished = VAR_14;
            FUNC_9("sending last auth packet\n");
            VAR_21 = VAR_6;
        }
        else if (VAR_26 == VAR_13)
        {
            FUNC_6(FUNC_4(), 0, VAR_19->data);
            VAR_19->data = VAR_29.pvBuffer;
            VAR_19->data_len = VAR_29.cbBuffer;
            FUNC_9("sending next auth packet\n");
            VAR_21 = VAR_6;
        }
        else
        {
            FUNC_1("InitializeSecurityContextW failed with error 0x%08x\n", VAR_26);
            FUNC_6(FUNC_4(), 0, VAR_29.pvBuffer);
            break;
        }
        VAR_19->scheme = VAR_17->AuthnSchemes[0];
        break;
    }
    default:
        FUNC_2("scheme %u not supported\n", VAR_17->AuthnSchemes[0]);
        break;
    }

    if (VAR_21 != VAR_6)
    {
        FUNC_14(VAR_19);
        *VAR_18 = ((void*)0);
        return VAR_21;
    }
    *VAR_18 = VAR_19;
    return VAR_6;
}
