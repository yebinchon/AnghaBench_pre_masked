
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lzw_state {short bits_buf; short bits_count; int (* user_write_data ) (int ,unsigned char*,int) ;int user_ptr; scalar_t__ code_bits; } ;


 int FUNC_0 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct lzw_state *VAR_0, short VAR_1)
{
    VAR_0->bits_buf |= VAR_1 << VAR_0->bits_count;
    VAR_0->bits_count += VAR_0->code_bits;

    while (VAR_0->bits_count >= 8)
    {
        unsigned char VAR_2 = (unsigned char)VAR_0->bits_buf;
        if (VAR_0->user_write_data(VAR_0->user_ptr, &VAR_2, 1) != 1)
            return 0;
        VAR_0->bits_buf >>= 8;
        VAR_0->bits_count -= 8;
    }

    return 1;
}
