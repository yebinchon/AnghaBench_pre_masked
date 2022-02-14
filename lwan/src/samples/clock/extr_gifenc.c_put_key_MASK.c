
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int offset; int partial; int* buffer; int buf; } ;
typedef TYPE_1__ ge_GIF ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int*,int) ;

__attribute__((used)) static void FUNC_2(ge_GIF *VAR_0, uint16_t VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5;

    VAR_3 = VAR_0->offset / 8;
    VAR_4 = VAR_0->offset % 8;
    VAR_0->partial |= ((uint32_t)VAR_1) << VAR_4;
    VAR_5 = VAR_4 + VAR_2;

    while (VAR_5 >= 8) {
        VAR_0->buffer[VAR_3++] = VAR_0->partial & 0xFF;

        if (VAR_3 == 0xFF) {
            FUNC_0(VAR_0->buf, 0xff);
            FUNC_1(VAR_0->buf, VAR_0->buffer, 0xff);

            VAR_3 = 0;
        }

        VAR_0->partial >>= 8;
        VAR_5 -= 8;
    }
    VAR_0->offset = (VAR_0->offset + VAR_2) % (0xFF * 8);
}
