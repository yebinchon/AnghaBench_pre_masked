
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t id; } ;
typedef TYPE_1__ dma_descr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 int ** VAR_0 ;
 int * VAR_1 ;

void FUNC_2(const dma_descr_t *VAR_2) {
    if (VAR_2 != ((void*)0)) {

        FUNC_0(VAR_1[VAR_2->id]);

        VAR_0[VAR_2->id] = ((void*)0);

        FUNC_1(VAR_2->id);
    }
}
