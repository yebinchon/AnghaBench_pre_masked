
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ M; int E_D; int O; scalar_t__ BUS; } ;
struct des_t {int IVHR; int IVLR; int OHR; int OLR; TYPE_1__ controlr; void* ILR; void* IHR; void* K1LR; void* K1HR; void* K2LR; void* K2HR; void* K3LR; void* K3HR; } ;
struct des_ctx {int* expkey; scalar_t__ controlr_M; int key_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;

void FUNC_3 (void *VAR_3, u8 *VAR_4, const u8 *VAR_5,
             u8 *VAR_6, u32 VAR_7, int VAR_8, int VAR_9)
{
        volatile struct des_t *VAR_10 = (struct des_t *) VAR_2;
        struct des_ctx *VAR_11 = VAR_3;
        u32 *VAR_12 = VAR_11->expkey;
        unsigned long VAR_13;

        int VAR_14 = 0;
        int VAR_15 = 0;

        VAR_1;

        VAR_10->controlr.M = VAR_11->controlr_M;
        if (VAR_11->controlr_M == 0)
        {
                VAR_10->K1HR = FUNC_0(*((u32 *) VAR_12 + 0));
                VAR_10->K1LR = FUNC_0(*((u32 *) VAR_12 + 1));

        }
        else {

                switch (VAR_11->key_length) {
                case 24:
                        VAR_10->K3HR = FUNC_0(*((u32 *) VAR_12 + 4));
                        VAR_10->K3LR = FUNC_0(*((u32 *) VAR_12 + 5));


                case 16:
                        VAR_10->K2HR = FUNC_0(*((u32 *) VAR_12 + 2));
                        VAR_10->K2LR = FUNC_0(*((u32 *) VAR_12 + 3));


                case 8:
                        VAR_10->K1HR = FUNC_0(*((u32 *) VAR_12 + 0));
                        VAR_10->K1LR = FUNC_0(*((u32 *) VAR_12 + 1));
                        break;

                default:
                        VAR_0;
                        return;
                }
        }

        VAR_10->controlr.E_D = !VAR_8;
        VAR_10->controlr.O = VAR_9;

        if (VAR_9 > 0) {
                VAR_10->IVHR = FUNC_0(*(u32 *) VAR_6);
                VAR_10->IVLR = FUNC_0(*((u32 *) VAR_6 + 1));
        };

        VAR_15 = VAR_7 / 4;

        for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14 += 2) {
                VAR_10->IHR = FUNC_1(*((u32 *) VAR_5 + VAR_14));
                VAR_10->ILR = FUNC_1(*((u32 *) VAR_5 + 1 + VAR_14));

                while (VAR_10->controlr.BUS) {

                }

                *((u32 *) VAR_4 + 0 + VAR_14) = VAR_10->OHR;
                *((u32 *) VAR_4 + 1 + VAR_14) = VAR_10->OLR;

        }



    if (VAR_9 > 0) {
        *(u32 *) VAR_6 = FUNC_0(VAR_10->IVHR);
        *((u32 *) VAR_6 + 1) = FUNC_0(VAR_10->IVLR);
    };

    VAR_0;
}
