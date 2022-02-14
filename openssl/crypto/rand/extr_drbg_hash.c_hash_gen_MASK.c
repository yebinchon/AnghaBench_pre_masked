
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* vtmp; unsigned char* V; size_t blocklen; int ctx; int md; } ;
struct TYPE_6__ {TYPE_2__ hash; } ;
struct TYPE_8__ {size_t seedlen; TYPE_1__ data; } ;
typedef TYPE_2__ RAND_DRBG_HASH ;
typedef TYPE_3__ RAND_DRBG ;


 int FUNC_0 (int ,unsigned char*,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,unsigned char*,size_t) ;
 int FUNC_3 (TYPE_3__*,unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_5(RAND_DRBG *VAR_0, unsigned char *VAR_1, size_t VAR_2)
{
    RAND_DRBG_HASH *VAR_3 = &VAR_0->data.hash;
    unsigned char VAR_4 = 1;

    if (VAR_2 == 0)
        return 1;
    FUNC_4(VAR_3->vtmp, VAR_3->V, VAR_0->seedlen);
    for(;;) {
        if (!FUNC_1(VAR_3->ctx, VAR_3->md, ((void*)0))
                || !FUNC_2(VAR_3->ctx, VAR_3->vtmp, VAR_0->seedlen))
            return 0;

        if (VAR_2 < VAR_3->blocklen) {
            if (!FUNC_0(VAR_3->ctx, VAR_3->vtmp, ((void*)0)))
                return 0;
            FUNC_4(VAR_1, VAR_3->vtmp, VAR_2);
            return 1;
        } else {
            if (!FUNC_0(VAR_3->ctx, VAR_1, ((void*)0)))
                return 0;
            VAR_2 -= VAR_3->blocklen;
            if (VAR_2 == 0)
                break;
            VAR_1 += VAR_3->blocklen;
        }
        FUNC_3(VAR_0, VAR_3->vtmp, &VAR_4, 1);
    }
    return 1;
}
