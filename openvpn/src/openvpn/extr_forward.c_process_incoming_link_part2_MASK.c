
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;


typedef int uint8_t ;
struct link_socket_info {int dummy; } ;
struct TYPE_17__ {scalar_t__ len; } ;
struct TYPE_23__ {scalar_t__ len; } ;
struct TYPE_22__ {TYPE_12__ to_tun; TYPE_3__* buffers; TYPE_6__ buf; int max_recv_size_local; int original_recv_size; int link_read_bytes_auth; int ping_rec_interval; int es; int from; int n_trunc_post_decrypt; int frame; TYPE_7__* comp_context; int frame_fragment; scalar_t__ fragment; } ;
struct TYPE_21__ {int tuntap; } ;
struct TYPE_19__ {scalar_t__ ping_rec_timeout; } ;
struct context {TYPE_5__ c2; TYPE_4__ c1; TYPE_2__ options; } ;
struct TYPE_18__ {int (* decompress ) (TYPE_6__*,int ,TYPE_7__*,int *) ;} ;
struct TYPE_24__ {TYPE_1__ alg; } ;
struct TYPE_20__ {int read_link_buf; int decompress_buf; } ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_0 ;
 int FUNC_2 (struct context*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_12__*) ;
 int FUNC_5 (int const*,TYPE_12__*,TYPE_6__*,int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,TYPE_6__*,int *) ;
 int FUNC_9 (int ,int ,int ,char*,int *) ;
 scalar_t__ FUNC_10 (TYPE_6__*) ;
 scalar_t__ FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*,struct link_socket_info*,int *,int *,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct context*) ;
 int FUNC_15 (TYPE_6__*,int ,TYPE_7__*,int *) ;
 int FUNC_16 (int ) ;

void
FUNC_17(struct context *VAR_1, struct link_socket_info *VAR_2, const uint8_t *VAR_3)
{
    if (VAR_1->c2.buf.len > 0)
    {
        if (!FUNC_2(VAR_1))
        {
            FUNC_12(&VAR_1->c2.buf, VAR_2, &VAR_1->c2.from, ((void*)0), VAR_1->c2.es);
        }


        if (VAR_1->options.ping_rec_timeout && VAR_1->c2.buf.len > 0)
        {
            FUNC_7(&VAR_1->c2.ping_rec_interval);
        }


        if (VAR_1->c2.buf.len > 0)
        {
            VAR_1->c2.link_read_bytes_auth += VAR_1->c2.buf.len;
            VAR_1->c2.max_recv_size_local = FUNC_13(VAR_1->c2.original_recv_size, VAR_1->c2.max_recv_size_local);
        }


        if (FUNC_11(&VAR_1->c2.buf))
        {
            FUNC_6(VAR_0, "RECEIVED PING PACKET");
            VAR_1->c2.buf.len = 0;
        }
        FUNC_5(VAR_3, &VAR_1->c2.to_tun, &VAR_1->c2.buf, &VAR_1->c2.buffers->read_link_buf);


        if (!FUNC_16(VAR_1->c1.tuntap))
        {
            VAR_1->c2.to_tun.len = 0;
        }
    }
    else
    {
        FUNC_4(&VAR_1->c2.to_tun);
    }
}
