
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned char* read_sequence; } ;
struct TYPE_7__ {unsigned long map; int max_seq_num; } ;
struct TYPE_6__ {TYPE_5__ rlayer; } ;
typedef TYPE_1__ SSL ;
typedef TYPE_2__ DTLS1_BITMAP ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,unsigned char const*) ;
 int FUNC_2 (unsigned char const*,int ) ;

int FUNC_3(SSL *VAR_0, DTLS1_BITMAP *VAR_1)
{
    int VAR_2;
    unsigned int VAR_3;
    const unsigned char *VAR_4 = VAR_0->rlayer.read_sequence;

    VAR_2 = FUNC_2(VAR_4, VAR_1->max_seq_num);
    if (VAR_2 > 0) {
        FUNC_1(FUNC_0(&VAR_0->rlayer), VAR_4);
        return 1;
    }
    VAR_3 = -VAR_2;
    if (VAR_3 >= sizeof(VAR_1->map) * 8)
        return 0;
    else if (VAR_1->map & (1UL << VAR_3))
        return 0;

    FUNC_1(FUNC_0(&VAR_0->rlayer), VAR_4);
    return 1;
}
