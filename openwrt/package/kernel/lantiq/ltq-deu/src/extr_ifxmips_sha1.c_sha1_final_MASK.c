
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct shash_desc {int dummy; } ;
struct sha1_ctx {int count; } ;
struct deu_hash_t {int D1R; int D2R; int D3R; int D4R; int D5R; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sha1_ctx*,int ,int) ;
 int FUNC_1 (struct shash_desc*,int const*,int) ;
 struct sha1_ctx* FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_3, u8 *VAR_4)
{
    struct sha1_ctx *VAR_5 = FUNC_2(VAR_3);
    u32 VAR_6, VAR_7;
    u64 VAR_8;
    u8 VAR_9[8] = { 0, };
    static const u8 VAR_10[64] = { 0x80, };
    volatile struct deu_hash_t *VAR_11 = (struct deu_hash_t *) VAR_2;
    unsigned long VAR_12;

    VAR_8 = VAR_5->count;
    VAR_9[7] = 0xff & VAR_8;
    VAR_8 >>= 8;
    VAR_9[6] = 0xff & VAR_8;
    VAR_8 >>= 8;
    VAR_9[5] = 0xff & VAR_8;
    VAR_8 >>= 8;
    VAR_9[4] = 0xff & VAR_8;
    VAR_8 >>= 8;
    VAR_9[3] = 0xff & VAR_8;
    VAR_8 >>= 8;
    VAR_9[2] = 0xff & VAR_8;
    VAR_8 >>= 8;
    VAR_9[1] = 0xff & VAR_8;
    VAR_8 >>= 8;
    VAR_9[0] = 0xff & VAR_8;


    VAR_6 = (VAR_5->count >> 3) & 0x3f;
    VAR_7 = (VAR_6 < 56) ? (56 - VAR_6) : ((64 + 56) - VAR_6);
    FUNC_1 (VAR_3, VAR_10, VAR_7);


    FUNC_1 (VAR_3, VAR_9, sizeof VAR_9);

    VAR_1;

    *((u32 *) VAR_4 + 0) = VAR_11->D1R;
    *((u32 *) VAR_4 + 1) = VAR_11->D2R;
    *((u32 *) VAR_4 + 2) = VAR_11->D3R;
    *((u32 *) VAR_4 + 3) = VAR_11->D4R;
    *((u32 *) VAR_4 + 4) = VAR_11->D5R;

    VAR_0;


    FUNC_0 (VAR_5, 0, sizeof *VAR_5);

    return 0;
}
