
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8_t ;
typedef int spiffs_page_ix ;
typedef int spiffs_page_header ;
typedef int spiffs_obj_id ;
typedef int spiffs_block_ix ;
struct TYPE_8__ {int block_count; } ;
typedef TYPE_1__ spiffs ;
typedef scalar_t__ s32_t ;


 int FUNC_0 (TYPE_1__*,int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,int ,int ,int,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int *,int ,int,int,int*) ;

__attribute__((used)) static s32_t FUNC_6(spiffs *VAR_7, spiffs_obj_id VAR_8, spiffs_block_ix VAR_9, int VAR_10,
    const void *VAR_11, void *VAR_12) {
  (void)VAR_11;
  (void)VAR_12;
  s32_t VAR_13 = VAR_2;
  spiffs_page_header VAR_14;
  spiffs_page_ix VAR_15 = FUNC_2(VAR_7, VAR_9, VAR_10);

  FUNC_0(VAR_7, VAR_0, VAR_1,
      (VAR_9 * 256)/VAR_7->block_count, 0);


  VAR_13 = FUNC_4(VAR_7, VAR_4 | VAR_3,
      0, FUNC_3(VAR_7, VAR_15), sizeof(spiffs_page_header), (u8_t*)&VAR_14);
  FUNC_1(VAR_13);

  int VAR_16 = 0;

  VAR_13 = FUNC_5(VAR_7, VAR_8, &VAR_14, VAR_15, VAR_9, VAR_10, &VAR_16);
  FUNC_1(VAR_13);

  if (VAR_13 == VAR_2) {
    return VAR_16 ? VAR_6 : VAR_5;
  }
  return VAR_13;
}
