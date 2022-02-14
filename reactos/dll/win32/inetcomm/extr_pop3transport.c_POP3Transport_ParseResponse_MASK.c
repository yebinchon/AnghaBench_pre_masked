
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {char* pszResponse; int hrServerError; int * pszProblem; int dwSocketError; int hrResult; scalar_t__ uiServerError; } ;
struct TYPE_16__ {int rTopInfo; int rRetrInfo; int dwPopId; int rListInfo; int rStatInfo; int rUidlInfo; } ;
struct TYPE_21__ {int command; int fDone; TYPE_2__ rIxpResult; int * pTransport; int fValidInfo; TYPE_1__ u; } ;
struct TYPE_18__ {int vtbl; int vtblPOP3; } ;
struct TYPE_19__ {TYPE_3__ u; scalar_t__ pCallback; scalar_t__ fCommandLogging; } ;
struct TYPE_20__ {char* response; scalar_t__ state; int command; TYPE_4__ InetTransport; int valid_info; } ;
typedef TYPE_5__ POP3Transport ;
typedef TYPE_6__ POP3RESPONSE ;
typedef int IPOP3Transport ;
typedef int IInternetTransport ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,char*,int ,int *) ;






 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (TYPE_5__*,int *) ;
 int FUNC_6 (TYPE_5__*,int *) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (TYPE_5__*,int *) ;
 int FUNC_10 (TYPE_5__*,int *) ;
 int FUNC_11 (TYPE_5__*,int *) ;

__attribute__((used)) static HRESULT FUNC_12(POP3Transport *VAR_4, char *VAR_5, POP3RESPONSE *VAR_6)
{
    HRESULT VAR_7;

    FUNC_2("response: %s\n", FUNC_4(VAR_5));

    VAR_4->response = VAR_5;
    VAR_4->valid_info = VAR_1;
    FUNC_2("state %u\n", VAR_4->state);

    if (FUNC_1((VAR_7 = FUNC_7(VAR_4))))
    {
        switch (VAR_4->command)
        {
        case 128: VAR_7 = FUNC_11(VAR_4, &VAR_6->u.rUidlInfo); break;
        case 130: VAR_7 = FUNC_9(VAR_4, &VAR_6->u.rStatInfo); break;
        case 132: VAR_7 = FUNC_6(VAR_4, &VAR_6->u.rListInfo); break;
        case 133: VAR_7 = FUNC_5(VAR_4, &VAR_6->u.dwPopId); break;
        case 131: VAR_7 = FUNC_8(VAR_4, &VAR_6->u.rRetrInfo); break;
        case 129: VAR_7 = FUNC_10(VAR_4, &VAR_6->u.rTopInfo); break;
        default:
            VAR_4->state = VAR_2;
            break;
        }
    }
    VAR_6->command = VAR_4->command;
    VAR_6->fDone = (VAR_4->state == VAR_2);
    VAR_6->fValidInfo = VAR_4->valid_info;
    VAR_6->rIxpResult.hrResult = VAR_7;
    VAR_6->rIxpResult.pszResponse = VAR_5;
    VAR_6->rIxpResult.uiServerError = 0;
    VAR_6->rIxpResult.hrServerError = VAR_6->rIxpResult.hrResult;
    VAR_6->rIxpResult.dwSocketError = FUNC_3();
    VAR_6->rIxpResult.pszProblem = ((void*)0);
    VAR_6->pTransport = (IPOP3Transport *)&VAR_4->InetTransport.u.vtblPOP3;

    if (VAR_4->InetTransport.pCallback && VAR_4->InetTransport.fCommandLogging)
    {
        FUNC_0(VAR_4->InetTransport.pCallback, VAR_0,
            VAR_6->rIxpResult.pszResponse, VAR_6->rIxpResult.hrServerError,
            (IInternetTransport *)&VAR_4->InetTransport.u.vtbl);
    }
    return VAR_3;
}
