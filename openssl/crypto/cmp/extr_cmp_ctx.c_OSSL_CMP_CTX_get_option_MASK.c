
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
int FUNC_1(const OSSL_CMP_CTX *VAR_2, int VAR_3) {
    if (VAR_2 == ((void*)0)) {
        FUNC_0(0, VAR_1);
        return -1;
    }

    switch (VAR_3) {
    case 141:
        return VAR_2->log_verbosity;
    case 142:
        return VAR_2->implicitConfirm;
    case 144:
        return VAR_2->disableConfirm;
    case 129:
        return VAR_2->unprotectedSend;
    case 130:
        return VAR_2->unprotectedErrors;
    case 128:
        return VAR_2->days;
    case 132:
        return VAR_2->SubjectAltName_nodefault;
    case 133:
        return VAR_2->setSubjectAltNameCritical;
    case 136:
        return VAR_2->setPoliciesCritical;
    case 143:
        return VAR_2->ignore_keyusage;
    case 135:
        return VAR_2->popoMethod;
    case 145:
        return VAR_2->digest;
    case 138:
        return VAR_2->pbm_owf;
    case 140:
        return VAR_2->pbm_mac;
    case 139:
        return VAR_2->msgtimeout;
    case 131:
        return VAR_2->totaltimeout;
    case 137:
        return VAR_2->permitTAInExtraCertsForIR;
    case 134:
        return VAR_2->revocationReason;
    default:
        FUNC_0(0, VAR_0);
        return -1;
    }
}
