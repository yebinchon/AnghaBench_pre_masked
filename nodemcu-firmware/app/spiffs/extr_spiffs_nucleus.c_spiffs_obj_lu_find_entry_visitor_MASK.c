
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8_t ;
typedef int u32_t ;
typedef scalar_t__ (* spiffs_visitor_f ) (TYPE_1__*,scalar_t__,int,int,void const*,void*) ;
typedef scalar_t__ spiffs_obj_id ;
typedef int spiffs_block_ix ;
struct TYPE_11__ {scalar_t__ block_count; scalar_t__ lu_work; } ;
typedef TYPE_1__ spiffs ;
typedef scalar_t__ s32_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_1__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (TYPE_1__*,int,int ,scalar_t__,int,scalar_t__) ;

s32_t FUNC_7(
    spiffs *VAR_9,
    spiffs_block_ix VAR_10,
    int VAR_11,
    u8_t VAR_12,
    spiffs_obj_id VAR_13,
    spiffs_visitor_f VAR_14,
    const void *VAR_15,
    void *VAR_16,
    spiffs_block_ix *VAR_17,
    int *VAR_18) {
  s32_t VAR_19 = VAR_0;
  s32_t VAR_20 = VAR_9->block_count * FUNC_3(VAR_9);
  spiffs_block_ix VAR_21 = VAR_10;
  u32_t VAR_22 = VAR_10 * FUNC_0(VAR_9);

  spiffs_obj_id *VAR_23 = (spiffs_obj_id *)VAR_9->lu_work;
  int VAR_24 = VAR_11;
  int VAR_25 = (FUNC_1(VAR_9) / sizeof(spiffs_obj_id));


  if (VAR_24 > (int)FUNC_3(VAR_9) - 1) {
    VAR_24 = 0;
    VAR_21++;
    VAR_22 = VAR_21 * FUNC_0(VAR_9);
    if (VAR_21 >= VAR_9->block_count) {
      if (VAR_12 & VAR_8) {
        return VAR_7;
      } else {

        VAR_21 = 0;
        VAR_22 = 0;
      }
    }
  }


  while (VAR_19 == VAR_0 && VAR_20 > 0) {
    int VAR_26 = VAR_24 / VAR_25;

    while (VAR_19 == VAR_0 && VAR_26 < (int)FUNC_4(VAR_9)) {
      int VAR_27 = VAR_26 * VAR_25;
      VAR_19 = FUNC_6(VAR_9, VAR_2 | VAR_1,
          0, VAR_22 + FUNC_5(VAR_9, VAR_26), FUNC_1(VAR_9), VAR_9->lu_work);

      while (VAR_19 == VAR_0 &&
          VAR_24 - VAR_27 < VAR_25 &&
          VAR_24 < (int)FUNC_3(VAR_9))
      {
        if ((VAR_12 & VAR_3) == 0 || VAR_23[VAR_24-VAR_27] == VAR_13) {
          if (VAR_17) *VAR_17 = VAR_21;
          if (VAR_18) *VAR_18 = VAR_24;
          if (VAR_14) {
            VAR_19 = VAR_14(
                VAR_9,
                (VAR_12 & VAR_4) ? VAR_13 : VAR_23[VAR_24-VAR_27],
                VAR_21,
                VAR_24,
                VAR_15,
                VAR_16);
            if (VAR_19 == VAR_5 || VAR_19 == VAR_6) {
              if (VAR_19 == VAR_6) {
                VAR_19 = FUNC_6(VAR_9, VAR_2 | VAR_1,
                    0, VAR_22 + FUNC_5(VAR_9, VAR_26), FUNC_1(VAR_9), VAR_9->lu_work);
                FUNC_2(VAR_19);
              }
              VAR_19 = VAR_0;
              VAR_24++;
              VAR_20--;
              continue;
            } else {
              return VAR_19;
            }
          } else {
            return VAR_0;
          }
        }
        VAR_20--;
        VAR_24++;
      }
      VAR_26++;
    }
    VAR_24 = 0;
    VAR_21++;
    VAR_22 += FUNC_0(VAR_9);
    if (VAR_21 >= VAR_9->block_count) {
      if (VAR_12 & VAR_8) {
        return VAR_7;
      } else {

        VAR_21 = 0;
        VAR_22 = 0;
      }
    }
  }

  FUNC_2(VAR_19);

  return VAR_7;
}
