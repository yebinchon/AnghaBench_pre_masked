
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8_t ;
typedef int u32_t ;
typedef int spiffs_page_ix ;
typedef int spiffs_file ;
struct TYPE_6__ {int flags; scalar_t__ last_access; int ix; } ;
typedef TYPE_1__ spiffs_cache_page ;
struct TYPE_7__ {scalar_t__ last_access; } ;
typedef TYPE_2__ spiffs_cache ;
typedef int spiffs ;
typedef int s32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 size_t FUNC_2 (int *,int ) ;
 int FUNC_3 (int*,int*,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 TYPE_1__* FUNC_5 (int *,int ) ;
 TYPE_2__* FUNC_6 (int *) ;
 int* FUNC_7 (int *,TYPE_2__*,int ) ;

s32_t FUNC_8(
    spiffs *VAR_7,
    u8_t VAR_8,
    spiffs_file VAR_9,
    u32_t VAR_10,
    u32_t VAR_11,
    u8_t *VAR_12) {
  (void)VAR_9;
  spiffs_page_ix VAR_13 = FUNC_1(VAR_7, VAR_10);
  spiffs_cache *VAR_14 = FUNC_6(VAR_7);
  spiffs_cache_page *VAR_15 = FUNC_5(VAR_7, VAR_13);

  if (VAR_15 && (VAR_8 & VAR_2) != VAR_4) {



    if ((VAR_8 & VAR_2) == VAR_3 &&
        (VAR_8 & VAR_5) != VAR_6) {

      FUNC_4(VAR_7, VAR_15->ix, 0);
      return FUNC_0(VAR_7, VAR_10, VAR_11, VAR_12);
    }

    u8_t *VAR_16 = FUNC_7(VAR_7, VAR_14, VAR_15->ix);
    FUNC_3(&VAR_16[FUNC_2(VAR_7, VAR_10)], VAR_12, VAR_11);

    VAR_14->last_access++;
    VAR_15->last_access = VAR_14->last_access;

    if (VAR_15->flags & VAR_0) {

      return FUNC_0(VAR_7, VAR_10, VAR_11, VAR_12);
    } else {
      return VAR_1;
    }
  } else {

    return FUNC_0(VAR_7, VAR_10, VAR_11, VAR_12);
  }
}
