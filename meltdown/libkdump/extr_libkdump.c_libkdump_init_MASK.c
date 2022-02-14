
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_5__ {int load_threads; int load_type; scalar_t__ fault_handling; } ;
typedef TYPE_1__ libkdump_config_t ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

 int * VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_8 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 int FUNC_5 () ;
 int * VAR_10 ;
 int * FUNC_6 (int) ;
 char* VAR_11 ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *,int) ;
 int FUNC_8 (char*,int,int) ;
 void* VAR_12 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,void*,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_11 (int ,int ) ;
 void* VAR_14 ;
 void* VAR_15 ;

int FUNC_12(const libkdump_config_t VAR_16) {
  int VAR_17;
  VAR_7 = VAR_16;
  if (FUNC_7(&VAR_7, &VAR_9, sizeof(libkdump_config_t)) == 0) {
    FUNC_0();
  }

  int VAR_18 = FUNC_1();
  if (VAR_18 != 0) {
    VAR_8 = VAR_18;
    return -1;
  }
  VAR_6 = FUNC_6(4096 * 300);
  if (!VAR_6) {
    VAR_8 = VAR_0;
    return -1;
  }
  VAR_11 = (char *)(((size_t)VAR_6 & ~0xfff) + 0x1000 * 2);
  FUNC_8(VAR_11, 0xab, 4096 * 290);

  for (VAR_17 = 0; VAR_17 < 256; VAR_17++) {
    FUNC_3(VAR_11 + VAR_17 * 4096);
  }

  VAR_10 = FUNC_6(sizeof(pthread_t) * VAR_7.load_threads);
  void *VAR_19;
  switch (VAR_7.load_type) {
  case 130:
    VAR_19 = VAR_14;
    break;
  case 128:
    VAR_19 = VAR_15;
    break;
  case 129:
  default:
    VAR_19 = VAR_12;
  }

  for (VAR_17 = 0; VAR_17 < VAR_7.load_threads; VAR_17++) {
    int VAR_20 = FUNC_10(&VAR_10[VAR_17], 0, VAR_19, 0);
    if (VAR_20 != 0) {
      int VAR_21;
      for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++) {
        FUNC_9(VAR_10[VAR_21]);
      }
      FUNC_4(VAR_10);
      FUNC_4(VAR_6);
      VAR_8 = VAR_20;
      return -1;
    }
  }
  FUNC_2(VAR_5, "Started %d load threads\n", VAR_7.load_threads);

  if (VAR_7.fault_handling == VAR_2) {
    if (FUNC_11(VAR_3, VAR_13) == VAR_4) {
      FUNC_2(VAR_1, "Failed to setup signal handler\n");
      FUNC_5();
      return -1;
    }
    FUNC_2(VAR_5, "Successfully setup signal handler\n");
  }
  return 0;
}
