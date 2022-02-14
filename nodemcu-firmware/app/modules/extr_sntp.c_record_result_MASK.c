
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ip_addr_t ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_3__ {int stratum; int delay; int server_pos; int delay_frac; int root_maxerr; int root_dispersion; int root_delay; int delta; int LI; int when; int server; } ;
struct TYPE_4__ {int last_server_pos; TYPE_1__ best; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(int VAR_1, ip_addr_t *VAR_2, int64_t VAR_3, int VAR_4, int VAR_5, uint32_t VAR_6, uint32_t VAR_7, uint32_t VAR_8, uint32_t VAR_9) {
  FUNC_2("Recording %s: delta=%08x.%08x, stratum=%d, li=%d, delay=%dus, root_maxerr=%dus",
      FUNC_1(VAR_2), (uint32_t) (VAR_3 >> 32), (uint32_t) (VAR_3 & 0xffffffff), VAR_4, VAR_5, (int32_t) FUNC_0(VAR_6), (int32_t) FUNC_0(VAR_7));

  int VAR_10 = VAR_9 * 2 + VAR_6;
  if (VAR_0->last_server_pos == VAR_1) {
    VAR_10 -= VAR_10 >> 2;
  }

  if (!VAR_0->best.stratum || VAR_10 < VAR_0->best.delay) {
    FUNC_2("   --BEST\n");
    VAR_0->best.server = *VAR_2;
    VAR_0->best.server_pos = VAR_1;
    VAR_0->best.delay = VAR_10;
    VAR_0->best.delay_frac = VAR_6;
    VAR_0->best.root_maxerr = VAR_7;
    VAR_0->best.root_dispersion = VAR_8;
    VAR_0->best.root_delay = VAR_9;
    VAR_0->best.delta = VAR_3;
    VAR_0->best.stratum = VAR_4;
    VAR_0->best.LI = VAR_5;
    VAR_0->best.when = FUNC_3();
  } else {
    FUNC_2("\n");
  }
}
