
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8_t ;
typedef int spiffs_page_ix ;
typedef int spiffs_obj_id ;
struct TYPE_9__ {int stats_p_allocated; int stats_p_deleted; } ;
typedef TYPE_1__ spiffs ;
typedef int s32_t ;
typedef int flags ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_1__*,int,int ,scalar_t__,int,int*) ;
 int FUNC_6 (TYPE_1__*,int,int ,scalar_t__,int,int*) ;
 scalar_t__ FUNC_7 (int ,int) ;
 int VAR_7 ;

s32_t FUNC_8(
    spiffs *VAR_8,
    spiffs_page_ix VAR_9) {
  s32_t VAR_10;

  spiffs_obj_id VAR_11 = VAR_0;
  VAR_10 = FUNC_6(VAR_8, VAR_4 | VAR_1,
      0,
      FUNC_1(VAR_8, FUNC_0(VAR_8, VAR_9)) + FUNC_3(VAR_8, VAR_9) * sizeof(spiffs_page_ix),
      sizeof(spiffs_obj_id),
      (u8_t *)&VAR_11);
  FUNC_2(VAR_10);

  VAR_8->stats_p_deleted++;
  VAR_8->stats_p_allocated--;


  u8_t VAR_12 = 0xff;






  VAR_12 &= ~(VAR_5 | VAR_6);
  VAR_10 = FUNC_6(VAR_8, VAR_3 | VAR_1,
      0,
      FUNC_4(VAR_8, VAR_9) + FUNC_7(VAR_7, VAR_12),
      sizeof(VAR_12), &VAR_12);

  return VAR_10;
}
