
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tmp_int; int packet_id_persist_interval; int occ_mtu_load_test_interval; int occ_interval; scalar_t__ options_string_remote; scalar_t__ options_string_local; int wait_for_connect; int ping_rec_interval; int ping_send_interval; int inactivity_interval; } ;
struct TYPE_3__ {int inactivity_timeout; int ping_send_timeout; int ping_rec_timeout; scalar_t__ packet_id_file; scalar_t__ mtu_test; scalar_t__ occ; } ;
struct context {TYPE_2__ c2; TYPE_1__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct context*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct context*) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(struct context *VAR_5, bool VAR_6)
{
    FUNC_4();
    FUNC_3(VAR_5);


    if (VAR_5->options.inactivity_timeout)
    {
        FUNC_1(&VAR_5->c2.inactivity_interval, VAR_5->options.inactivity_timeout, VAR_4);
    }



    if (VAR_5->options.ping_send_timeout)
    {
        FUNC_1(&VAR_5->c2.ping_send_interval, VAR_5->options.ping_send_timeout, 0);
    }

    if (VAR_5->options.ping_rec_timeout)
    {
        FUNC_1(&VAR_5->c2.ping_rec_interval, VAR_5->options.ping_rec_timeout, VAR_4);
    }

    if (!VAR_6)
    {

        FUNC_1(&VAR_5->c2.wait_for_connect, 1, VAR_4);
        if (VAR_5->options.packet_id_file)
        {
            FUNC_1(&VAR_5->c2.packet_id_persist_interval, 60, VAR_4);
        }



        FUNC_2(&VAR_5->c2.tmp_int, VAR_2, VAR_3);
    }
}
