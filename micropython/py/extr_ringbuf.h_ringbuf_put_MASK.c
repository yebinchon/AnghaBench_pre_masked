
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ iput; scalar_t__ size; scalar_t__ iget; int * buf; } ;
typedef TYPE_1__ ringbuf_t ;



__attribute__((used)) static inline int FUNC_0(ringbuf_t *VAR_0, uint8_t VAR_1) {
    uint32_t VAR_2 = VAR_0->iput + 1;
    if (VAR_2 >= VAR_0->size) {
        VAR_2 = 0;
    }
    if (VAR_2 == VAR_0->iget) {
        return -1;
    }
    VAR_0->buf[VAR_0->iput] = VAR_1;
    VAR_0->iput = VAR_2;
    return 0;
}
