
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* d1; } ;
struct TYPE_5__ {int handshake_write_seq; int next_handshake_write_seq; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (TYPE_2__*,unsigned char,size_t,int ,size_t,size_t) ;

void FUNC_1(SSL *VAR_0,
                              unsigned char VAR_1, size_t VAR_2,
                              size_t VAR_3, size_t VAR_4)
{
    if (VAR_3 == 0) {
        VAR_0->d1->handshake_write_seq = VAR_0->d1->next_handshake_write_seq;
        VAR_0->d1->next_handshake_write_seq++;
    }

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_0->d1->handshake_write_seq,
                                 VAR_3, VAR_4);
}
