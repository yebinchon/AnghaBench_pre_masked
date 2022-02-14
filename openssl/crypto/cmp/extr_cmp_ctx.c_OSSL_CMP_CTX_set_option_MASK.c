
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log_verbosity; int implicitConfirm; int disableConfirm; int unprotectedSend; int unprotectedErrors; int days; int SubjectAltName_nodefault; int setSubjectAltNameCritical; int setPoliciesCritical; int ignore_keyusage; int popoMethod; int digest; int pbm_owf; int pbm_mac; int msgtimeout; int totaltimeout; int permitTAInExtraCertsForIR; int revocationReason; } ;
typedef TYPE_1__ OSSL_CMP_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_1(OSSL_CMP_CTX *VAR_7, int VAR_8, int VAR_9) {
    int VAR_10;

    if (VAR_7 == ((void*)0)) {
        FUNC_0(0, VAR_1);
        return 0;
    }

    switch (VAR_8) {
    case 134:
        VAR_10 = VAR_3;
        break;
    case 135:
        VAR_10 = VAR_6;
        break;
    default:
        VAR_10 = 0;
        break;
    }
    if (VAR_9 < VAR_10) {
        FUNC_0(0, VAR_0);
        return 0;
    }

    switch (VAR_8) {
    case 141:
        if (VAR_9 > VAR_4) {
            FUNC_0(0, VAR_0);
            return 0;
        }
        VAR_7->log_verbosity = VAR_9;
        break;
    case 142:
        VAR_7->implicitConfirm = VAR_9;
        break;
    case 144:
        VAR_7->disableConfirm = VAR_9;
        break;
    case 129:
        VAR_7->unprotectedSend = VAR_9;
        break;
    case 130:
        VAR_7->unprotectedErrors = VAR_9;
        break;
    case 128:
        VAR_7->days = VAR_9;
        break;
    case 132:
        VAR_7->SubjectAltName_nodefault = VAR_9;
        break;
    case 133:
        VAR_7->setSubjectAltNameCritical = VAR_9;
        break;
    case 136:
        VAR_7->setPoliciesCritical = VAR_9;
        break;
    case 143:
        VAR_7->ignore_keyusage = VAR_9;
        break;
    case 135:
        if (VAR_9 > VAR_5) {
            FUNC_0(0, VAR_0);
            return 0;
        }
        VAR_7->popoMethod = VAR_9;
        break;
    case 145:
        VAR_7->digest = VAR_9;
        break;
    case 138:
        VAR_7->pbm_owf = VAR_9;
        break;
    case 140:
        VAR_7->pbm_mac = VAR_9;
        break;
    case 139:
        VAR_7->msgtimeout = VAR_9;
        break;
    case 131:
        VAR_7->totaltimeout = VAR_9;
        break;
    case 137:
        VAR_7->permitTAInExtraCertsForIR = VAR_9;
        break;
    case 134:
        if (VAR_9 > VAR_2) {
            FUNC_0(0, VAR_0);
            return 0;
        }
        VAR_7->revocationReason = VAR_9;
        break;
    default:
        FUNC_0(0, VAR_0);
        return 0;
    }

    return 1;
}
