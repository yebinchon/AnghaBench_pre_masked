
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int last_access; } ;
typedef TYPE_1__ spiffs_cache_page ;
struct TYPE_8__ {int cpage_use_map; int cpage_count; int last_access; } ;
typedef TYPE_2__ spiffs_cache ;
typedef int spiffs ;


 TYPE_2__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,TYPE_2__*,int) ;

__attribute__((used)) static spiffs_cache_page *FUNC_2(spiffs *VAR_0) {
  spiffs_cache *VAR_1 = FUNC_0(VAR_0);
  if (VAR_1->cpage_use_map == 0xffffffff) {

    return 0;
  }
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1->cpage_count; VAR_2++) {
    if ((VAR_1->cpage_use_map & (1<<VAR_2)) == 0) {
      spiffs_cache_page *VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
      VAR_1->cpage_use_map |= (1<<VAR_2);
      VAR_3->last_access = VAR_1->last_access;

      return VAR_3;
    }
  }

  return 0;
}
