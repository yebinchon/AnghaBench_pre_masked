
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int tuntap; } ;
struct TYPE_14__ {int len; } ;
struct TYPE_12__ {TYPE_5__ buf; int n_trunc_tun_read; int frame; TYPE_1__* buffers; } ;
struct TYPE_11__ {int restart_sleep_seconds; } ;
struct context {TYPE_4__ c1; TYPE_3__ c2; TYPE_2__ persist; } ;
struct TYPE_10__ {TYPE_5__ read_tun_buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (int ,char*,int *,int ) ;
 int FUNC_9 (int ,int ,int ,char*,int *) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,TYPE_5__*) ;
 int FUNC_15 (struct context*,int ,char*) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;

void
FUNC_18(struct context *VAR_4)
{





    FUNC_12(VAR_1);

    VAR_4->c2.buf = VAR_4->c2.buffers->read_tun_buf;



    FUNC_0(FUNC_6(&VAR_4->c2.buf, FUNC_3(&VAR_4->c2.frame)));
    FUNC_0(FUNC_7(&VAR_4->c2.buf, FUNC_4(&VAR_4->c2.frame)));
    VAR_4->c2.buf.len = FUNC_13(VAR_4->c1.tuntap, FUNC_2(&VAR_4->c2.buf), FUNC_4(&VAR_4->c2.frame));
    if (FUNC_17(VAR_4->c2.buf.len))
    {
        FUNC_15(VAR_4, VAR_3, "tun-stop");
        FUNC_10(VAR_0, "TUN/TAP interface has been stopped, exiting");
        FUNC_11();
        return;
    }


    if (FUNC_16(VAR_4->c2.buf.len))
    {
        FUNC_15(VAR_4, VAR_2, "tun-abort");
        VAR_4->persist.restart_sleep_seconds = 10;
        FUNC_10(VAR_0, "TUN/TAP I/O operation aborted, restarting");
        FUNC_11();
        return;
    }


    FUNC_8(VAR_4->c2.buf.len, "read from TUN/TAP", ((void*)0), VAR_4->c1.tuntap);

    FUNC_11();
}
