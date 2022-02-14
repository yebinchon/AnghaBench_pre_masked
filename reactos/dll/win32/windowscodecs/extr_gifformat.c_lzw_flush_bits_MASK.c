
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lzw_state {int bits_count; int bits_buf; int (* user_write_data ) (int ,unsigned char*,int) ;int user_ptr; } ;


 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct lzw_state *VAR_0)
{
    unsigned char VAR_1;

    while (VAR_0->bits_count >= 8)
    {
        VAR_1 = (unsigned char)VAR_0->bits_buf;
        if (VAR_0->user_write_data(VAR_0->user_ptr, &VAR_1, 1) != 1)
            return 0;
        VAR_0->bits_buf >>= 8;
        VAR_0->bits_count -= 8;
    }

    if (VAR_0->bits_count)
    {
        static const char VAR_2[8] = { 0x00,0x01,0x03,0x07,0x0f,0x1f,0x3f,0x7f };

        VAR_1 = (unsigned char)VAR_0->bits_buf & VAR_2[VAR_0->bits_count];
        if (VAR_0->user_write_data(VAR_0->user_ptr, &VAR_1, 1) != 1)
            return 0;
    }

    VAR_0->bits_buf = 0;
    VAR_0->bits_count = 0;

    return 1;
}
