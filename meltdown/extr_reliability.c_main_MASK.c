
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int retries; int measurements; size_t physical_offset; } ;
typedef TYPE_1__ libkdump_config_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 TYPE_1__ FUNC_4 () ;
 int FUNC_5 (TYPE_1__) ;
 size_t FUNC_6 (size_t) ;
 int FUNC_7 (size_t) ;
 size_t FUNC_8 (size_t) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int VAR_1 ;
 size_t FUNC_12 (char*,int *,int ) ;
 int FUNC_13 (int *) ;

int FUNC_14(int VAR_2, char *VAR_3[]) {
  size_t VAR_4[4096];
  libkdump_config_t VAR_5;
  size_t VAR_6 = VAR_0;
  int VAR_7 = 0;
  unsigned char VAR_8 = 'X';

  if(VAR_2 == 2) {
    VAR_6 = FUNC_12(VAR_3[1], ((void*)0), 0);
    FUNC_9("\x1b[33;1m[+]\x1b[0m Setting physical offset to 0x%zx\n", VAR_6);
  }

  FUNC_3(0);

  VAR_5 = FUNC_4();
  VAR_5.retries = 10;
  VAR_5.measurements = 2;
  VAR_5.physical_offset = VAR_6;

  FUNC_5(VAR_5);

  size_t VAR_9 = (size_t)(VAR_4 + 2048);
  *(char*)VAR_9 = VAR_8;

  size_t VAR_10 = FUNC_8(VAR_9);
  if (!VAR_10) {
    FUNC_9("\x1b[31;1m[!]\x1b[0m Program requires root privileges (or read access to /proc/<pid>/pagemap)!\n");
    FUNC_0(1);
  }

  FUNC_11(FUNC_13(((void*)0)));

  size_t VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
  size_t VAR_14 = FUNC_6(VAR_10);
  while (1) {
    *(volatile unsigned char*)VAR_9 = VAR_8;

    int VAR_15 = FUNC_7(VAR_14);
    if (VAR_15 == VAR_8) {
      VAR_11++;
    } else if(VAR_15 != 0) {
      VAR_12++;
    } else {
      VAR_13++;
      if(VAR_13 < 1000) {
        continue;
      } else {
        VAR_13 = 0;
        VAR_12++;
      }
    }
    FUNC_9("\r\x1b[34;1m[%c]\x1b[0m Success rate: %.2f%% (read %zd values)    ", "/-\\|"[(VAR_7++ / 100) % 4], (100.f * (double)VAR_11) / (double)(VAR_11 + VAR_12), VAR_11 + VAR_12);
    FUNC_1(VAR_1);
    VAR_8 = (FUNC_10() % 255) + 1;
  }

  FUNC_2();

  return 0;
}
