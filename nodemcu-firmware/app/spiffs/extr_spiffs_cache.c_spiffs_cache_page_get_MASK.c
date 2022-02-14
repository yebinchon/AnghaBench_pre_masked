
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ spiffs_page_ix ;
struct TYPE_7__ {int flags; scalar_t__ pix; int last_access; } ;
typedef TYPE_1__ spiffs_cache_page ;
struct TYPE_8__ {int cpage_use_map; int cpage_use_mask; int cpage_count; int last_access; } ;
typedef TYPE_2__ spiffs_cache ;
typedef int spiffs ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,TYPE_2__*,int) ;

__attribute__((used)) static spiffs_cache_page *FUNC_2(spiffs *VAR_1, spiffs_page_ix VAR_2) {
  spiffs_cache *VAR_3 = FUNC_0(VAR_1);
  if ((VAR_3->cpage_use_map & VAR_3->cpage_use_mask) == 0) return 0;
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_3->cpage_count; VAR_4++) {
    spiffs_cache_page *VAR_5 = FUNC_1(VAR_1, VAR_3, VAR_4);
    if ((VAR_3->cpage_use_map & (1<<VAR_4)) &&
        (VAR_5->flags & VAR_0) == 0 &&
        VAR_5->pix == VAR_2 ) {

      VAR_5->last_access = VAR_3->last_access;
      return VAR_5;
    }
  }

  return 0;
}
