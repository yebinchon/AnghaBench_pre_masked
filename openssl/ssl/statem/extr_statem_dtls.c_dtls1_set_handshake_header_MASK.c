
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_7__ {TYPE_1__* d1; } ;
struct TYPE_6__ {int handshake_write_seq; int next_handshake_write_seq; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,unsigned char**) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ,int ,int ) ;

int FUNC_5(SSL *VAR_3, WPACKET *VAR_4, int VAR_5)
{
    unsigned char *VAR_6;

    if (VAR_5 == VAR_2) {
        VAR_3->d1->handshake_write_seq = VAR_3->d1->next_handshake_write_seq;
        FUNC_4(VAR_3, VAR_1, 0,
                                     VAR_3->d1->handshake_write_seq, 0, 0);
        if (!FUNC_1(VAR_4, VAR_1))
            return 0;
    } else {
        FUNC_3(VAR_3, VAR_5, 0, 0, 0);




        if (!FUNC_0(VAR_4, VAR_0, &VAR_6)
                || !FUNC_2(VAR_4))
            return 0;
    }

    return 1;
}
