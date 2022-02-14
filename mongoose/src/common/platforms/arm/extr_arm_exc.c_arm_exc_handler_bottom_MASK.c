
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct arm_gdb_reg_file {int fpscr; scalar_t__ d; int psp; int msp; int xpsr; int pc; int lr; int sp; int * r; } ;
struct arm_exc_frame {int s; int fpscr; } ;
struct TYPE_2__ {scalar_t__ CTRL; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int,int ) ;
 struct arm_gdb_reg_file* VAR_1 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,char*,int) ;

void FUNC_12(uint8_t VAR_2, struct arm_exc_frame *VAR_3,
                            struct arm_gdb_reg_file *VAR_4) {
  char VAR_5[8];
  const char *VAR_6;



  FUNC_8();
  VAR_1 = VAR_4;
  switch (VAR_2) {
    case 0:
      VAR_6 = "ThreadMode";
      break;
    case 1:
    case 7:
    case 8:
    case 9:
    case 10:
    case 13:
      VAR_6 = "Reserved";
      break;
    case 2:
      VAR_6 = "NMI";
      break;
    case 3:
      VAR_6 = "HardFault";
      break;
    case 4:
      VAR_6 = "MemManage";
      break;
    case 5:
      VAR_6 = "BusFault";
      break;
    case 6:
      VAR_6 = "UsageFault";
      break;
    case 11:
      VAR_6 = "SVCall";
      break;
    case 12:
      VAR_6 = "ReservedDebug";
      break;
    case 14:
      VAR_6 = "PendSV";
      break;
    case 15:
      VAR_6 = "SysTick";
      break;
    default: {

      FUNC_11(VAR_5, "IRQ%u", VAR_2 - 16);

      VAR_6 = VAR_5;
    }
  }
  FUNC_3("\n\n--- Exception %u (%s) ---\n", VAR_2, VAR_6);
  if (VAR_4 != ((void*)0)) {
    FUNC_3(
        "  R%d:  0x%08lx  R%d:  0x%08lx  R%d:  0x%08lx  R%d:  0x%08lx\n", 0,
        VAR_4->r[0], 1, VAR_4->r[1], 2, VAR_4->r[2], 3, VAR_4->r[3]);
    FUNC_3(
        "  R%d:  0x%08lx  R%d:  0x%08lx  R%d:  0x%08lx  R%d:  0x%08lx\n", 4,
        VAR_4->r[4], 5, VAR_4->r[5], 6, VAR_4->r[6], 7, VAR_4->r[7]);
    FUNC_3("  R8:  0x%08lx  R9:  0x%08lx  R10: 0x%08lx  R11: 0x%08lx\n",
                   VAR_4->r[8], VAR_4->r[9], VAR_4->r[10], VAR_4->r[11]);
    FUNC_3("  R12: 0x%08lx  SP:  0x%08lx   LR: 0x%08lx  PC:  0x%08lx\n",
                   VAR_4->r[12], VAR_4->sp, VAR_4->lr, VAR_4->pc);
    FUNC_3("  PSR: 0x%08lx MSP:  0x%08lx  PSP: 0x%08lx\n", VAR_4->xpsr,
                   VAR_4->msp, VAR_4->psp);
  }
  FUNC_3("Rebooting\n");
  FUNC_6();

  (void) VAR_3;
}
