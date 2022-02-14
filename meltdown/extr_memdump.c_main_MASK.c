
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int retries; int measurements; void* physical_offset; } ;
typedef TYPE_1__ libkdump_config_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 TYPE_1__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__) ;
 size_t FUNC_5 (size_t) ;
 int FUNC_6 (size_t) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int ,int ) ;
 int VAR_3 ;
 void* FUNC_10 (char*,int *,int ) ;

int FUNC_11(int VAR_4, char *VAR_5[]) {
  size_t VAR_6 = 1ull * 1024ull * 1024ull * 1024ull;
  size_t VAR_7 = (size_t)-1ULL;
  if (VAR_4 >= 2) {
    VAR_6 = FUNC_10(VAR_5[1], ((void*)0), 0);
  }
  if (VAR_4 >= 3) {
    VAR_7 = FUNC_10(VAR_5[2], ((void*)0), 0);
  }

  int VAR_8 = 16;
  int VAR_9 = 1;

  libkdump_config_t VAR_10;
  VAR_10 = FUNC_3();
  VAR_10.retries = 10;
  VAR_10.measurements = 2;
  if (VAR_4 >= 4) {
    VAR_10.physical_offset = FUNC_10(VAR_5[3], ((void*)0), 0);
  }

  FUNC_4(VAR_10);

  size_t VAR_11 = FUNC_5(VAR_6);

  if (VAR_11 == -1ULL) {
    FUNC_0(VAR_3, "Error converting physical to virtual address\n");
    return -1;
  }

  FUNC_8(
      "\x1b[32;1m[+]\x1b[0m Physical address       : \x1b[33;1m0x%zx\x1b[0m\n", VAR_6);
  FUNC_8("\x1b[32;1m[+]\x1b[0m Physical offset        : \x1b[33;1m0x%zx\x1b[0m\n", VAR_10.physical_offset);
  FUNC_8(
      "\x1b[32;1m[+]\x1b[0m Virtual address       : \x1b[33;1m0x%zx\x1b[0m\n", VAR_11);

  if (VAR_8 > VAR_7)
     VAR_8 = VAR_7;

  size_t VAR_12 = 0;
  int VAR_13;
  char *VAR_14 = FUNC_7(VAR_8);

  FUNC_9(VAR_0, VAR_2);

  while (VAR_1 && VAR_12 < VAR_7) {
    int VAR_15 = FUNC_6(VAR_11 + VAR_12);
    VAR_14[VAR_12 % VAR_8] = VAR_15;

    if (VAR_12 % VAR_8 == VAR_8 - 1) {
      int VAR_16 = 1;
      for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
        if (VAR_14[VAR_13]) {
          VAR_16 = 0;
          break;
        }
      }
      if (VAR_16 && VAR_9) {
        VAR_12++;
        continue;
      }

      FUNC_8("%10zx: ", VAR_12 + VAR_6 - (VAR_8 - 1));
      FUNC_8("| ");
      for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
        FUNC_8("%02x ", (unsigned char)VAR_14[VAR_13]);
      }
      FUNC_8("| ");
      for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
        FUNC_8("%c", (VAR_14[VAR_13] >= 32 && VAR_14[VAR_13] <= 126) ? VAR_14[VAR_13] : '.');
      }
      FUNC_8(" |\n");
    }
    VAR_12++;
  }

  FUNC_1(VAR_14);
  FUNC_2();

  return 0;
}
