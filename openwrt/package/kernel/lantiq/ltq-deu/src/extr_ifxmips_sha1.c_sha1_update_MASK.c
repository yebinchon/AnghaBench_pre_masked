
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct shash_desc {int dummy; } ;
struct sha1_ctx {int count; int * buffer; int state; } ;


 int FUNC_0 (int *,int const*,unsigned int) ;
 int FUNC_1 (struct sha1_ctx*,int ,int const*) ;
 struct sha1_ctx* FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_3(struct shash_desc * VAR_0, const u8 *VAR_1,
            unsigned int VAR_2)
{
    struct sha1_ctx *VAR_3 = FUNC_2(VAR_0);
    unsigned int VAR_4, VAR_5;

    VAR_5 = (VAR_3->count >> 3) & 0x3f;
    VAR_3->count += VAR_2 << 3;

    if ((VAR_5 + VAR_2) > 63) {
        FUNC_0 (&VAR_3->buffer[VAR_5], VAR_1, (VAR_4 = 64 - VAR_5));
        FUNC_1 (VAR_3, VAR_3->state, (const u32 *)VAR_3->buffer);
        for (; VAR_4 + 63 < VAR_2; VAR_4 += 64) {
            FUNC_1 (VAR_3, VAR_3->state, (const u32 *)&VAR_1[VAR_4]);
        }

        VAR_5 = 0;
    }
    else
        VAR_4 = 0;

    FUNC_0 (&VAR_3->buffer[VAR_5], &VAR_1[VAR_4], VAR_2 - VAR_4);
    return 0;
}
