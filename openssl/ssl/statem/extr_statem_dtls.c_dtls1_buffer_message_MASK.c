
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int seq64be ;
typedef int pitem ;
struct TYPE_14__ {int epoch; int session; int compress; int write_hash; int enc_write_ctx; } ;
struct TYPE_15__ {unsigned int msg_len; unsigned int frag_len; int is_ccs; int seq; TYPE_3__ saved_retransmit_state; scalar_t__ frag_off; int type; } ;
struct TYPE_17__ {TYPE_4__ msg_header; int fragment; } ;
typedef TYPE_6__ hm_fragment ;
struct TYPE_18__ {scalar_t__ init_off; scalar_t__ version; TYPE_5__* d1; int rlayer; int session; int compress; int write_hash; int enc_write_ctx; scalar_t__ init_num; TYPE_1__* init_buf; } ;
struct TYPE_13__ {int msg_len; int type; int seq; } ;
struct TYPE_16__ {int sent_messages; TYPE_2__ w_msg_hdr; } ;
struct TYPE_12__ {int data; } ;
typedef TYPE_7__ SSL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_6__* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (unsigned char*,TYPE_6__*) ;
 int FUNC_8 (int ,int *) ;

int FUNC_9(SSL *VAR_3, int VAR_4)
{
    pitem *VAR_5;
    hm_fragment *VAR_6;
    unsigned char VAR_7[8];





    if (!FUNC_6(VAR_3->init_off == 0))
        return 0;

    VAR_6 = FUNC_3(VAR_3->init_num, 0);
    if (VAR_6 == ((void*)0))
        return 0;

    FUNC_4(VAR_6->fragment, VAR_3->init_buf->data, VAR_3->init_num);

    if (VAR_4) {

        if (!FUNC_6(VAR_3->d1->w_msg_hdr.msg_len +
                         ((VAR_3->version ==
                           VAR_0) ? 3 : VAR_1)
                         == (unsigned int)VAR_3->init_num))
            return 0;
    } else {
        if (!FUNC_6(VAR_3->d1->w_msg_hdr.msg_len +
                         VAR_2 == (unsigned int)VAR_3->init_num))
            return 0;
    }

    VAR_6->msg_header.msg_len = VAR_3->d1->w_msg_hdr.msg_len;
    VAR_6->msg_header.seq = VAR_3->d1->w_msg_hdr.seq;
    VAR_6->msg_header.type = VAR_3->d1->w_msg_hdr.type;
    VAR_6->msg_header.frag_off = 0;
    VAR_6->msg_header.frag_len = VAR_3->d1->w_msg_hdr.msg_len;
    VAR_6->msg_header.is_ccs = VAR_4;


    VAR_6->msg_header.saved_retransmit_state.enc_write_ctx = VAR_3->enc_write_ctx;
    VAR_6->msg_header.saved_retransmit_state.write_hash = VAR_3->write_hash;
    VAR_6->msg_header.saved_retransmit_state.compress = VAR_3->compress;
    VAR_6->msg_header.saved_retransmit_state.session = VAR_3->session;
    VAR_6->msg_header.saved_retransmit_state.epoch =
        FUNC_0(&VAR_3->rlayer);

    FUNC_5(VAR_7, 0, sizeof(VAR_7));
    VAR_7[6] =
        (unsigned
         char)(FUNC_1(VAR_6->msg_header.seq,
                                        VAR_6->msg_header.is_ccs) >> 8);
    VAR_7[7] =
        (unsigned
         char)(FUNC_1(VAR_6->msg_header.seq,
                                        VAR_6->msg_header.is_ccs));

    VAR_5 = FUNC_7(VAR_7, VAR_6);
    if (VAR_5 == ((void*)0)) {
        FUNC_2(VAR_6);
        return 0;
    }

    FUNC_8(VAR_3->d1->sent_messages, VAR_5);
    return 1;
}
