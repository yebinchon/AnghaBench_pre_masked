
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int iget; int iput; size_t size; int* buf; } ;
typedef TYPE_1__ ringbuf_t ;



int FUNC_0(ringbuf_t *VAR_0) {
    if (VAR_0->iget == VAR_0->iput) {
        return -1;
    }
    uint32_t VAR_1 = VAR_0->iget + 1;
    if (VAR_1 == VAR_0->size) {
        VAR_1 = 0;
    }
    if (VAR_1 == VAR_0->iput) {
        return -1;
    }
    uint16_t VAR_2 = (VAR_0->buf[VAR_0->iget] << 8) | (VAR_0->buf[VAR_1]);
    VAR_0->iget = VAR_1 + 1;
    if (VAR_0->iget == VAR_0->size) {
        VAR_0->iget = 0;
    }
    return VAR_2;
}
