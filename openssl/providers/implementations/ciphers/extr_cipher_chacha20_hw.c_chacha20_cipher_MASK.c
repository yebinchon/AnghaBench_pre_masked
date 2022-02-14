
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d; } ;
struct TYPE_4__ {unsigned int partial_len; int* buf; unsigned int* counter; TYPE_1__ key; } ;
typedef int PROV_CIPHER_CTX ;
typedef TYPE_2__ PROV_CHACHA20_CTX ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char const*,unsigned int,int ,unsigned int*) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static int FUNC_2(PROV_CIPHER_CTX *VAR_1, unsigned char *VAR_2,
                           const unsigned char *VAR_3, size_t VAR_4)
{
    PROV_CHACHA20_CTX *VAR_5 = (PROV_CHACHA20_CTX *)VAR_1;
    unsigned int VAR_6, VAR_7, VAR_8;

    VAR_6 = VAR_5->partial_len;
    if (VAR_6 > 0) {
        while (VAR_4 > 0 && VAR_6 < VAR_0) {
            *VAR_2++ = *VAR_3++ ^ VAR_5->buf[VAR_6++];
            VAR_4--;
        }
        VAR_5->partial_len = VAR_6;

        if (VAR_4 == 0)
            return 1;

        if (VAR_6 == VAR_0) {
            VAR_5->partial_len = 0;
            VAR_5->counter[0]++;
            if (VAR_5->counter[0] == 0)
                VAR_5->counter[1]++;
        }
    }

    VAR_7 = (unsigned int)(VAR_4 % VAR_0);
    VAR_4 -= VAR_7;
    VAR_8 = VAR_5->counter[0];
    while (VAR_4 >= VAR_0) {
        size_t VAR_9 = VAR_4 / VAR_0;






        if (sizeof(size_t) > sizeof(unsigned int) && VAR_9 > (1U << 28))
            VAR_9 = (1U << 28);







        VAR_8 += (unsigned int)VAR_9;
        if (VAR_8 < VAR_9) {
            VAR_9 -= VAR_8;
            VAR_8 = 0;
        }
        VAR_9 *= VAR_0;
        FUNC_0(VAR_2, VAR_3, VAR_9, VAR_5->key.d, VAR_5->counter);
        VAR_4 -= VAR_9;
        VAR_3 += VAR_9;
        VAR_2 += VAR_9;

        VAR_5->counter[0] = VAR_8;
        if (VAR_8 == 0) VAR_5->counter[1]++;
    }

    if (VAR_7 > 0) {
        FUNC_1(VAR_5->buf, 0, sizeof(VAR_5->buf));
        FUNC_0(VAR_5->buf, VAR_5->buf, VAR_0,
                       VAR_5->key.d, VAR_5->counter);
        for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
            VAR_2[VAR_6] = VAR_3[VAR_6] ^ VAR_5->buf[VAR_6];
        VAR_5->partial_len = VAR_7;
    }

    return 1;
}
