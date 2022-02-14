
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hm_header_st {int frag_len; int frag_off; int seq; int msg_len; int type; } ;
struct TYPE_5__ {TYPE_1__* d1; } ;
struct TYPE_4__ {struct hm_header_st w_msg_hdr; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int ,unsigned char*) ;
 int FUNC_1 (int ,unsigned char*) ;

__attribute__((used)) static unsigned char *FUNC_2(SSL *VAR_0, unsigned char *VAR_1)
{
    struct hm_header_st *VAR_2 = &VAR_0->d1->w_msg_hdr;

    *VAR_1++ = VAR_2->type;
    FUNC_0(VAR_2->msg_len, VAR_1);

    FUNC_1(VAR_2->seq, VAR_1);
    FUNC_0(VAR_2->frag_off, VAR_1);
    FUNC_0(VAR_2->frag_len, VAR_1);

    return VAR_1;
}
