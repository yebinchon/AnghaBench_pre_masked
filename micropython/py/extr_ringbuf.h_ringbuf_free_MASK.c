
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int iget; int iput; } ;
typedef TYPE_1__ ringbuf_t ;



__attribute__((used)) static inline size_t FUNC_0(ringbuf_t *VAR_0) {
    return (VAR_0->size + VAR_0->iget - VAR_0->iput - 1) % VAR_0->size;
}
