
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef size_t dma_id_t ;
struct TYPE_11__ {size_t id; int sub_instance; } ;
typedef TYPE_1__ dma_descr_t ;
struct TYPE_12__ {scalar_t__ Instance; size_t ChannelIndex; int DmaBaseAddress; int State; } ;
typedef TYPE_2__ DMA_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 size_t VAR_6 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (size_t) ;
 TYPE_2__** VAR_7 ;
 int FUNC_9 (TYPE_2__*,TYPE_1__ const*,int ,void*) ;
 int * VAR_8 ;
 scalar_t__* VAR_9 ;
 int FUNC_10 (TYPE_2__*,int ,int) ;

void FUNC_11(DMA_HandleTypeDef *VAR_10, const dma_descr_t *VAR_11, uint32_t VAR_12, void *VAR_13){



    FUNC_10(VAR_10, 0, sizeof(*VAR_10));

    if (VAR_11 != ((void*)0)) {
        dma_id_t VAR_14 = VAR_11->id;

        FUNC_9(VAR_10, VAR_11, VAR_12, VAR_13);

        VAR_7[VAR_14] = VAR_10;

        FUNC_8(VAR_14);
        uint8_t VAR_15 = FUNC_0(VAR_11->sub_instance) | (VAR_12 == VAR_3) << 7;
        if (VAR_9[VAR_14] != VAR_15) {
            VAR_9[VAR_14] = VAR_15;



            FUNC_1(VAR_10);
            FUNC_2(VAR_10);
            FUNC_5(FUNC_4(VAR_8[VAR_14]), VAR_5);







        } else {

            VAR_10->State = VAR_4;
        }


        FUNC_3(VAR_8[VAR_14]);
    }
}
