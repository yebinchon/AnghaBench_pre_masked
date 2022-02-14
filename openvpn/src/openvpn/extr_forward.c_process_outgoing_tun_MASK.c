
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct gc_arena {int dummy; } ;
struct TYPE_15__ {scalar_t__ len; } ;
struct TYPE_13__ {int tun_write_bytes; TYPE_4__ to_tun; int frame; int n_trunc_tun_write; scalar_t__ log_rw; } ;
struct TYPE_12__ {TYPE_3__* tuntap; } ;
struct context {TYPE_2__ c2; TYPE_1__ c1; } ;
struct TYPE_14__ {int actual_name; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int,char*,int *,TYPE_3__*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct gc_arena*) ;
 struct gc_arena FUNC_9 () ;
 int FUNC_10 (int ,int,int ,char*,int *) ;
 int FUNC_11 (int ,char*,scalar_t__,scalar_t__,...) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct context*,int,TYPE_4__*) ;
 int FUNC_15 (struct context*,int) ;
 int VAR_7 ;
 int FUNC_16 (TYPE_3__*,int ,int) ;
 int FUNC_17 (TYPE_3__*,TYPE_4__*) ;

void
FUNC_18(struct context *VAR_8)
{
    struct gc_arena VAR_9 = FUNC_9();





    if (VAR_8->c2.to_tun.len <= 0)
    {
        return;
    }

    FUNC_13(VAR_2);





    FUNC_14(VAR_8,
                      VAR_5 | VAR_4 | VAR_3 | VAR_6,
                      &VAR_8->c2.to_tun);

    if (VAR_8->c2.to_tun.len <= FUNC_2(&VAR_8->c2.frame))
    {



        int VAR_10;







        FUNC_6(VAR_1, "TUN WRITE [%d]", FUNC_0(&VAR_8->c2.to_tun));
        VAR_10 = FUNC_16(VAR_8->c1.tuntap, FUNC_1(&VAR_8->c2.to_tun), FUNC_0(&VAR_8->c2.to_tun));


        if (VAR_10 > 0)
        {
            VAR_8->c2.tun_write_bytes += VAR_10;
        }
        FUNC_5(VAR_10, "write to TUN/TAP", ((void*)0), VAR_8->c1.tuntap);


        if (VAR_10 > 0)
        {

            if (VAR_10 != FUNC_0(&VAR_8->c2.to_tun))
            {
                FUNC_11(VAR_0,
                    "TUN/TAP packet was destructively fragmented on write to %s (tried=%d,actual=%d)",
                    VAR_8->c1.tuntap->actual_name,
                    FUNC_0(&VAR_8->c2.to_tun),
                    VAR_10);
            }


            FUNC_15(VAR_8, VAR_10);
        }
    }
    else
    {




        FUNC_11(VAR_0, "tun packet too large on write (tried=%d,max=%d)",
            VAR_8->c2.to_tun.len,
            FUNC_2(&VAR_8->c2.frame));
    }

    FUNC_4(&VAR_8->c2.to_tun);

    FUNC_12();
    FUNC_8(&VAR_9);
}
