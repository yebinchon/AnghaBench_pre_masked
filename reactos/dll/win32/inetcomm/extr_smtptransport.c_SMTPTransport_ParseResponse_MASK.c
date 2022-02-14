
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* pszResponse; int uiServerError; void* hrServerError; void* hrResult; scalar_t__ dwSocketError; } ;
struct TYPE_12__ {int fDone; TYPE_1__ rIxpResult; int * pTransport; } ;
struct TYPE_9__ {int vtbl; int vtblSMTP2; } ;
struct TYPE_10__ {TYPE_2__ u; scalar_t__ pCallback; scalar_t__ fCommandLogging; } ;
struct TYPE_11__ {TYPE_3__ InetTransport; } ;
typedef TYPE_4__ SMTPTransport ;
typedef TYPE_5__ SMTPRESPONSE ;
typedef int ISMTPTransport ;
typedef int IInternetTransport ;
typedef void* HRESULT ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,char*,void*,int *) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char*,char**,int) ;

__attribute__((used)) static HRESULT FUNC_5(SMTPTransport *VAR_28, char *VAR_29, SMTPRESPONSE *VAR_30)
{
    HRESULT VAR_31;

    FUNC_1("response: %s\n", FUNC_2(VAR_29));

    if (!FUNC_3(*VAR_29))
        return VAR_26;
    VAR_30->pTransport = (ISMTPTransport *)&VAR_28->InetTransport.u.vtblSMTP2;
    VAR_30->rIxpResult.pszResponse = VAR_29;
    VAR_30->rIxpResult.dwSocketError = 0;
    VAR_30->rIxpResult.uiServerError = FUNC_4(VAR_29, &VAR_29, 10);
    VAR_30->fDone = (*VAR_29 != '-');

    switch (VAR_30->rIxpResult.uiServerError)
    {
    case 211: VAR_31 = VAR_1; break;
    case 214: VAR_31 = VAR_2; break;
    case 220: VAR_31 = VAR_3; break;
    case 221: VAR_31 = VAR_4; break;
    case 245: VAR_31 = VAR_5; break;
    case 250: VAR_31 = VAR_6; break;
    case 251: VAR_31 = VAR_7; break;
    case 334: VAR_31 = VAR_8; break;
    case 354: VAR_31 = VAR_9; break;
    case 421: VAR_31 = VAR_10; break;
    case 450: VAR_31 = VAR_11; break;
    case 451: VAR_31 = VAR_12; break;
    case 452: VAR_31 = VAR_13; break;
    case 454: VAR_31 = VAR_14; break;
    case 500: VAR_31 = VAR_15; break;
    case 501: VAR_31 = VAR_16; break;
    case 502: VAR_31 = VAR_17; break;
    case 503: VAR_31 = VAR_18; break;
    case 504: VAR_31 = VAR_19; break;
    case 530: VAR_31 = VAR_20; break;
    case 550: VAR_31 = VAR_21; break;
    case 551: VAR_31 = VAR_22; break;
    case 552: VAR_31 = VAR_23; break;
    case 553: VAR_31 = VAR_24; break;
    case 554: VAR_31 = VAR_25; break;
    default:
        VAR_31 = VAR_26;
        break;
    }
    VAR_30->rIxpResult.hrResult = VAR_31;
    VAR_30->rIxpResult.hrServerError = VAR_31;

    if (VAR_28->InetTransport.pCallback && VAR_28->InetTransport.fCommandLogging)
    {
        FUNC_0(VAR_28->InetTransport.pCallback, VAR_0,
            VAR_30->rIxpResult.pszResponse, VAR_31,
            (IInternetTransport *)&VAR_28->InetTransport.u.vtbl);
    }
    return VAR_27;
}
