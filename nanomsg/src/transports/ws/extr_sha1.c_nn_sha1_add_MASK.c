
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nn_sha1 {int* buffer; int buffer_offset; int* state; scalar_t__ is_little_endian; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1 (struct nn_sha1 *VAR_1, uint8_t VAR_2)
{
    uint8_t VAR_3;
    uint32_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    uint8_t * const VAR_10 = (uint8_t*) VAR_1->buffer;

    if (VAR_1->is_little_endian)
        VAR_10 [VAR_1->buffer_offset ^ 3] = VAR_2;
    else
        VAR_10 [VAR_1->buffer_offset] = VAR_2;

    VAR_1->buffer_offset++;
    if (VAR_1->buffer_offset == VAR_0) {
        VAR_4 = VAR_1->state [0];
        VAR_5 = VAR_1->state [1];
        VAR_6 = VAR_1->state [2];
        VAR_7 = VAR_1->state [3];
        VAR_8 = VAR_1->state [4];
        for (VAR_3 = 0; VAR_3 < 80; VAR_3++) {
            if (VAR_3 >= 16) {
                VAR_9 = VAR_1->buffer [(VAR_3 + 13) & 15] ^
                    VAR_1->buffer [(VAR_3 + 8) & 15] ^
                    VAR_1->buffer [(VAR_3 + 2) & 15] ^
                    VAR_1->buffer [VAR_3 & 15];
                VAR_1->buffer [VAR_3 & 15] = FUNC_0 (VAR_9, 1);
            }

            if (VAR_3 < 20)
                VAR_9 = (VAR_7 ^ (VAR_5 & (VAR_6 ^ VAR_7))) + 0x5A827999;
            else if (VAR_3 < 40)
                VAR_9 = (VAR_5 ^ VAR_6 ^ VAR_7) + 0x6ED9EBA1;
            else if (VAR_3 < 60)
                VAR_9 = ((VAR_5 & VAR_6) | (VAR_7 & (VAR_5 | VAR_6))) + 0x8F1BBCDC;
            else
                VAR_9 = (VAR_5 ^ VAR_6 ^ VAR_7) + 0xCA62C1D6;

            VAR_9 += FUNC_0 (VAR_4, 5) + VAR_8 + VAR_1->buffer [VAR_3 & 15];
            VAR_8 = VAR_7;
            VAR_7 = VAR_6;
            VAR_6 = FUNC_0 (VAR_5, 30);
            VAR_5 = VAR_4;
            VAR_4 = VAR_9;
        }

        VAR_1->state [0] += VAR_4;
        VAR_1->state [1] += VAR_5;
        VAR_1->state [2] += VAR_6;
        VAR_1->state [3] += VAR_7;
        VAR_1->state [4] += VAR_8;

        VAR_1->buffer_offset = 0;
    }
}
