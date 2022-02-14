
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int cpage_count; int cpage_use_map; int cpage_use_mask; struct TYPE_13__* cpages; } ;
typedef TYPE_1__ u8_t ;
typedef int u32_t ;
typedef TYPE_1__ spiffs_cache ;
struct TYPE_14__ {scalar_t__ cache; int cache_size; } ;
typedef TYPE_3__ spiffs ;
struct TYPE_15__ {int ix; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_3 (TYPE_3__*) ;
 TYPE_4__* FUNC_4 (TYPE_3__*,TYPE_1__*,int) ;

void FUNC_5(spiffs *VAR_0) {
  if (VAR_0->cache == 0) return;
  u32_t VAR_1 = VAR_0->cache_size;
  u32_t VAR_2 = 0;
  int VAR_3;
  int VAR_4 =
      (VAR_1 - sizeof(spiffs_cache)) / (FUNC_0(VAR_0));
  if (VAR_4 <= 0) return;

  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
    VAR_2 <<= 1;
    VAR_2 |= 1;
  }

  spiffs_cache VAR_5;
  FUNC_2(&VAR_5, 0, sizeof(spiffs_cache));
  VAR_5.cpage_count = VAR_4;
  VAR_5.cpages = (u8_t *)((u8_t *)VAR_0->cache + sizeof(spiffs_cache));

  VAR_5.cpage_use_map = 0xffffffff;
  VAR_5.cpage_use_mask = VAR_2;
  FUNC_1(VAR_0->cache, &VAR_5, sizeof(spiffs_cache));

  spiffs_cache *VAR_6 = FUNC_3(VAR_0);

  FUNC_2(VAR_6->cpages, 0, VAR_6->cpage_count * FUNC_0(VAR_0));

  VAR_6->cpage_use_map &= ~(VAR_6->cpage_use_mask);
  for (VAR_3 = 0; VAR_3 < VAR_5.cpage_count; VAR_3++) {
    FUNC_4(VAR_0, VAR_6, VAR_3)->ix = VAR_3;
  }
}
