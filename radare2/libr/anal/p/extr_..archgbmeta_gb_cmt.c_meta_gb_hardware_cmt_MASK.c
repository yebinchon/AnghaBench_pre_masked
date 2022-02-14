
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int RAnal ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,char*) ;

void FUNC_1(RAnal *VAR_1, const ut8 VAR_2, ut64 VAR_3) {
 switch(VAR_2)
 {
  case 0:
   FUNC_0(VAR_1, VAR_0, VAR_3, "JOYPAD");
   break;
  case 1:
   FUNC_0(VAR_1, VAR_0, VAR_3, "Serial transfer data");
   break;
  case 2:
   FUNC_0(VAR_1, VAR_0, VAR_3, "Serial transfer data - Ctl");
   break;
  case 4:
   FUNC_0(VAR_1, VAR_0, VAR_3, "DIV");
   break;
  case 5:
   FUNC_0(VAR_1, VAR_0, VAR_3, "TIMA");
   break;
  case 6:
   FUNC_0(VAR_1, VAR_0, VAR_3, "TMA");
   break;
  case 7:
   FUNC_0(VAR_1, VAR_0, VAR_3, "TAC");
   break;
  case 0x0f:
   FUNC_0(VAR_1, VAR_0, VAR_3, "Interrupt Flag");
   break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
   FUNC_0(VAR_1, VAR_0, VAR_3, "SOUND");
   break;
  case 0x30:
   FUNC_0(VAR_1, VAR_0, VAR_3, "Wave Pattern RAM/SOUND");
   break;
  case 0x40:
   FUNC_0(VAR_1, VAR_0, VAR_3, "LCDC");
   break;
  case 0x41:
   FUNC_0(VAR_1, VAR_0, VAR_3, "LCDC - STAT");
   break;
  case 0x42:
   FUNC_0(VAR_1, VAR_0, VAR_3, "LCDC - Scroll y");
   break;
  case 0x43:
   FUNC_0(VAR_1, VAR_0, VAR_3, "LCDC - Scroll x");
   break;
  case 0x44:
   FUNC_0(VAR_1, VAR_0, VAR_3, "LCDC - y cord");
   break;
  case 0x45:
   FUNC_0(VAR_1, VAR_0, VAR_3, "LCDC - y cord cmp");
   break;
  case 0x46:
   FUNC_0(VAR_1, VAR_0, VAR_3, "DMA");
   break;
  case 0xff:
   FUNC_0(VAR_1, VAR_0, VAR_3, "Interrupt Enable Flag");

 }
}
