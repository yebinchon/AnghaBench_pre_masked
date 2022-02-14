
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int spiffs_block_ix ;
struct TYPE_5__ {int free_blocks; int free_cursor_obj_lu_entry; int free_cursor_block_ix; int cleaning; } ;
typedef TYPE_1__ spiffs ;
typedef scalar_t__ s32_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int,int ,int *,int*) ;

s32_t FUNC_4(
    spiffs *VAR_4,
    spiffs_block_ix VAR_5,
    int VAR_6,
    spiffs_block_ix *VAR_7,
    int *VAR_8) {
  s32_t VAR_9;
  if (!VAR_4->cleaning && VAR_4->free_blocks < 2) {
    VAR_9 = FUNC_2(VAR_4, 0);
    if (VAR_9 == VAR_1) {
      VAR_9 = VAR_3;
    }
    FUNC_0(VAR_9);
    if (VAR_4->free_blocks < 2) {
      return VAR_0;
    }
  }
  VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_6,
      VAR_2, VAR_7, VAR_8);
  if (VAR_9 == VAR_3) {
    VAR_4->free_cursor_block_ix = *VAR_7;
    VAR_4->free_cursor_obj_lu_entry = (*VAR_8) + 1;
    if (*VAR_8 == 0) {
      VAR_4->free_blocks--;
    }
  }
  if (VAR_9 == VAR_0) {
    FUNC_1("fs full\n");
  }

  return VAR_9;
}
