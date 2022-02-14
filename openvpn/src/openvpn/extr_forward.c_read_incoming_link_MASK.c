
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int link_socket; int explicit_exit_notification_interval; int from; int buf; int frame; TYPE_1__* buffers; } ;
struct TYPE_5__ {scalar_t__ inetd; } ;
struct context {TYPE_3__ c2; TYPE_2__ options; } ;
struct buffer {int dummy; } ;
struct TYPE_4__ {int read_link_buf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int,char*,int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (scalar_t__,struct buffer const*,int const) ;
 int FUNC_11 (struct context*,int ,char*) ;
 scalar_t__ FUNC_12 (int ,int) ;
 scalar_t__ FUNC_13 (int ) ;
 struct buffer* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct context*) ;

void
FUNC_17(struct context *VAR_6)
{




    int VAR_7;



    FUNC_9(VAR_2);

    VAR_6->c2.buf = VAR_6->c2.buffers->read_link_buf;
    FUNC_0(FUNC_2(&VAR_6->c2.buf, FUNC_1(&VAR_6->c2.frame, VAR_1)));

    VAR_7 = FUNC_5(VAR_6->c2.link_socket,
                              &VAR_6->c2.buf,
                              &VAR_6->c2.from);

    if (FUNC_12(VAR_6->c2.link_socket, VAR_7))
    {
        {

            if (VAR_6->options.inetd)
            {
                FUNC_11(VAR_6, VAR_3, "connection-reset-inetd");
                FUNC_7(VAR_0, "Connection reset, inetd/xinetd exit [%d]", VAR_7);
            }
            else
            {
                {
                    FUNC_11(VAR_6, VAR_4, "connection-reset");
                    FUNC_7(VAR_0, "Connection reset, restarting [%d]", VAR_7);
                }
            }
        }
        FUNC_8();
        return;
    }


    FUNC_3(VAR_7, "read", VAR_6->c2.link_socket, ((void*)0));


    FUNC_16(VAR_6);

    FUNC_8();
}
