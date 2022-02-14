
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nn_sha1 {int buffer_offset; int bytes_hashed; int* state; scalar_t__ is_little_endian; } ;


 int FUNC_0 (struct nn_sha1*,int) ;

uint8_t* FUNC_1 (struct nn_sha1 *VAR_0)
{
    int VAR_1;


    FUNC_0 (VAR_0, 0x80);

    while (VAR_0->buffer_offset != 56)
        FUNC_0 (VAR_0, 0x00);




    FUNC_0 (VAR_0, 0);
    FUNC_0 (VAR_0, 0);
    FUNC_0 (VAR_0, 0);
    FUNC_0 (VAR_0, VAR_0->bytes_hashed >> 29);
    FUNC_0 (VAR_0, VAR_0->bytes_hashed >> 21);
    FUNC_0 (VAR_0, VAR_0->bytes_hashed >> 13);
    FUNC_0 (VAR_0, VAR_0->bytes_hashed >> 5);
    FUNC_0 (VAR_0, VAR_0->bytes_hashed << 3);


    if (VAR_0->is_little_endian) {
        for (VAR_1 = 0; VAR_1 < 5; VAR_1++) {
            VAR_0->state [VAR_1] =
                (((VAR_0->state [VAR_1]) << 24) & 0xFF000000) |
                (((VAR_0->state [VAR_1]) << 8) & 0x00FF0000) |
                (((VAR_0->state [VAR_1]) >> 8) & 0x0000FF00) |
                (((VAR_0->state [VAR_1]) >> 24) & 0x000000FF);
        }
    }


    return (uint8_t*) VAR_0->state;
}
