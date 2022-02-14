
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RList ;
typedef int RBinFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int VAR_22 ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static RList* FUNC_2(RBinFile *VAR_23) {
 RList *VAR_24 = ((void*)0);
 if (!(VAR_24 = FUNC_1 (VAR_22))) {
  return ((void*)0);
 }
 FUNC_0 (VAR_24, "NMI_VECTOR_START_ADDRESS", VAR_4,2);
 FUNC_0 (VAR_24, "RESET_VECTOR_START_ADDRESS", VAR_13,2);
 FUNC_0 (VAR_24, "IRQ_VECTOR_START_ADDRESS", VAR_0,2);
 FUNC_0 (VAR_24, "PPU_CTRL_REG1", VAR_6,0x1);
 FUNC_0 (VAR_24, "PPU_CTRL_REG2", VAR_7,0x1);
 FUNC_0 (VAR_24, "PPU_STATUS", VAR_12,0x1);
 FUNC_0 (VAR_24, "PPU_SPR_ADDR", VAR_10,0x1);
 FUNC_0 (VAR_24, "PPU_SPR_DATA", VAR_11,0x1);
 FUNC_0 (VAR_24, "PPU_SCROLL_REG", VAR_9,0x1);
 FUNC_0 (VAR_24, "PPU_ADDRESS", VAR_5,0x1);
 FUNC_0 (VAR_24, "PPU_DATA", VAR_8,0x1);
 FUNC_0 (VAR_24, "SND_REGISTER", VAR_17,0x15);
 FUNC_0 (VAR_24, "SND_SQUARE1_REG", VAR_18,0x4);
 FUNC_0 (VAR_24, "SND_SQUARE2_REG", VAR_19,0x4);
 FUNC_0 (VAR_24, "SND_TRIANGLE_REG", VAR_20,0x4);
 FUNC_0 (VAR_24, "SND_NOISE_REG", VAR_16,0x2);
 FUNC_0 (VAR_24, "SND_DELTA_REG", VAR_14,0x4);
 FUNC_0 (VAR_24, "SND_MASTERCTRL_REG", VAR_15,0x5);
 FUNC_0 (VAR_24, "SPR_DMA", VAR_21,0x2);
 FUNC_0 (VAR_24, "JOYPAD_PORT", VAR_1,0x1);
 FUNC_0 (VAR_24, "JOYPAD_PORT1", VAR_2,0x1);
 FUNC_0 (VAR_24, "JOYPAD_PORT2", VAR_3,0x1);
 return VAR_24;
}
