
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef int uint8_t ;
struct crypto_options {int dummy; } ;
struct context_buffers {int read_tun_buf; int encrypt_buf; int compress_buf; } ;
struct TYPE_20__ {scalar_t__ len; int * data; } ;
struct TYPE_18__ {scalar_t__ context_auth; TYPE_5__ buf; int to_link; int to_link_addr; TYPE_3__* tls_multi; struct crypto_options crypto_options; int frame; int frame_fragment; scalar_t__ fragment; TYPE_11__* comp_context; struct context_buffers* buffers; } ;
struct context {TYPE_2__ c2; } ;
struct TYPE_19__ {scalar_t__ use_peer_id; } ;
struct TYPE_17__ {int (* compress ) (TYPE_5__*,int ,TYPE_11__*,int *) ;} ;
struct TYPE_16__ {TYPE_1__ alg; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int const*,int *,TYPE_5__*,int *) ;
 int FUNC_4 (scalar_t__,TYPE_5__*,int *) ;
 int FUNC_5 (struct context*) ;
 int FUNC_6 (TYPE_5__*,int ,int *) ;
 int FUNC_7 (TYPE_5__*,int ,struct crypto_options*) ;
 int FUNC_8 (TYPE_5__*,int ,TYPE_11__*,int *) ;
 int FUNC_9 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_5__*,struct crypto_options**) ;
 int FUNC_11 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_12 (TYPE_3__*,int *) ;

void
FUNC_13(struct context *VAR_1, bool VAR_2)
{
    struct context_buffers *VAR_3 = VAR_1->c2.buffers;
    const uint8_t *VAR_4 = VAR_1->c2.buf.data;
    struct crypto_options *VAR_5 = ((void*)0);
    if (VAR_2)
    {
    }


    FUNC_0(FUNC_2(&VAR_3->encrypt_buf, FUNC_1(&VAR_1->c2.frame)));

    if (VAR_1->c2.tls_multi)
    {

        FUNC_10(VAR_1->c2.tls_multi, &VAR_1->c2.buf, &VAR_5);



        if (VAR_1->c2.buf.len > 0 && VAR_1->c2.tls_multi->use_peer_id)
        {
            FUNC_12(VAR_1->c2.tls_multi, &VAR_3->encrypt_buf);
        }
    }
    else
    {
        VAR_5 = &VAR_1->c2.crypto_options;
    }


    FUNC_7(&VAR_1->c2.buf, VAR_3->encrypt_buf, VAR_5);


    if (VAR_1->c2.tls_multi)
    {
        if (VAR_1->c2.buf.len > 0 && !VAR_1->c2.tls_multi->use_peer_id)
        {
            FUNC_11(VAR_1->c2.tls_multi, &VAR_1->c2.buf);
        }
        FUNC_9(VAR_1->c2.tls_multi, &VAR_1->c2.buf);
    }




    FUNC_6(&VAR_1->c2.buf, FUNC_5(VAR_1),
                                  &VAR_1->c2.to_link_addr);


    FUNC_3(VAR_4, &VAR_1->c2.to_link, &VAR_1->c2.buf, &VAR_3->read_tun_buf);
}
