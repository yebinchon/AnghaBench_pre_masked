
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int uiFirst; scalar_t__ pvElements; } ;
typedef int SocketFifoElement_t ;
typedef TYPE_1__ FIFO_t ;


 int FUNC_0 (void* const,int *,int) ;

__attribute__((used)) static void FUNC_1 (void * const VAR_0, void * const VAR_1) {
    if ((VAR_0 != ((void*)0)) && (((void*)0) != VAR_1)) {
        unsigned int VAR_2 = ((FIFO_t *)VAR_0)->uiFirst;
        FUNC_0 (VAR_1, &((SocketFifoElement_t *)((FIFO_t *)VAR_0)->pvElements)[VAR_2], sizeof(SocketFifoElement_t));
    }
}
