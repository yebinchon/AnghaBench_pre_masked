
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ obj_id; } ;
typedef TYPE_1__ spiffs_fd ;
struct TYPE_10__ {int flags; scalar_t__ obj_id; } ;
typedef TYPE_2__ spiffs_cache_page ;
struct TYPE_11__ {int cpage_use_map; int cpage_use_mask; int cpage_count; } ;
typedef TYPE_3__ spiffs_cache ;
typedef int spiffs ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,TYPE_3__*,int) ;

spiffs_cache_page *FUNC_2(spiffs *VAR_1, spiffs_fd *VAR_2) {
  spiffs_cache *VAR_3 = FUNC_0(VAR_1);

  if ((VAR_3->cpage_use_map & VAR_3->cpage_use_mask) == 0) {

    return 0;
  }

  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_3->cpage_count; VAR_4++) {
    spiffs_cache_page *VAR_5 = FUNC_1(VAR_1, VAR_3, VAR_4);
    if ((VAR_3->cpage_use_map & (1<<VAR_4)) &&
        (VAR_5->flags & VAR_0) &&
        VAR_5->obj_id == VAR_2->obj_id) {
      return VAR_5;
    }
  }

  return 0;
}
