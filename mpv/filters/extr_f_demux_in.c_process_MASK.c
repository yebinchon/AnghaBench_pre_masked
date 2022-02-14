
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int eof_returned; int src; } ;
struct mp_frame {int type; struct demux_packet* member_1; int member_0; } ;
struct mp_filter {int * ppins; struct priv* priv; } ;
struct demux_packet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct demux_packet**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct mp_frame) ;

__attribute__((used)) static void FUNC_3(struct mp_filter *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;

    if (!FUNC_1(VAR_2->ppins[0]))
        return;

    struct demux_packet *VAR_4 = ((void*)0);
    if (FUNC_0(VAR_3->src, &VAR_4) == 0)
        return;

    struct mp_frame VAR_5 = {VAR_1, VAR_4};
    if (VAR_4) {
        VAR_3->eof_returned = 0;
    } else {
        VAR_5.type = VAR_0;


        if (VAR_3->eof_returned)
            return;
        VAR_3->eof_returned = 1;
    }

    FUNC_2(VAR_2->ppins[0], VAR_5);
}
