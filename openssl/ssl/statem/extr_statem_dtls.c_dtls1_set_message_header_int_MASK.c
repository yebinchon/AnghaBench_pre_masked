
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hm_header_st {unsigned char type; size_t msg_len; unsigned short seq; size_t frag_off; size_t frag_len; } ;
struct TYPE_5__ {TYPE_1__* d1; } ;
struct TYPE_4__ {struct hm_header_st w_msg_hdr; } ;
typedef TYPE_2__ SSL ;



__attribute__((used)) static void
FUNC_0(SSL *VAR_0, unsigned char VAR_1,
                             size_t VAR_2, unsigned short VAR_3,
                             size_t VAR_4, size_t VAR_5)
{
    struct hm_header_st *VAR_6 = &VAR_0->d1->w_msg_hdr;

    VAR_6->type = VAR_1;
    VAR_6->msg_len = VAR_2;
    VAR_6->seq = VAR_3;
    VAR_6->frag_off = VAR_4;
    VAR_6->frag_len = VAR_5;
}
