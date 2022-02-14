
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ log_id_len; scalar_t__ version; scalar_t__ sct_len; scalar_t__ ext_len; scalar_t__ sig_len; int sig; int ext; int timestamp; int log_id; int sct; } ;
typedef TYPE_1__ SCT ;
typedef int CTLOG_STORE ;
typedef int CTLOG ;
typedef int BIO ;


 int FUNC_0 (int *,int,int,int ,scalar_t__) ;
 int FUNC_1 (int *,char*,...) ;
 int * FUNC_2 (int const*,int ,scalar_t__) ;
 int FUNC_3 (int const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (TYPE_1__ const*,int *) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(const SCT *VAR_1, BIO *VAR_2, int VAR_3,
               const CTLOG_STORE *VAR_4)
{
    const CTLOG *VAR_5 = ((void*)0);

    if (VAR_4 != ((void*)0)) {
        VAR_5 = FUNC_2(VAR_4, VAR_1->log_id,
                                         VAR_1->log_id_len);
    }

    FUNC_1(VAR_2, "%*sSigned Certificate Timestamp:", VAR_3, "");
    FUNC_1(VAR_2, "\n%*sVersion   : ", VAR_3 + 4, "");

    if (VAR_1->version != VAR_0) {
        FUNC_1(VAR_2, "unknown\n%*s", VAR_3 + 16, "");
        FUNC_0(VAR_2, VAR_3 + 16, 16, VAR_1->sct, VAR_1->sct_len);
        return;
    }

    FUNC_1(VAR_2, "v1 (0x0)");

    if (VAR_5 != ((void*)0)) {
        FUNC_1(VAR_2, "\n%*sLog       : %s", VAR_3 + 4, "",
                   FUNC_3(VAR_5));
    }

    FUNC_1(VAR_2, "\n%*sLog ID    : ", VAR_3 + 4, "");
    FUNC_0(VAR_2, VAR_3 + 16, 16, VAR_1->log_id, VAR_1->log_id_len);

    FUNC_1(VAR_2, "\n%*sTimestamp : ", VAR_3 + 4, "");
    FUNC_5(VAR_1->timestamp, VAR_2);

    FUNC_1(VAR_2, "\n%*sExtensions: ", VAR_3 + 4, "");
    if (VAR_1->ext_len == 0)
        FUNC_1(VAR_2, "none");
    else
        FUNC_0(VAR_2, VAR_3 + 16, 16, VAR_1->ext, VAR_1->ext_len);

    FUNC_1(VAR_2, "\n%*sSignature : ", VAR_3 + 4, "");
    FUNC_4(VAR_1, VAR_2);
    FUNC_1(VAR_2, "\n%*s            ", VAR_3 + 4, "");
    FUNC_0(VAR_2, VAR_3 + 16, 16, VAR_1->sig, VAR_1->sig_len);
}
