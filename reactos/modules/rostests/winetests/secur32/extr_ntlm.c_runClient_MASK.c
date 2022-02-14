
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
typedef int TimeStamp ;
struct TYPE_10__ {int cBuffers; TYPE_1__* pBuffers; } ;
struct TYPE_9__ {scalar_t__ max_token; int ctxt; int cred; TYPE_3__* out_buf; TYPE_3__* in_buf; } ;
struct TYPE_8__ {scalar_t__ cbBuffer; scalar_t__ BufferType; int * pvBuffer; } ;
typedef TYPE_2__ SspiData ;
typedef scalar_t__ SECURITY_STATUS ;
typedef TYPE_3__* PSecBufferDesc ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,int *,int *,int ,int ,int ,TYPE_3__*,int ,int *,TYPE_3__*,int *,int *) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static SECURITY_STATUS FUNC_6(SspiData *VAR_8, BOOL VAR_9, ULONG VAR_10)
{
    SECURITY_STATUS VAR_11;
    ULONG VAR_12 = 0;
    ULONG VAR_13;
    TimeStamp VAR_14;
    PSecBufferDesc VAR_15 = VAR_8->in_buf;
    PSecBufferDesc VAR_16 = VAR_8->out_buf;

    FUNC_0(VAR_15->cBuffers >= 1);
    FUNC_0(VAR_15->pBuffers[0].pvBuffer != ((void*)0));
    FUNC_0(VAR_15->pBuffers[0].cbBuffer != 0);

    FUNC_0(VAR_16->cBuffers >= 1);
    FUNC_0(VAR_16->pBuffers[0].pvBuffer != ((void*)0));
    FUNC_0(VAR_16->pBuffers[0].cbBuffer != 0);

    FUNC_5("Running the client the %s time.\n", VAR_9?"first":"second");
    if (VAR_9)
    {
        void *VAR_17;


        VAR_11 = FUNC_4(&VAR_8->cred, ((void*)0), ((void*)0), VAR_12,
            0, VAR_10, ((void*)0), 0, &VAR_8->ctxt, ((void*)0),
            &VAR_13, &VAR_14);

        FUNC_2(VAR_11 == VAR_2, "expected SEC_E_BUFFER_TOO_SMALL, got %s\n", FUNC_1(VAR_11));


        VAR_17 = VAR_16->pBuffers[0].pvBuffer;
        VAR_16->pBuffers[0].pvBuffer = ((void*)0);

        VAR_11 = FUNC_4(&VAR_8->cred, ((void*)0), ((void*)0), VAR_12,
            0, VAR_10, ((void*)0), 0, &VAR_8->ctxt, VAR_16,
            &VAR_13, &VAR_14);

        FUNC_2(VAR_11 == VAR_3 || VAR_11 == VAR_7,
           "expected SEC_E_INTERNAL_ERROR or SEC_I_CONTINUE_NEEDED, got %s\n", FUNC_1(VAR_11));

        VAR_16->pBuffers[0].pvBuffer = VAR_17;


        VAR_16->pBuffers[0].cbBuffer = 0;

        VAR_11 = FUNC_4(&VAR_8->cred, ((void*)0), ((void*)0), VAR_12,
            0, VAR_10, ((void*)0), 0, &VAR_8->ctxt, VAR_16,
            &VAR_13, &VAR_14);

        FUNC_2(VAR_11 == VAR_2, "expected SEC_E_BUFFER_TOO_SMALL, got %s\n", FUNC_1(VAR_11));

        FUNC_2(VAR_16->pBuffers[0].cbBuffer == 0,
           "InitializeSecurityContext set buffer size to %u\n", VAR_16->pBuffers[0].cbBuffer);

        VAR_16->pBuffers[0].cbBuffer = VAR_8->max_token;
        VAR_16->pBuffers[0].BufferType = VAR_0;

        VAR_11 = FUNC_4(&VAR_8->cred, ((void*)0), ((void*)0), VAR_12,
            0, VAR_10, ((void*)0), 0, &VAR_8->ctxt, VAR_16,
            &VAR_13, &VAR_14);

        FUNC_2(VAR_11 == VAR_2, "expected SEC_E_BUFFER_TOO_SMALL, got %s\n", FUNC_1(VAR_11));
        VAR_16->pBuffers[0].BufferType = VAR_1;
    }

    VAR_16->pBuffers[0].cbBuffer = VAR_8->max_token;

    VAR_11 = FUNC_4(VAR_9?&VAR_8->cred:((void*)0), VAR_9?((void*)0):&VAR_8->ctxt, ((void*)0), VAR_12,
            0, VAR_10, VAR_9?((void*)0):VAR_15, 0, &VAR_8->ctxt, VAR_16,
            &VAR_13, &VAR_14);

    if(VAR_11 == VAR_5 || VAR_11 == VAR_6)
    {
        FUNC_3(&VAR_8->ctxt, VAR_16);
        if(VAR_11 == VAR_5)
            VAR_11 = VAR_7;
        else if(VAR_11 == VAR_6)
            VAR_11 = VAR_4;
    }

    FUNC_2(VAR_16->pBuffers[0].BufferType == VAR_1,
       "buffer type was changed from SECBUFFER_TOKEN to %d\n", VAR_16->pBuffers[0].BufferType);
    FUNC_2(VAR_16->pBuffers[0].cbBuffer < VAR_8->max_token,
       "InitializeSecurityContext set buffer size to %u\n", VAR_16->pBuffers[0].cbBuffer);

    return VAR_11;
}
