
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ spiffs_obj_id ;
typedef int spiffs_block_ix ;
struct TYPE_3__ {int stats_p_allocated; int stats_p_deleted; int free_blocks; } ;
typedef TYPE_1__ spiffs ;
typedef int s32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static s32_t FUNC_0(
    spiffs *VAR_3,
    spiffs_obj_id VAR_4,
    spiffs_block_ix VAR_5,
    int VAR_6,
    const void *VAR_7,
    void *VAR_8) {
  (void)VAR_5;
  (void)VAR_7;
  (void)VAR_8;
  if (VAR_4 == VAR_1) {
    if (VAR_6 == 0) {
      VAR_3->free_blocks++;

    }
  } else if (VAR_4 == VAR_0) {
    VAR_3->stats_p_deleted++;
  } else {
    VAR_3->stats_p_allocated++;
  }

  return VAR_2;
}
