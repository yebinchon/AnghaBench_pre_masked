
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int occ_op; int buf; int frame; int occ_mtu_load_size; int max_send_size_local; int max_recv_size_local; int options_string_local; TYPE_1__* buffers; } ;
struct context {TYPE_2__ c2; } ;
struct TYPE_3__ {int aux_buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;







 scalar_t__ VAR_1 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,scalar_t__) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int const) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (struct context*,int) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int VAR_2 ;
 int FUNC_15 (int ) ;

void
FUNC_16(struct context *VAR_3)
{
    bool VAR_4 = 0;

    VAR_3->c2.buf = VAR_3->c2.buffers->aux_buf;
    FUNC_0(FUNC_6(&VAR_3->c2.buf, FUNC_4(&VAR_3->c2.frame)));
    FUNC_0(FUNC_7(&VAR_3->c2.buf, FUNC_5(&VAR_3->c2.frame)));
    FUNC_0(FUNC_8(&VAR_3->c2.buf, VAR_2, VAR_1));

    switch (VAR_3->c2.occ_op)
    {
        case 128:
            if (!FUNC_10(&VAR_3->c2.buf, 128))
            {
                break;
            }
            FUNC_11(VAR_0, "SENT OCC_REQUEST");
            VAR_4 = 1;
            break;

        case 129:
            if (!VAR_3->c2.options_string_local)
            {
                break;
            }
            if (!FUNC_10(&VAR_3->c2.buf, 129))
            {
                break;
            }
            if (!FUNC_8(&VAR_3->c2.buf, VAR_3->c2.options_string_local,
                           FUNC_15(VAR_3->c2.options_string_local) + 1))
            {
                break;
            }
            FUNC_11(VAR_0, "SENT OCC_REPLY");
            VAR_4 = 1;
            break;

        case 130:
            if (!FUNC_10(&VAR_3->c2.buf, 130))
            {
                break;
            }
            FUNC_11(VAR_0, "SENT OCC_MTU_REQUEST");
            VAR_4 = 1;
            break;

        case 131:
            if (!FUNC_10(&VAR_3->c2.buf, 131))
            {
                break;
            }
            if (!FUNC_9(&VAR_3->c2.buf, VAR_3->c2.max_recv_size_local))
            {
                break;
            }
            if (!FUNC_9(&VAR_3->c2.buf, VAR_3->c2.max_send_size_local))
            {
                break;
            }
            FUNC_11(VAR_0, "SENT OCC_MTU_REPLY");
            VAR_4 = 1;
            break;

        case 132:
            if (!FUNC_10(&VAR_3->c2.buf, 132))
            {
                break;
            }
            if (!FUNC_9(&VAR_3->c2.buf, VAR_3->c2.occ_mtu_load_size))
            {
                break;
            }
            FUNC_11(VAR_0, "SENT OCC_MTU_LOAD_REQUEST");
            VAR_4 = 1;
            break;

        case 133:
        {
            int VAR_5;

            if (!FUNC_10(&VAR_3->c2.buf, 133))
            {
                break;
            }
            VAR_5 = FUNC_14(VAR_3->c2.occ_mtu_load_size, FUNC_2(&VAR_3->c2.frame))
                          - VAR_1
                          - sizeof(uint8_t)
                          - FUNC_3(&VAR_3->c2.frame);

            while (VAR_5 > 0)
            {



                if (!FUNC_10(&VAR_3->c2.buf, FUNC_13() & 0xFF))
                {
                    break;
                }
                --VAR_5;
            }
            FUNC_11(VAR_0, "SENT OCC_MTU_LOAD min_int(%d-%d-%d-%d,%d) size=%d",
                 VAR_3->c2.occ_mtu_load_size,
                 VAR_1,
                 (int) sizeof(uint8_t),
                 FUNC_3(&VAR_3->c2.frame),
                 FUNC_5(&VAR_3->c2.frame),
                 FUNC_1(&VAR_3->c2.buf));
            VAR_4 = 1;
        }
        break;

        case 134:
            if (!FUNC_10(&VAR_3->c2.buf, 134))
            {
                break;
            }
            FUNC_11(VAR_0, "SENT OCC_EXIT");
            VAR_4 = 1;
            break;
    }

    if (VAR_4)
    {




        FUNC_12(VAR_3, 1);
    }

    VAR_3->c2.occ_op = -1;
}
