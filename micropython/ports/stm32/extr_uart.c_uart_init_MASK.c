
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint ;
struct TYPE_23__ {int uart_id; int is_enabled; int attached_to_repl; int char_mask; int * mp_irq_obj; scalar_t__ mp_irq_trigger; int char_width; TYPE_3__* uartx; } ;
typedef TYPE_2__ pyb_uart_obj_t ;
typedef int pin_obj_t ;
typedef int huart ;
struct TYPE_24__ {int CR3; int CR2; int CR1; } ;
typedef TYPE_3__ USART_TypeDef ;
struct TYPE_22__ {int OverSampling; scalar_t__ HwFlowCtl; int Mode; scalar_t__ Parity; scalar_t__ StopBits; scalar_t__ WordLength; scalar_t__ BaudRate; } ;
struct TYPE_25__ {TYPE_1__ Init; TYPE_3__* Instance; } ;
typedef TYPE_4__ UART_HandleTypeDef ;
typedef int IRQn_Type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 int * VAR_25 ;
 int * VAR_26 ;
 int * VAR_27 ;
 int * VAR_28 ;
 int * VAR_29 ;
 int * VAR_30 ;
 int * VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_3 (int ,int ) ;
 TYPE_3__* VAR_34 ;
 int VAR_35 ;
 TYPE_3__* VAR_36 ;
 int VAR_37 ;
 TYPE_3__* VAR_38 ;
 int VAR_39 ;
 TYPE_3__* VAR_40 ;
 int VAR_41 ;
 TYPE_3__* VAR_42 ;
 int VAR_43 ;
 TYPE_3__* VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 TYPE_3__* VAR_52 ;
 int VAR_53 ;
 TYPE_3__* VAR_54 ;
 int VAR_55 ;
 TYPE_3__* VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 TYPE_3__* VAR_59 ;
 TYPE_3__* VAR_60 ;
 TYPE_3__* VAR_61 ;
 int VAR_62 ;
 TYPE_3__* VAR_63 ;
 TYPE_3__* VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (TYPE_4__*,int ,int) ;
 int FUNC_19 (int const*,scalar_t__,scalar_t__,int ,int) ;

bool FUNC_20(pyb_uart_obj_t *VAR_68,
    uint32_t VAR_69, uint32_t VAR_70, uint32_t VAR_71, uint32_t VAR_72, uint32_t VAR_73) {
    USART_TypeDef *VAR_74;
    IRQn_Type VAR_75;
    int VAR_76;

    const pin_obj_t *VAR_77[4] = {0};

    switch (VAR_68->uart_id) {
        default:

            return 0;
    }

    uint32_t VAR_78 = VAR_32;
    uint32_t VAR_79 = VAR_33;

    for (uint VAR_80 = 0; VAR_80 < 4; VAR_80++) {
        if (VAR_77[VAR_80] != ((void*)0)) {
            bool VAR_81 = FUNC_19(VAR_77[VAR_80], VAR_78, VAR_79, VAR_0, VAR_76);
            if (!VAR_81) {
                return 0;
            }
        }
    }

    VAR_68->uartx = VAR_74;


    UART_HandleTypeDef VAR_82;
    FUNC_18(&VAR_82, 0, sizeof(VAR_82));
    VAR_82.Instance = VAR_74;
    VAR_82.Init.BaudRate = VAR_69;
    VAR_82.Init.WordLength = VAR_70;
    VAR_82.Init.StopBits = VAR_72;
    VAR_82.Init.Parity = VAR_71;
    VAR_82.Init.Mode = VAR_48;
    VAR_82.Init.HwFlowCtl = VAR_73;
    VAR_82.Init.OverSampling = VAR_49;
    FUNC_1(&VAR_82);


    VAR_68->uartx->CR1 &= ~VAR_65;
    VAR_68->uartx->CR2 &= ~VAR_66;
    VAR_68->uartx->CR3 &= ~VAR_67;
    FUNC_3(FUNC_2(VAR_75), VAR_3);
    FUNC_0(VAR_75);

    VAR_68->is_enabled = 1;
    VAR_68->attached_to_repl = 0;

    if (VAR_70 == VAR_51 && VAR_71 == VAR_50) {
        VAR_68->char_mask = 0x1ff;
        VAR_68->char_width = VAR_2;
    } else {
        if (VAR_70 == VAR_51 || VAR_71 == VAR_50) {
            VAR_68->char_mask = 0xff;
        } else {
            VAR_68->char_mask = 0x7f;
        }
        VAR_68->char_width = VAR_1;
    }

    VAR_68->mp_irq_trigger = 0;
    VAR_68->mp_irq_obj = ((void*)0);

    return 1;
}
