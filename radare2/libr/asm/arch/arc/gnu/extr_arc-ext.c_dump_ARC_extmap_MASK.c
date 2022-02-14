
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ExtInstruction {int major; int minor; int flags; char* name; struct ExtInstruction* next; } ;
struct ExtCoreRegister {char* name; int number; int rw; } ;
struct ExtAuxRegister {char* name; struct ExtAuxRegister* next; int address; } ;
struct TYPE_2__ {char** condCodes; struct ExtCoreRegister* coreRegisters; struct ExtInstruction** instructions; struct ExtAuxRegister* auxRegisters; } ;


 char* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (char*,...) ;

void FUNC_2 (void)
{
    struct ExtAuxRegister* VAR_4;
    int VAR_5;

    VAR_4 = VAR_3.auxRegisters;

    while (VAR_4)
    {
        FUNC_1("AUX : %s %ld\n", VAR_4->name, VAR_4->address);
        VAR_4 = VAR_4->next;
    }

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    {
        struct ExtInstruction *VAR_6;

 for (VAR_6 = VAR_3.instructions[VAR_5]; VAR_6 != ((void*)0); VAR_6 = VAR_6->next) {
  FUNC_1 ("INST: %d %d %x %s\n", VAR_6->major, VAR_6->minor, VAR_6->flags, VAR_6->name);
 }
    }

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
    {
        struct ExtCoreRegister VAR_7 = VAR_3.coreRegisters[VAR_5];

 if (VAR_7.name) {
  FUNC_1 ("CORE: %s %d %s\n", VAR_7.name, VAR_7.number, FUNC_0 (VAR_7.rw));
 }
    }

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
     if (VAR_3.condCodes[VAR_5]) {
      FUNC_1 ("COND: %s\n", VAR_3.condCodes[VAR_5]);
     }
    }
}
