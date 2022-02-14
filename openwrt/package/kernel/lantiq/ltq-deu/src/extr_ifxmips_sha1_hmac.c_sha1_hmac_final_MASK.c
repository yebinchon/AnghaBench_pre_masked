
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct shash_desc {int tfm; } ;
struct sha1_hmac_ctx {int count; int dbn; int * buffer; } ;
struct TYPE_2__ {int GO; int DGRY; scalar_t__ BSY; } ;
struct deu_hash_t {int DBN; int MR; int D1R; int D2R; int D3R; int D4R; int D5R; TYPE_1__ controlr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 struct sha1_hmac_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct shash_desc*,int const*,int) ;
 int* VAR_6 ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_7, u8 *VAR_8)
{

    struct sha1_hmac_ctx *VAR_9 = FUNC_0(VAR_7->tfm);
    u32 VAR_10, VAR_11;
    u64 VAR_12;
    u8 VAR_13[8] = { 0, };
    static const u8 VAR_14[64] = { 0x80, };
    volatile struct deu_hash_t *VAR_15 = (struct deu_hash_t *) VAR_3;
    unsigned long VAR_16;
    int VAR_17 = 0;
    int VAR_18;
    u32 *VAR_19 = &VAR_6[0];

    VAR_12 = VAR_9->count + 512;
    VAR_13[7] = 0xff & VAR_12;
    VAR_12 >>= 8;
    VAR_13[6] = 0xff & VAR_12;
    VAR_12 >>= 8;
    VAR_13[5] = 0xff & VAR_12;
    VAR_12 >>= 8;
    VAR_13[4] = 0xff & VAR_12;
    VAR_12 >>= 8;
    VAR_13[3] = 0xff & VAR_12;
    VAR_12 >>= 8;
    VAR_13[2] = 0xff & VAR_12;
    VAR_12 >>= 8;
    VAR_13[1] = 0xff & VAR_12;
    VAR_12 >>= 8;
    VAR_13[0] = 0xff & VAR_12;


    VAR_10 = (VAR_9->count >> 3) & 0x3f;
    VAR_11 = (VAR_10 < 56) ? (56 - VAR_10) : ((64 + 56) - VAR_10);
    FUNC_2 (VAR_7, VAR_14, VAR_11);


    FUNC_2 (VAR_7, VAR_13, sizeof VAR_13);

    VAR_1;

    VAR_15->DBN = VAR_9->dbn;


    *VAR_4 = VAR_2;


    while (VAR_15->controlr.BSY) {

    }

    for (VAR_18 = 0; VAR_18 < VAR_9->dbn; VAR_18++)
    {
    for (VAR_17 = 0; VAR_17 < 16; VAR_17++) {
        VAR_15->MR = VAR_19[VAR_17];
    };

    VAR_15->controlr.GO = 1;
    asm("sync");


    while (VAR_15->controlr.BSY) {

    }

    VAR_19 += 16;
}




    while (! VAR_15->controlr.DGRY) {

    }


    *((u32 *) VAR_8 + 0) = VAR_15->D1R;
    *((u32 *) VAR_8 + 1) = VAR_15->D2R;
    *((u32 *) VAR_8 + 2) = VAR_15->D3R;
    *((u32 *) VAR_8 + 3) = VAR_15->D4R;
    *((u32 *) VAR_8 + 4) = VAR_15->D5R;

    FUNC_1(&VAR_9->buffer[0], 0, VAR_5);
    VAR_9->count = 0;


    VAR_0;


    return 0;

}
