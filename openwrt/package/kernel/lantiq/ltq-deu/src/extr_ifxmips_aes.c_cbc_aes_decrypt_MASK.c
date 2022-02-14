
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct scatterlist {int dummy; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; TYPE_4__ src; TYPE_2__ dst; int * iv; } ;
struct blkcipher_desc {int tfm; } ;
struct aes_ctx {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_1 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 struct aes_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct aes_ctx*,int ,int ,int *,unsigned int,int ,int ) ;

int FUNC_5(struct blkcipher_desc *VAR_2,
               struct scatterlist *VAR_3, struct scatterlist *VAR_4,
               unsigned int VAR_5)
{
    struct aes_ctx *VAR_6 = FUNC_3(VAR_2->tfm);
    struct blkcipher_walk VAR_7;
    int VAR_8;
    unsigned int VAR_9;

    FUNC_1(&VAR_7, VAR_3, VAR_4, VAR_5);
    VAR_8 = FUNC_2(VAR_2, &VAR_7);

    while ((VAR_5 = VAR_9 = VAR_7.nbytes)) {
        u8 *VAR_10 = VAR_7.iv;
            VAR_9 -= (VAR_5 % VAR_0);
            FUNC_4(VAR_6, VAR_7.dst.virt.addr, VAR_7.src.virt.addr,
                       VAR_10, VAR_9, VAR_1, 0);
        VAR_5 &= VAR_0 - 1;
        VAR_8 = FUNC_0(VAR_2, &VAR_7, VAR_5);
    }

    return VAR_8;
}
