
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ spiffs_block_ix ;
struct TYPE_9__ {scalar_t__ block_count; scalar_t__ max_erase_count; int err_code; } ;
typedef TYPE_1__ spiffs ;
typedef int s32_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;

s32_t FUNC_6(spiffs *VAR_4) {




  FUNC_0(VAR_4);
  if (FUNC_2(VAR_4)) {
    VAR_4->err_code = VAR_1;
    return -1;
  }

  s32_t VAR_5;
  FUNC_3(VAR_4);

  spiffs_block_ix VAR_6 = 0;
  while (VAR_6 < VAR_4->block_count) {
    VAR_4->max_erase_count = 0;
    VAR_5 = FUNC_5(VAR_4, VAR_6);
    if (VAR_5 != VAR_3) {
      VAR_5 = VAR_0;
    }
    FUNC_1(VAR_4, VAR_5);
    VAR_6++;
  }

  FUNC_4(VAR_4);

  return 0;

}
