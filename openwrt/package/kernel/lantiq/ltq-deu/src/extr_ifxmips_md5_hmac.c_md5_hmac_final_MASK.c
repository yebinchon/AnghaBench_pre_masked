
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef char u32 ;
struct shash_desc {int tfm; } ;
struct md5_hmac_ctx {int byte_count; int* block; int dbn; char* hash; } ;
struct TYPE_2__ {int GO; int DGRY; scalar_t__ BSY; } ;
struct deu_hash_t {int DBN; char MR; char D1R; char D2R; char D3R; char D4R; char D5R; TYPE_1__ controlr; } ;
typedef int MD5_HASH_WORDS ;
typedef int MD5_BLOCK_WORDS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 struct md5_hmac_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct shash_desc*,int*) ;
 int FUNC_3 (char*,int,int) ;
 char* VAR_5 ;

__attribute__((used)) static int FUNC_4(struct shash_desc *VAR_6, u8 *VAR_7)
{
    struct md5_hmac_ctx *VAR_8 = FUNC_0(VAR_6->tfm);
    const unsigned int VAR_9 = VAR_8->byte_count & 0x3f;
    char *VAR_10 = (char *)VAR_8->block + VAR_9;
    int VAR_11 = 56 - (VAR_9 + 1);
    volatile struct deu_hash_t *VAR_12 = (struct deu_hash_t *) VAR_2;
    unsigned long VAR_13;
    int VAR_14 = 0;
    int VAR_15;
    u32 *VAR_16 = &VAR_5[0];


    *VAR_10++ = 0x80;
    if (VAR_11 < 0) {
        FUNC_3(VAR_10, 0x00, VAR_11 + sizeof (u64));
        FUNC_2(VAR_6, VAR_8->block);
        VAR_10 = (char *)VAR_8->block;
        VAR_11 = 56;
    }

    FUNC_3(VAR_10, 0, VAR_11);
    VAR_8->block[14] = FUNC_1((VAR_8->byte_count + 64) << 3);
    VAR_8->block[15] = 0x00000000;

    FUNC_2(VAR_6, VAR_8->block);

    VAR_1;


    VAR_12->DBN = VAR_8->dbn;
    asm("sync");

    *VAR_3 = 0x0703002D;


    while (VAR_12->controlr.BSY) {

    }

    for (VAR_15 = 0; VAR_15 < VAR_8->dbn; VAR_15++)
    {
        for (VAR_14 = 0; VAR_14 < 16; VAR_14++) {
            VAR_12->MR = VAR_16[VAR_14];
        };

        VAR_12->controlr.GO = 1;
        asm("sync");


        while (VAR_12->controlr.BSY) {

        }

        VAR_16 += 16;
}




    while (! VAR_12->controlr.DGRY) {

    }


    *((u32 *) VAR_7 + 0) = VAR_12->D1R;
    *((u32 *) VAR_7 + 1) = VAR_12->D2R;
    *((u32 *) VAR_7 + 2) = VAR_12->D3R;
    *((u32 *) VAR_7 + 3) = VAR_12->D4R;
    *((u32 *) VAR_7 + 4) = VAR_12->D5R;


    VAR_8->byte_count = 0;
    FUNC_3(&VAR_8->hash[0], 0, sizeof(MD5_HASH_WORDS));
    FUNC_3(&VAR_8->block[0], 0, sizeof(MD5_BLOCK_WORDS));
    FUNC_3(&VAR_5[0], 0, VAR_4);

    VAR_0;


   return 0;
}
