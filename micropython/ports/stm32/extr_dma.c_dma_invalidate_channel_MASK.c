
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t dma_id_t ;
struct TYPE_3__ {size_t id; int sub_instance; } ;
typedef TYPE_1__ dma_descr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int* VAR_1 ;

void FUNC_1(const dma_descr_t *VAR_2) {
    if (VAR_2 != ((void*)0)) {
        dma_id_t VAR_3 = VAR_2->id;

        if ((VAR_1[VAR_3] & 0x7f) == FUNC_0(VAR_2->sub_instance) ) {
            VAR_1[VAR_3] = VAR_0;
        }
    }
}
