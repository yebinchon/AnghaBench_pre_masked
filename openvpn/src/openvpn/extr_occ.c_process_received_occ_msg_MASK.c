
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ len; } ;
struct TYPE_12__ {int occ_op; TYPE_5__ buf; int occ_mtu_load_test_interval; void* max_send_size_local; void* max_send_size_remote; void* max_recv_size_local; void* max_recv_size_remote; int occ_interval; int options_string_remote; void* occ_mtu_load_size; } ;
struct TYPE_9__ {int proto; int fragment; } ;
struct TYPE_10__ {TYPE_1__ ce; int mtu_test; int occ; } ;
struct context {TYPE_4__ c2; TYPE_3__* sig; TYPE_2__ options; } ;
struct TYPE_11__ {char* signal_text; int signal_received; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct context*) ;
 void* VAR_5 ;
 int FUNC_3 (TYPE_5__*,int ) ;
 void* FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,void*,...) ;
 int FUNC_9 (char*,int ,scalar_t__) ;
 int FUNC_10 (char*,int ,scalar_t__) ;
 int FUNC_11 (int ) ;

void
FUNC_12(struct context *VAR_6)
{
    FUNC_0(FUNC_3(&VAR_6->c2.buf, VAR_3));
    switch (FUNC_5(&VAR_6->c2.buf))
    {
        case 128:
            FUNC_6(VAR_0, "RECEIVED OCC_REQUEST");
            VAR_6->c2.occ_op = 129;
            break;

        case 130:
            FUNC_6(VAR_0, "RECEIVED OCC_MTU_REQUEST");
            VAR_6->c2.occ_op = 131;
            break;

        case 132:
            FUNC_6(VAR_0, "RECEIVED OCC_MTU_LOAD_REQUEST");
            VAR_6->c2.occ_mtu_load_size = FUNC_4(&VAR_6->c2.buf);
            if (VAR_6->c2.occ_mtu_load_size >= 0)
            {
                VAR_6->c2.occ_op = VAR_2;
            }
            break;

        case 129:
            FUNC_6(VAR_0, "RECEIVED OCC_REPLY");
            if (VAR_6->options.occ && !FUNC_2(VAR_6) && VAR_6->c2.options_string_remote)
            {
                if (!FUNC_9((char *) FUNC_1(&VAR_6->c2.buf),
                                            VAR_6->c2.options_string_remote,
                                            VAR_6->c2.buf.len))
                {
                    FUNC_10((char *) FUNC_1(&VAR_6->c2.buf),
                                         VAR_6->c2.options_string_remote,
                                         VAR_6->c2.buf.len);
                }
            }
            FUNC_7(&VAR_6->c2.occ_interval);
            break;

        case 131:
            FUNC_6(VAR_0, "RECEIVED OCC_MTU_REPLY");
            VAR_6->c2.max_recv_size_remote = FUNC_4(&VAR_6->c2.buf);
            VAR_6->c2.max_send_size_remote = FUNC_4(&VAR_6->c2.buf);
            if (VAR_6->options.mtu_test
                && VAR_6->c2.max_recv_size_remote > 0
                && VAR_6->c2.max_send_size_remote > 0)
            {
                FUNC_8(VAR_1, "NOTE: Empirical MTU test completed [Tried,Actual] local->remote=[%d,%d] remote->local=[%d,%d]",
                    VAR_6->c2.max_send_size_local,
                    VAR_6->c2.max_recv_size_remote,
                    VAR_6->c2.max_send_size_remote,
                    VAR_6->c2.max_recv_size_local);
                if (!VAR_6->options.ce.fragment
                    && (FUNC_11(VAR_6->options.ce.proto))
                    && VAR_6->c2.max_send_size_local > VAR_5
                    && (VAR_6->c2.max_recv_size_remote < VAR_6->c2.max_send_size_local
                        || VAR_6->c2.max_recv_size_local < VAR_6->c2.max_send_size_remote))
                {
                    FUNC_8(VAR_1, "NOTE: This connection is unable to accommodate a UDP packet size of %d. Consider using --fragment or --mssfix options as a workaround.",
                        VAR_6->c2.max_send_size_local);
                }
            }
            FUNC_7(&VAR_6->c2.occ_mtu_load_test_interval);
            break;

        case 133:
            FUNC_6(VAR_0, "RECEIVED OCC_EXIT");
            VAR_6->sig->signal_received = VAR_4;
            VAR_6->sig->signal_text = "remote-exit";
            break;
    }
    VAR_6->c2.buf.len = 0;
}
