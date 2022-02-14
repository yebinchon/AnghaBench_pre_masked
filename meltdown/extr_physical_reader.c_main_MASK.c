
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int physical_offset; } ;
typedef TYPE_1__ libkdump_config_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_1__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__) ;
 size_t FUNC_4 (size_t) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (char*,...) ;
 int VAR_0 ;
 void* FUNC_7 (char*,int *,int ) ;

int FUNC_8(int VAR_1, char *VAR_2[]) {
  size_t VAR_3;
  if (VAR_1 < 2) {
    FUNC_6("Usage: %s <physical address> [<direct physical map>]\n", VAR_2[0]);
    return 0;
  }

  VAR_3 = FUNC_7(VAR_2[1], ((void*)0), 0);

  libkdump_config_t VAR_4;
  VAR_4 = FUNC_2();
  if (VAR_1 > 2) {
    VAR_4.physical_offset = FUNC_7(VAR_2[2], ((void*)0), 0);
  }

  FUNC_3(VAR_4);

  size_t VAR_5 = FUNC_4(VAR_3);

  FUNC_6("\x1b[32;1m[+]\x1b[0m Physical address       : \x1b[33;1m0x%zx\x1b[0m\n", VAR_3);
  FUNC_6("\x1b[32;1m[+]\x1b[0m Physical offset        : \x1b[33;1m0x%zx\x1b[0m\n", VAR_4.physical_offset);
  FUNC_6("\x1b[32;1m[+]\x1b[0m Reading virtual address: \x1b[33;1m0x%zx\x1b[0m\n\n", VAR_5);

  while (1) {
    int VAR_6 = FUNC_5(VAR_5);
    FUNC_6("%c", VAR_6);
    FUNC_0(VAR_0);
    VAR_5++;
  }

  FUNC_1();

  return 0;
}
