
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mips_arch_choice {int hwr_names; scalar_t__ cp0sel_names_len; int * cp0sel_names; int cp0_names; int isa; int processor; } ;
struct disassemble_info {scalar_t__ flavour; int mach; TYPE_1__* section; } ;
struct TYPE_4__ {int isa; int processor; } ;
struct TYPE_3__ {int owner; } ;
typedef int Elf_Internal_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct mips_arch_choice* FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_2__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_3 (struct disassemble_info *VAR_19)
{
  const struct mips_arch_choice *VAR_20;



  VAR_14 = VAR_1;
  VAR_15 = VAR_0;
  VAR_9 = VAR_11;
  VAR_7 = VAR_8;
  VAR_3 = VAR_4;
  VAR_5 = ((void*)0);
  VAR_6 = 0;
  VAR_12 = VAR_13;
  VAR_17 = 0;


  if (VAR_19->flavour == VAR_2 && VAR_19->section != ((void*)0))
    {
      Elf_Internal_Ehdr *VAR_21;

      VAR_21 = FUNC_1 (VAR_19->section->owner);
      if (FUNC_2 (VAR_21)) {
       VAR_9 = VAR_10;
      }
    }





  VAR_18 = VAR_16.processor;
  VAR_14 = VAR_16.isa;
}
