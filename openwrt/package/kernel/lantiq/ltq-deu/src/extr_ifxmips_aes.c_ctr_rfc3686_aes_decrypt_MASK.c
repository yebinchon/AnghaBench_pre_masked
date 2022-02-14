
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
struct blkcipher_walk {unsigned int nbytes; TYPE_4__ src; TYPE_2__ dst; int iv; } ;
struct blkcipher_desc {int tfm; } ;
struct aes_ctx {int nonce; } ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_1 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_3 (int) ;
 struct aes_ctx* FUNC_4 (int ) ;
 int FUNC_5 (struct aes_ctx*,int ,int ,int *,unsigned int,int ,int ) ;
 int FUNC_6 (int *,int ,int) ;

int FUNC_7(struct blkcipher_desc *VAR_5,
               struct scatterlist *VAR_6, struct scatterlist *VAR_7,
               unsigned int VAR_8)
{
    struct aes_ctx *VAR_9 = FUNC_4(VAR_5->tfm);
    struct blkcipher_walk VAR_10;
    int VAR_11, VAR_12 = VAR_8;
    u8 VAR_13[16];

    FUNC_1(&VAR_10, VAR_6, VAR_7, VAR_8);
    VAR_11 = FUNC_2(VAR_5, &VAR_10);


    FUNC_6(VAR_13, VAR_9->nonce, VAR_4);
    FUNC_6(VAR_13 + VAR_4, VAR_10.iv, VAR_3);


    *(__be32 *)(VAR_13 + VAR_4 + VAR_3) =
        FUNC_3(1);


    if (VAR_8 == VAR_10.nbytes) {
 FUNC_5(VAR_9, VAR_10.dst.virt.addr, VAR_10.src.virt.addr,
   VAR_13, VAR_8, VAR_2, 0);
 VAR_8 -= VAR_10.nbytes;
 VAR_11 = FUNC_0(VAR_5, &VAR_10, VAR_8);
 return VAR_11;
    }

    while ((VAR_8 = VAR_10.nbytes) % (VAR_10.nbytes >= VAR_0)) {
 FUNC_5(VAR_9, VAR_10.dst.virt.addr, VAR_10.src.virt.addr,
   VAR_13, VAR_8, VAR_1, 0);

 VAR_8 -= VAR_10.nbytes;
 VAR_12 -= VAR_10.nbytes;
 VAR_11 = FUNC_0(VAR_5, &VAR_10, VAR_8);
    }


    if (VAR_10.nbytes) {
 FUNC_5(VAR_9, VAR_10.dst.virt.addr, VAR_10.src.virt.addr,
   VAR_13, VAR_10.nbytes, VAR_2, 0);
 VAR_11 = FUNC_0(VAR_5, &VAR_10, 0);
    }

    return VAR_11;
}
