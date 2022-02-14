
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {struct TYPE_13__* next; struct TYPE_13__* prev; scalar_t__ active; TYPE_3__ const* cipher; } ;
struct TYPE_12__ {int algorithm_mkey; int algorithm_auth; int algorithm_enc; int algorithm_mac; scalar_t__ min_tls; scalar_t__ min_dtls; int valid; } ;
struct TYPE_11__ {TYPE_1__* ssl3_enc; TYPE_3__* (* get_cipher ) (int) ;} ;
struct TYPE_10__ {int enc_flags; } ;
typedef TYPE_2__ SSL_METHOD ;
typedef TYPE_3__ SSL_CIPHER ;
typedef TYPE_4__ CIPHER_ORDER ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(const SSL_METHOD *VAR_1,
                                       int VAR_2,
                                       uint32_t VAR_3,
                                       uint32_t VAR_4,
                                       uint32_t VAR_5,
                                       uint32_t VAR_6,
                                       CIPHER_ORDER *VAR_7,
                                       CIPHER_ORDER **VAR_8,
                                       CIPHER_ORDER **VAR_9)
{
    int VAR_10, VAR_11;
    const SSL_CIPHER *VAR_12;
    VAR_11 = 0;
    for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
        VAR_12 = VAR_1->get_cipher(VAR_10);

        if (VAR_12 == ((void*)0) || !VAR_12->valid)
            continue;
        if ((VAR_12->algorithm_mkey & VAR_3) ||
            (VAR_12->algorithm_auth & VAR_4) ||
            (VAR_12->algorithm_enc & VAR_5) ||
            (VAR_12->algorithm_mac & VAR_6))
            continue;
        if (((VAR_1->ssl3_enc->enc_flags & VAR_0) == 0) &&
            VAR_12->min_tls == 0)
            continue;
        if (((VAR_1->ssl3_enc->enc_flags & VAR_0) != 0) &&
            VAR_12->min_dtls == 0)
            continue;

        VAR_7[VAR_11].cipher = VAR_12;
        VAR_7[VAR_11].next = ((void*)0);
        VAR_7[VAR_11].prev = ((void*)0);
        VAR_7[VAR_11].active = 0;
        VAR_11++;
    }




    if (VAR_11 > 0) {
        VAR_7[0].prev = ((void*)0);

        if (VAR_11 > 1) {
            VAR_7[0].next = &VAR_7[1];

            for (VAR_10 = 1; VAR_10 < VAR_11 - 1; VAR_10++) {
                VAR_7[VAR_10].prev = &VAR_7[VAR_10 - 1];
                VAR_7[VAR_10].next = &VAR_7[VAR_10 + 1];
            }

            VAR_7[VAR_11 - 1].prev = &VAR_7[VAR_11 - 2];
        }

        VAR_7[VAR_11 - 1].next = ((void*)0);

        *VAR_8 = &VAR_7[0];
        *VAR_9 = &VAR_7[VAR_11 - 1];
    }
}
