
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* e_ident; } ;
typedef TYPE_1__ Elf32_Ehdr ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(int VAR_15, Elf32_Ehdr *VAR_16)
{
 VAR_14 = 0;
 if (FUNC_2(VAR_15, VAR_16, VAR_6) != VAR_6)
  return FUNC_1("missing or incomplete ELF header.");



 if (!(VAR_16->e_ident[VAR_2] == VAR_9 &&
    VAR_16->e_ident[VAR_3] == VAR_10 &&
    VAR_16->e_ident[VAR_4] == VAR_11 &&
    VAR_16->e_ident[VAR_5] == VAR_12))
 {
  FUNC_0("missing ELF signature.");
  return -1;
 }




 if (VAR_16->e_ident[VAR_1] == VAR_7) {
  VAR_13 = 0;
 } else if (VAR_16->e_ident[VAR_1] == VAR_8) {

  VAR_13 = 1;
 }
 else {
  FUNC_0("Unsupported endianness");
  return -1;
 }







 return VAR_16->e_ident[VAR_0];
}
