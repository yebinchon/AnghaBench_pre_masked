
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct shash_desc {int tfm; } ;
struct sha1_hmac_ctx {int count; int * buffer; } ;


 struct sha1_hmac_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int *,int const*,unsigned int) ;
 int FUNC_2 (struct shash_desc*,int const*) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_0, const u8 *VAR_1,
            unsigned int VAR_2)
{
    struct sha1_hmac_ctx *VAR_3 = FUNC_0(VAR_0->tfm);
    unsigned int VAR_4, VAR_5;

    VAR_5 = (VAR_3->count >> 3) & 0x3f;
    VAR_3->count += VAR_2 << 3;


    if ((VAR_5 + VAR_2) > 63) {
        FUNC_1 (&VAR_3->buffer[VAR_5], VAR_1, (VAR_4 = 64 - VAR_5));
        FUNC_2 (VAR_0, (const u32 *)VAR_3->buffer);
        for (; VAR_4 + 63 < VAR_2; VAR_4 += 64) {
            FUNC_2 (VAR_0, (const u32 *)&VAR_1[VAR_4]);
        }

        VAR_5 = 0;
    }
    else
        VAR_4 = 0;

    FUNC_1 (&VAR_3->buffer[VAR_5], &VAR_1[VAR_4], VAR_2 - VAR_4);
    return 0;
}
