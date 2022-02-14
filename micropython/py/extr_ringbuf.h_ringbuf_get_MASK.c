
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ iget; scalar_t__ iput; int* buf; scalar_t__ size; } ;
typedef TYPE_1__ ringbuf_t ;



__attribute__((used)) static inline int FUNC_0(ringbuf_t *VAR_0) {
    if (VAR_0->iget == VAR_0->iput) {
        return -1;
    }
    uint8_t VAR_1 = VAR_0->buf[VAR_0->iget++];
    if (VAR_0->iget >= VAR_0->size) {
        VAR_0->iget = 0;
    }
    return VAR_1;
}
