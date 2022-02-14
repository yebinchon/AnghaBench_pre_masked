
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct hm_header_st {size_t msg_len; size_t frag_off; size_t frag_len; int seq; int type; } ;
struct TYPE_9__ {size_t message_size; int message_type; } ;
struct TYPE_10__ {TYPE_1__ tmp; } ;
struct TYPE_13__ {TYPE_4__* d1; TYPE_2__ s3; int init_buf; } ;
struct TYPE_11__ {scalar_t__ frag_off; size_t msg_len; int seq; int type; } ;
struct TYPE_12__ {TYPE_3__ r_msg_hdr; } ;
typedef TYPE_5__ SSL ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_5__*,int ,int ,int ) ;
 size_t FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_3(SSL *VAR_6, struct hm_header_st *VAR_7)
{
    size_t VAR_8, VAR_9, VAR_10;

    VAR_10 = VAR_7->msg_len;
    VAR_8 = VAR_7->frag_off;
    VAR_9 = VAR_7->frag_len;


    if ((VAR_8 + VAR_9) > VAR_10
            || VAR_10 > FUNC_2(VAR_6)) {
        FUNC_1(VAR_6, VAR_2, VAR_4,
                 VAR_5);
        return 0;
    }

    if (VAR_6->d1->r_msg_hdr.frag_off == 0) {




        if (!FUNC_0(VAR_6->init_buf, VAR_10 + VAR_0)) {
            FUNC_1(VAR_6, VAR_3, VAR_4,
                     VAR_1);
            return 0;
        }

        VAR_6->s3.tmp.message_size = VAR_10;
        VAR_6->d1->r_msg_hdr.msg_len = VAR_10;
        VAR_6->s3.tmp.message_type = VAR_7->type;
        VAR_6->d1->r_msg_hdr.type = VAR_7->type;
        VAR_6->d1->r_msg_hdr.seq = VAR_7->seq;
    } else if (VAR_10 != VAR_6->d1->r_msg_hdr.msg_len) {




        FUNC_1(VAR_6, VAR_2, VAR_4,
                 VAR_5);
        return 0;
    }

    return 1;
}
