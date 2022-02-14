
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int iput; int size; int iget; int* buf; } ;
typedef TYPE_1__ ringbuf_t ;



int FUNC_0(ringbuf_t *VAR_0, uint16_t VAR_1) {
    uint32_t VAR_2 = VAR_0->iput + 1;
    if (VAR_2 == VAR_0->size) {
        VAR_2 = 0;
    }
    if (VAR_2 == VAR_0->iget) {
        return -1;
    }
    uint32_t VAR_3 = VAR_2 + 1;
    if (VAR_3 == VAR_0->size) {
        VAR_3 = 0;
    }
    if (VAR_3 == VAR_0->iget) {
        return -1;
    }
    VAR_0->buf[VAR_0->iput] = (VAR_1 >> 8) & 0xff;
    VAR_0->buf[VAR_2] = VAR_1 & 0xff;
    VAR_0->iput = VAR_3;
    return 0;
}
