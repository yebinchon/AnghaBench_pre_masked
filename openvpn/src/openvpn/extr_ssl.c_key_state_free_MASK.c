
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int packet_id; int key_ctx_bi; } ;
struct key_state {TYPE_1__ crypto_options; scalar_t__ key_src; scalar_t__ rec_ack; scalar_t__ rec_reliable; scalar_t__ send_reliable; int paybuf; int ack_write_buf; int plaintext_write_buf; int plaintext_read_buf; int ks_ssl; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct key_state*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct key_state*,int) ;

__attribute__((used)) static void
FUNC_9(struct key_state *VAR_1, bool VAR_2)
{
    VAR_1->state = VAR_0;

    FUNC_5(&VAR_1->ks_ssl);

    FUNC_3(&VAR_1->crypto_options.key_ctx_bi);
    FUNC_2(&VAR_1->plaintext_read_buf);
    FUNC_2(&VAR_1->plaintext_write_buf);
    FUNC_2(&VAR_1->ack_write_buf);
    FUNC_0(VAR_1->paybuf);

    if (VAR_1->send_reliable)
    {
        FUNC_7(VAR_1->send_reliable);
        FUNC_1(VAR_1->send_reliable);
    }

    if (VAR_1->rec_reliable)
    {
        FUNC_7(VAR_1->rec_reliable);
        FUNC_1(VAR_1->rec_reliable);
    }

    if (VAR_1->rec_ack)
    {
        FUNC_1(VAR_1->rec_ack);
    }

    if (VAR_1->key_src)
    {
        FUNC_1(VAR_1->key_src);
    }

    FUNC_6(&VAR_1->crypto_options.packet_id);





    if (VAR_2)
    {
        FUNC_8(VAR_1, sizeof(*VAR_1));
    }
}
