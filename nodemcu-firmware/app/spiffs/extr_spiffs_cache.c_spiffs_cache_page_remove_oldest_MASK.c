
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8_t ;
typedef scalar_t__ u32_t ;
struct TYPE_6__ {scalar_t__ last_access; int flags; } ;
typedef TYPE_1__ spiffs_cache_page ;
struct TYPE_7__ {int cpage_use_map; int cpage_use_mask; int cpage_count; scalar_t__ last_access; } ;
typedef TYPE_2__ spiffs_cache ;
typedef int spiffs ;
typedef int s32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 TYPE_2__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,TYPE_2__*,int) ;

__attribute__((used)) static s32_t FUNC_3(spiffs *VAR_1, u8_t VAR_2, u8_t VAR_3) {
  s32_t VAR_4 = VAR_0;
  spiffs_cache *VAR_5 = FUNC_1(VAR_1);

  if ((VAR_5->cpage_use_map & VAR_5->cpage_use_mask) != VAR_5->cpage_use_mask) {

    return VAR_0;
  }


  int VAR_6;
  int VAR_7 = -1;
  u32_t VAR_8 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_5->cpage_count; VAR_6++) {
    spiffs_cache_page *VAR_9 = FUNC_2(VAR_1, VAR_5, VAR_6);
    if ((VAR_5->last_access - VAR_9->last_access) > VAR_8 &&
        (VAR_9->flags & VAR_2) == VAR_3) {
      VAR_8 = VAR_5->last_access - VAR_9->last_access;
      VAR_7 = VAR_6;
    }
  }

  if (VAR_7 >= 0) {
    VAR_4 = FUNC_0(VAR_1, VAR_7, 1);
  }

  return VAR_4;
}
