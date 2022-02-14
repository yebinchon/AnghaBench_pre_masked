
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct gc_arena {int dummy; } ;
struct TYPE_11__ {scalar_t__ len; } ;
struct TYPE_10__ {int to_link; TYPE_4__ buf; int n_trunc_pre_encrypt; scalar_t__ log_rw; int tun_read_bytes; } ;
struct TYPE_9__ {int tuntap; } ;
struct TYPE_8__ {scalar_t__ mode; int allow_recursive_routing; } ;
struct context {TYPE_3__ c2; TYPE_2__ c1; TYPE_1__ options; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct context*,TYPE_4__*) ;
 int FUNC_6 (struct context*,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct gc_arena*) ;
 struct gc_arena FUNC_9 () ;
 int FUNC_10 (int ,int ,int ,char*,int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct context*,unsigned int,TYPE_4__*) ;
 int VAR_7 ;

void
FUNC_14(struct context *VAR_8)
{
    struct gc_arena VAR_9 = FUNC_9();

    FUNC_12(VAR_2);

    if (VAR_8->c2.buf.len > 0)
    {
        VAR_8->c2.tun_read_bytes += VAR_8->c2.buf.len;
    }
    FUNC_4(VAR_0, "TUN READ [%d]", FUNC_0(&VAR_8->c2.buf));

    if (VAR_8->c2.buf.len > 0)
    {
        if ((VAR_8->options.mode == VAR_1) && (!VAR_8->options.allow_recursive_routing))
        {
            FUNC_5(VAR_8, &VAR_8->c2.buf);
        }




        unsigned int VAR_10 = VAR_4 | VAR_6 | VAR_3
                             | VAR_5;
        FUNC_13(VAR_8, VAR_10, &VAR_8->c2.buf);
    }
    if (VAR_8->c2.buf.len > 0)
    {
        FUNC_6(VAR_8, 1);
    }
    else
    {
        FUNC_3(&VAR_8->c2.to_link);
    }
    FUNC_11();
    FUNC_8(&VAR_9);
}
