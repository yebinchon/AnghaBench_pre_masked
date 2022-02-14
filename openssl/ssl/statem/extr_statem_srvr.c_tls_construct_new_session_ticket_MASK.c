
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int nonce_label ;
typedef int age_add_u ;
typedef int WPACKET ;
struct TYPE_21__ {int alpn_selected_len; int * alpn_selected; } ;
struct TYPE_25__ {scalar_t__ sent_tickets; int next_ticket_nonce; scalar_t__ max_early_data; int options; TYPE_3__* session; TYPE_1__ s3; int resumption_master_secret; scalar_t__ hit; TYPE_4__* session_ctx; } ;
struct TYPE_24__ {scalar_t__ (* generate_ticket_cb ) (TYPE_5__*,int ) ;int ticket_cb_data; } ;
struct TYPE_22__ {scalar_t__ max_early_data; int alpn_selected_len; int * alpn_selected; scalar_t__ tick_age_add; } ;
struct TYPE_23__ {size_t master_key_length; long time; TYPE_2__ ext; int master_key; } ;
typedef TYPE_3__ SSL_SESSION ;
typedef TYPE_4__ SSL_CTX ;
typedef TYPE_5__ SSL ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (unsigned char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_5__*,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_7 (TYPE_5__*,int *,scalar_t__,unsigned char*) ;
 int FUNC_8 (TYPE_5__*,int *,scalar_t__,unsigned char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_5__*,TYPE_3__*) ;
 int * FUNC_11 (TYPE_5__*) ;
 TYPE_3__* FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_14 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (TYPE_5__*,int const*,int ,unsigned char const*,int,unsigned char*,int,int ,size_t,int) ;
 int FUNC_17 (TYPE_5__*,int *,int ,int *,int ) ;

int FUNC_18(SSL *VAR_9, WPACKET *VAR_10)
{
    SSL_CTX *VAR_11 = VAR_9->session_ctx;
    unsigned char VAR_12[VAR_8];
    union {
        unsigned char age_add_c[sizeof(uint32_t)];
        uint32_t age_add;
    } VAR_13;

    VAR_13.age_add = 0;

    if (FUNC_4(VAR_9)) {
        size_t VAR_14, VAR_15;
        uint64_t VAR_16;
        static const unsigned char VAR_17[] = "resumption";
        const EVP_MD *VAR_18 = FUNC_11(VAR_9);
        int VAR_19 = FUNC_0(VAR_18);


        if (!FUNC_9(VAR_19 >= 0)) {
            FUNC_6(VAR_9, VAR_2,
                     VAR_4,
                     VAR_0);
            goto err;
        }
        VAR_15 = (size_t)VAR_19;






        if (VAR_9->sent_tickets != 0 || VAR_9->hit) {
            SSL_SESSION *VAR_20 = FUNC_12(VAR_9->session, 0);

            if (VAR_20 == ((void*)0)) {

                goto err;
            }

            FUNC_5(VAR_9->session);
            VAR_9->session = VAR_20;
        }

        if (!FUNC_10(VAR_9, VAR_9->session)) {

            goto err;
        }
        if (FUNC_3(VAR_13.age_add_c, sizeof(VAR_13)) <= 0) {
            FUNC_6(VAR_9, VAR_2,
                     VAR_4,
                     VAR_0);
            goto err;
        }
        VAR_9->session->ext.tick_age_add = VAR_13.age_add;

        VAR_16 = VAR_9->next_ticket_nonce;
        for (VAR_14 = VAR_8; VAR_14 > 0; VAR_14--) {
            VAR_12[VAR_14 - 1] = (unsigned char)(VAR_16 & 0xff);
            VAR_16 >>= 8;
        }

        if (!FUNC_16(VAR_9, VAR_18, VAR_9->resumption_master_secret,
                               VAR_17,
                               sizeof(VAR_17) - 1,
                               VAR_12,
                               VAR_8,
                               VAR_9->session->master_key,
                               VAR_15, 1)) {

            goto err;
        }
        VAR_9->session->master_key_length = VAR_15;

        VAR_9->session->time = (long)FUNC_15(((void*)0));
        if (VAR_9->s3.alpn_selected != ((void*)0)) {
            FUNC_1(VAR_9->session->ext.alpn_selected);
            VAR_9->session->ext.alpn_selected =
                FUNC_2(VAR_9->s3.alpn_selected, VAR_9->s3.alpn_selected_len);
            if (VAR_9->session->ext.alpn_selected == ((void*)0)) {
                FUNC_6(VAR_9, VAR_2,
                         VAR_4,
                         VAR_1);
                goto err;
            }
            VAR_9->session->ext.alpn_selected_len = VAR_9->s3.alpn_selected_len;
        }
        VAR_9->session->ext.max_early_data = VAR_9->max_early_data;
    }

    if (VAR_11->generate_ticket_cb != ((void*)0) &&
        VAR_11->generate_ticket_cb(VAR_9, VAR_11->ticket_cb_data) == 0)
        goto err;






    if (FUNC_4(VAR_9)
            && ((VAR_9->options & VAR_6) != 0
                || (VAR_9->max_early_data > 0
                    && (VAR_9->options & VAR_5) == 0))) {
        if (!FUNC_7(VAR_9, VAR_10, VAR_13.age_add, VAR_12)) {

            goto err;
        }
    } else if (!FUNC_8(VAR_9, VAR_10, VAR_13.age_add,
                                           VAR_12)) {

        goto err;
    }

    if (FUNC_4(VAR_9)) {
        if (!FUNC_17(VAR_9, VAR_10,
                                      VAR_3,
                                      ((void*)0), 0)) {

            goto err;
        }





        VAR_9->sent_tickets++;
        VAR_9->next_ticket_nonce++;
        FUNC_13(VAR_9, VAR_7);
    }

    return 1;
 err:
    return 0;
}
