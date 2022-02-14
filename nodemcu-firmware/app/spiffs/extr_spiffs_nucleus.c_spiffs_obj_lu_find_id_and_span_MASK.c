
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int spiffs_span_ix ;
typedef scalar_t__ spiffs_page_ix ;
typedef int spiffs_obj_id ;
typedef int spiffs_block_ix ;
struct TYPE_5__ {int cursor_obj_lu_entry; int cursor_block_ix; } ;
typedef TYPE_1__ spiffs ;
typedef scalar_t__ s32_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int,int ,int ,int ,scalar_t__*,int *,int *,int*) ;
 int VAR_3 ;

s32_t FUNC_3(
    spiffs *VAR_4,
    spiffs_obj_id VAR_5,
    spiffs_span_ix VAR_6,
    spiffs_page_ix VAR_7,
    spiffs_page_ix *VAR_8) {
  s32_t VAR_9;
  spiffs_block_ix VAR_10;
  int VAR_11;

  VAR_9 = FUNC_2(VAR_4,
      VAR_4->cursor_block_ix,
      VAR_4->cursor_obj_lu_entry,
      VAR_1,
      VAR_5,
      VAR_3,
      VAR_7 ? &VAR_7 : 0,
      &VAR_6,
      &VAR_10,
      &VAR_11);

  if (VAR_9 == VAR_2) {
    VAR_9 = VAR_0;
  }

  FUNC_0(VAR_9);

  if (VAR_8) {
    *VAR_8 = FUNC_1(VAR_4, VAR_10, VAR_11);
  }

  VAR_4->cursor_block_ix = VAR_10;
  VAR_4->cursor_obj_lu_entry = VAR_11;

  return VAR_9;
}
