
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int WPACKET ;
struct TYPE_18__ {int new_cipher; TYPE_2__* new_compression; } ;
struct TYPE_19__ {TYPE_4__ tmp; int server_random; } ;
struct TYPE_20__ {scalar_t__ hello_retry_request; int version; size_t tmp_session_id_len; unsigned char* tmp_session_id; int verify_mode; scalar_t__ hit; TYPE_12__* session; TYPE_5__ s3; TYPE_3__* method; TYPE_1__* ctx; } ;
struct TYPE_17__ {int (* put_cipher_by_char ) (int ,int *,size_t*) ;} ;
struct TYPE_16__ {int id; } ;
struct TYPE_15__ {int session_cache_mode; } ;
struct TYPE_14__ {size_t session_id_length; unsigned char* session_id; scalar_t__ not_resumable; } ;
typedef TYPE_6__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_12__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_6__*,int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,unsigned char*,size_t) ;
 int FUNC_7 (TYPE_6__*,int *,int ,int *,int ) ;
 int VAR_11 ;
 int FUNC_8 (TYPE_6__*,int ) ;
 int FUNC_9 (int ,int *,size_t*) ;
 int FUNC_10 (TYPE_6__*,int *,int ,int *,int ) ;

int FUNC_11(SSL *VAR_12, WPACKET *VAR_13)
{
    int VAR_14;
    size_t VAR_15, VAR_16;
    int VAR_17;
    unsigned char *VAR_18;
    int VAR_19 = FUNC_0(VAR_12) || VAR_12->hello_retry_request == VAR_7;

    VAR_17 = VAR_19 ? VAR_10 : VAR_12->version;
    if (!FUNC_4(VAR_13, VAR_17)




            || !FUNC_3(VAR_13,
                               VAR_12->hello_retry_request == VAR_7
                                   ? VAR_11 : VAR_12->s3.server_random,
                               VAR_1)) {
        FUNC_2(VAR_12, VAR_2, VAR_6,
                 VAR_0);
        return 0;
    }
    if (VAR_12->session->not_resumable ||
        (!(VAR_12->ctx->session_cache_mode & VAR_8)
         && !VAR_12->hit))
        VAR_12->session->session_id_length = 0;

    if (VAR_19) {
        VAR_15 = VAR_12->tmp_session_id_len;
        VAR_18 = VAR_12->tmp_session_id;
    } else {
        VAR_15 = VAR_12->session->session_id_length;
        VAR_18 = VAR_12->session->session_id;
    }

    if (VAR_15 > sizeof(VAR_12->session->session_id)) {
        FUNC_2(VAR_12, VAR_2, VAR_6,
                 VAR_0);
        return 0;
    }





    if (VAR_19 || VAR_12->s3.tmp.new_compression == ((void*)0))
        VAR_14 = 0;
    else
        VAR_14 = VAR_12->s3.tmp.new_compression->id;


    if (!FUNC_6(VAR_13, VAR_18, VAR_15)
            || !VAR_12->method->put_cipher_by_char(VAR_12->s3.tmp.new_cipher, VAR_13, &VAR_16)
            || !FUNC_5(VAR_13, VAR_14)) {
        FUNC_2(VAR_12, VAR_2, VAR_6,
                 VAR_0);
        return 0;
    }

    if (!FUNC_10(VAR_12, VAR_13,
                                  VAR_12->hello_retry_request == VAR_7
                                      ? VAR_4
                                      : (FUNC_0(VAR_12)
                                          ? VAR_5
                                          : VAR_3),
                                  ((void*)0), 0)) {

        return 0;
    }

    if (VAR_12->hello_retry_request == VAR_7) {

        FUNC_1(VAR_12->session);
        VAR_12->session = ((void*)0);
        VAR_12->hit = 0;





        if (!FUNC_7(VAR_12, ((void*)0), 0, ((void*)0), 0)) {

            return 0;
        }
    } else if (!(VAR_12->verify_mode & VAR_9)
                && !FUNC_8(VAR_12, 0)) {
                                       ;
        return 0;
    }

    return 1;
}
