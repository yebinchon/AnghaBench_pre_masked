
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int X509 ;
typedef int WPACKET ;
struct TYPE_11__ {scalar_t__ ticklen; int tick_lifetime_hint; int tick; scalar_t__ tick_age_add; } ;
struct TYPE_14__ {scalar_t__ ssl_version; TYPE_2__ ext; TYPE_1__* cipher; scalar_t__ time; } ;
struct TYPE_12__ {scalar_t__ tick_identity; } ;
struct TYPE_13__ {scalar_t__ hello_retry_request; scalar_t__ psksession_id_len; TYPE_6__* psksession; TYPE_6__* session; TYPE_3__ ext; int psksession_id; } ;
struct TYPE_10__ {int algorithm2; } ;
typedef TYPE_4__ SSL ;
typedef int EXT_RETURN ;
typedef int EVP_MD ;


 int VAR_0 ;
 size_t FUNC_0 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_4__*,int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,size_t*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,size_t,unsigned char**) ;
 int FUNC_10 (int *,int ,scalar_t__) ;
 int * FUNC_11 (TYPE_4__*) ;
 int * FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (TYPE_4__*,int const*,unsigned char*,size_t,int *,unsigned char*,TYPE_6__*,int,int) ;

EXT_RETURN FUNC_15(SSL *VAR_10, WPACKET *VAR_11, unsigned int VAR_12,
                                  X509 *VAR_13, size_t VAR_14)
{

    uint32_t VAR_15, VAR_16, VAR_17 = 0;
    size_t VAR_18 = 0, VAR_19 = 0, VAR_20, VAR_21;
    unsigned char *VAR_22 = ((void*)0), *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);
    const EVP_MD *VAR_25 = ((void*)0), *VAR_26 = ((void*)0), *VAR_27 = ((void*)0);
    int VAR_28 = 0;

    VAR_10->ext.tick_identity = 0;
    if (VAR_10->session->ssl_version != VAR_8
            || (VAR_10->session->ext.ticklen == 0 && VAR_10->psksession == ((void*)0)))
        return VAR_2;

    if (VAR_10->hello_retry_request == VAR_6)
        VAR_25 = FUNC_11(VAR_10);

    if (VAR_10->session->ext.ticklen != 0) {

        if (VAR_10->session->cipher == ((void*)0)) {
            FUNC_1(VAR_10, VAR_4, VAR_5,
                     VAR_0);
            return VAR_1;
        }
        VAR_26 = FUNC_12(VAR_10->session->cipher->algorithm2);
        if (VAR_26 == ((void*)0)) {




            goto dopsksess;
        }

        if (VAR_10->hello_retry_request == VAR_6 && VAR_26 != VAR_25) {




            goto dopsksess;
        }
        VAR_15 = (uint32_t)FUNC_13(((void*)0));
        VAR_16 = VAR_15 - (uint32_t)VAR_10->session->time;
        if (VAR_16 > 0)
            VAR_16--;

        if (VAR_10->session->ext.tick_lifetime_hint < VAR_16) {

            goto dopsksess;
        }





        VAR_17 = VAR_16 * (uint32_t)1000;

        if (VAR_16 != 0 && VAR_17 / (uint32_t)1000 != VAR_16) {




            goto dopsksess;
        }





        VAR_17 += VAR_10->session->ext.tick_age_add;

        VAR_18 = FUNC_0(VAR_26);
        VAR_10->ext.tick_identity++;
        VAR_28 = 1;
    }

 dopsksess:
    if (!VAR_28 && VAR_10->psksession == ((void*)0))
        return VAR_2;

    if (VAR_10->psksession != ((void*)0)) {
        VAR_27 = FUNC_12(VAR_10->psksession->cipher->algorithm2);
        if (VAR_27 == ((void*)0)) {




            FUNC_1(VAR_10, VAR_4, VAR_5,
                     VAR_7);
            return VAR_1;
        }

        if (VAR_10->hello_retry_request == VAR_6 && VAR_27 != VAR_25) {




            FUNC_1(VAR_10, VAR_4, VAR_5,
                     VAR_7);
            return VAR_1;
        }

        VAR_19 = FUNC_0(VAR_27);
    }


    if (!FUNC_6(VAR_11, VAR_9)
            || !FUNC_8(VAR_11)
            || !FUNC_8(VAR_11)) {
        FUNC_1(VAR_10, VAR_4, VAR_5,
                 VAR_0);
        return VAR_1;
    }

    if (VAR_28) {
        if (!FUNC_10(VAR_11, VAR_10->session->ext.tick,
                                           VAR_10->session->ext.ticklen)
                || !FUNC_7(VAR_11, VAR_17)) {
            FUNC_1(VAR_10, VAR_4, VAR_5,
                     VAR_0);
            return VAR_1;
        }
    }

    if (VAR_10->psksession != ((void*)0)) {
        if (!FUNC_10(VAR_11, VAR_10->psksession_id,
                                    VAR_10->psksession_id_len)
                || !FUNC_7(VAR_11, 0)) {
            FUNC_1(VAR_10, VAR_4, VAR_5,
                     VAR_0);
            return VAR_1;
        }
        VAR_10->ext.tick_identity++;
    }

    if (!FUNC_2(VAR_11)
            || !FUNC_5(VAR_11, &VAR_20)
            || !FUNC_8(VAR_11)
            || (VAR_28
                && !FUNC_9(VAR_11, VAR_18, &VAR_22))
            || (VAR_10->psksession != ((void*)0)
                && !FUNC_9(VAR_11, VAR_19, &VAR_23))
            || !FUNC_2(VAR_11)
            || !FUNC_2(VAR_11)
            || !FUNC_5(VAR_11, &VAR_21)




            || !FUNC_3(VAR_11)) {
        FUNC_1(VAR_10, VAR_4, VAR_5,
                 VAR_0);
        return VAR_1;
    }

    VAR_24 = FUNC_4(VAR_11) - VAR_21;

    if (VAR_28
            && FUNC_14(VAR_10, VAR_26, VAR_24, VAR_20, ((void*)0),
                                 VAR_22, VAR_10->session, 1, 0) != 1) {

        return VAR_1;
    }

    if (VAR_10->psksession != ((void*)0)
            && FUNC_14(VAR_10, VAR_27, VAR_24, VAR_20, ((void*)0),
                                 VAR_23, VAR_10->psksession, 1, 1) != 1) {

        return VAR_1;
    }

    return VAR_3;



}
