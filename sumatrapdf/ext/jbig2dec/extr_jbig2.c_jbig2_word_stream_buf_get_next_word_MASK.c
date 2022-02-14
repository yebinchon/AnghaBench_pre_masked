
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {size_t size; int* data; } ;
typedef TYPE_1__ Jbig2WordStreamBuf ;
typedef int Jbig2WordStream ;



__attribute__((used)) static int
FUNC_0(Jbig2WordStream *VAR_0, size_t VAR_1, uint32_t *VAR_2)
{
    Jbig2WordStreamBuf *VAR_3 = (Jbig2WordStreamBuf *) VAR_0;
    uint32_t VAR_4 = 0;
    int VAR_5 = 0;

    if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
        return -1;
    if (VAR_1 >= VAR_3->size) {
        *VAR_2 = 0;
        return 0;
    }

    if (VAR_1 < VAR_3->size) {
        VAR_4 |= VAR_3->data[VAR_1] << 24;
        VAR_5++;
    }
    if (VAR_1 + 1 < VAR_3->size) {
        VAR_4 |= VAR_3->data[VAR_1 + 1] << 16;
        VAR_5++;
    }
    if (VAR_1 + 2 < VAR_3->size) {
        VAR_4 |= VAR_3->data[VAR_1 + 2] << 8;
        VAR_5++;
    }
    if (VAR_1 + 3 < VAR_3->size) {
        VAR_4 |= VAR_3->data[VAR_1 + 3];
        VAR_5++;
    }
    *VAR_2 = VAR_4;
    return VAR_5;
}
