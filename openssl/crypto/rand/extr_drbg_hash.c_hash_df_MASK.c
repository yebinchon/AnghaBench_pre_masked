
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* vtmp; size_t blocklen; int md; int * ctx; } ;
struct TYPE_5__ {TYPE_2__ hash; } ;
struct TYPE_7__ {size_t seedlen; TYPE_1__ data; } ;
typedef TYPE_2__ RAND_DRBG_HASH ;
typedef TYPE_3__ RAND_DRBG ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int *,unsigned char*,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char const*,size_t) ;
 unsigned char const VAR_0 ;
 int FUNC_3 (unsigned char*,size_t) ;
 int FUNC_4 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_5(RAND_DRBG *VAR_1, unsigned char *VAR_2,
                   const unsigned char VAR_3,
                   const unsigned char *VAR_4, size_t VAR_5,
                   const unsigned char *VAR_6, size_t VAR_7,
                   const unsigned char *VAR_8, size_t VAR_9)
{
    RAND_DRBG_HASH *VAR_10 = &VAR_1->data.hash;
    EVP_MD_CTX *VAR_11 = VAR_10->ctx;
    unsigned char *VAR_12 = VAR_10->vtmp;

    unsigned char VAR_13[1 + 4 + 1];
    int VAR_14 = 0;
    size_t VAR_15 = VAR_1->seedlen;
    size_t VAR_16 = VAR_15 * 8;






    VAR_13[VAR_14++] = 1;

    VAR_13[VAR_14++] = (unsigned char)((VAR_16 >> 24) & 0xff);
    VAR_13[VAR_14++] = (unsigned char)((VAR_16 >> 16) & 0xff);
    VAR_13[VAR_14++] = (unsigned char)((VAR_16 >> 8) & 0xff);
    VAR_13[VAR_14++] = (unsigned char)(VAR_16 & 0xff);

    if (VAR_3 != VAR_0)
        VAR_13[VAR_14++] = VAR_3;


    for (;;) {




        if (!(FUNC_1(VAR_11, VAR_10->md, ((void*)0))
                && FUNC_2(VAR_11, VAR_13, VAR_14)
                && FUNC_2(VAR_11, VAR_4, VAR_5)
                && (VAR_6 == ((void*)0) || FUNC_2(VAR_11, VAR_6, VAR_7))
                && (VAR_8 == ((void*)0) || FUNC_2(VAR_11, VAR_8, VAR_9))))
            return 0;

        if (VAR_15 < VAR_10->blocklen) {
            if (!FUNC_0(VAR_11, VAR_12, ((void*)0)))
                return 0;
            FUNC_4(VAR_2, VAR_12, VAR_15);
            FUNC_3(VAR_12, VAR_10->blocklen);
            break;
        } else if(!FUNC_0(VAR_11, VAR_2, ((void*)0))) {
            return 0;
        }

        VAR_15 -= VAR_10->blocklen;
        if (VAR_15 == 0)
            break;

        VAR_13[0]++;
        VAR_2 += VAR_10->blocklen;
    }
    return 1;
}
