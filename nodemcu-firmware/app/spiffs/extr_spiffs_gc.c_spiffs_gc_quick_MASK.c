
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u32_t ;
typedef scalar_t__ u16_t ;
typedef scalar_t__ spiffs_obj_id ;
typedef scalar_t__ spiffs_block_ix ;
struct TYPE_10__ {int stats_p_deleted; scalar_t__ lu_work; int stats_gc_runs; scalar_t__ block_count; } ;
typedef TYPE_1__ spiffs ;
typedef int s32_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int,int ,scalar_t__,int,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;

s32_t FUNC_8(
    spiffs *VAR_6, u16_t VAR_7) {
  s32_t VAR_8 = VAR_3;
  u32_t VAR_9 = VAR_6->block_count;
  spiffs_block_ix VAR_10 = 0;
  u32_t VAR_11 = 0;
  int VAR_12 = 0;
  spiffs_obj_id *VAR_13 = (spiffs_obj_id *)VAR_6->lu_work;

  FUNC_2("gc_quick: running\n");




  int VAR_14 = (FUNC_1(VAR_6) / sizeof(spiffs_obj_id));



  while (VAR_8 == VAR_3 && VAR_9--) {
    u16_t VAR_15 = 0;
    u16_t VAR_16 = 0;

    int VAR_17 = 0;

    while (VAR_8 == VAR_3 && VAR_17 < (int)FUNC_3(VAR_6)) {
      int VAR_18 = VAR_17 * VAR_14;
      VAR_8 = FUNC_6(VAR_6, VAR_5 | VAR_4,
          0, VAR_11 + FUNC_5(VAR_6, VAR_17), FUNC_1(VAR_6), VAR_6->lu_work);

      while (VAR_8 == VAR_3 &&
          VAR_12 - VAR_18 < VAR_14 &&
          VAR_12 < (int)(FUNC_4(VAR_6)-FUNC_3(VAR_6))) {
        spiffs_obj_id VAR_19 = VAR_13[VAR_12-VAR_18];
        if (VAR_19 == VAR_1) {
          VAR_15++;
        } else if (VAR_19 == VAR_2) {

          VAR_16++;
          if (VAR_16 > VAR_7) {
            VAR_17 = FUNC_3(VAR_6);
            VAR_8 = 1;
            break;
          }
        } else {

          VAR_17 = FUNC_3(VAR_6);
          VAR_8 = 1;
          break;
        }
        VAR_12++;
      }
      VAR_17++;
    }
    if (VAR_8 == 1) VAR_8 = VAR_3;

    if (VAR_8 == VAR_3 &&
        VAR_15 + VAR_16 == FUNC_4(VAR_6)-FUNC_3(VAR_6) &&
        VAR_16 <= VAR_7) {

      VAR_6->stats_p_deleted -= VAR_15;
      VAR_8 = FUNC_7(VAR_6, VAR_10);
      return VAR_8;
    }

    VAR_12 = 0;
    VAR_10++;
    VAR_11 += FUNC_0(VAR_6);
  }

  if (VAR_8 == VAR_3) {
    VAR_8 = VAR_0;
  }
  return VAR_8;
}
