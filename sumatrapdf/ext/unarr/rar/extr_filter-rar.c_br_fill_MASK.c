
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MemBitReader {int available; scalar_t__ offset; scalar_t__ length; int bits; int* bytes; int at_eof; } ;



__attribute__((used)) static bool FUNC_0(struct MemBitReader *VAR_0, int VAR_1)
{
    while (VAR_0->available < VAR_1 && VAR_0->offset < VAR_0->length) {
        VAR_0->bits = (VAR_0->bits << 8) | VAR_0->bytes[VAR_0->offset++];
        VAR_0->available += 8;
    }
    if (VAR_1 > VAR_0->available) {
        VAR_0->at_eof = 1;
        return 0;
    }
    return 1;
}
