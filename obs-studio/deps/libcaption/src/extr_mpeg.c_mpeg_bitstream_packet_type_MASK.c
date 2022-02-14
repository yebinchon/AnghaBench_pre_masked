
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int size; int* data; } ;
typedef TYPE_1__ mpeg_bitstream_t ;






uint8_t FUNC_0(mpeg_bitstream_t* VAR_0, unsigned VAR_1)
{
    if (4 > VAR_0->size) {
        return 0;
    }
    switch (VAR_1) {
    case 130:
        return VAR_0->data[3];
    case 129:
        return VAR_0->data[3] & 0x1F;
    case 128:
        return (VAR_0->data[3] >> 1) & 0x3F;
    default:
        return 0;
    }
}
