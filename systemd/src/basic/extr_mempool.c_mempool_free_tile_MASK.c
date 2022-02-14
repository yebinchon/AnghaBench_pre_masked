
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mempool {void* freelist; } ;



void FUNC_0(struct mempool *VAR_0, void *VAR_1) {
        * (void**) VAR_1 = VAR_0->freelist;
        VAR_0->freelist = VAR_1;
}
