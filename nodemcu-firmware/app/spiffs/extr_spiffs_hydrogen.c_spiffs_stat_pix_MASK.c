
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8_t ;
typedef scalar_t__ u32_t ;
struct TYPE_4__ {int obj_id; scalar_t__ size; int meta; scalar_t__ name; int pix; int type; } ;
typedef TYPE_1__ spiffs_stat ;
struct TYPE_5__ {scalar_t__ size; int meta; scalar_t__ name; int type; } ;
typedef TYPE_2__ spiffs_page_object_ix_header ;
typedef int spiffs_page_ix ;
typedef int spiffs_obj_id ;
typedef int spiffs_file ;
typedef int spiffs ;
typedef int s32_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,int,int ,scalar_t__,int,int *) ;
 int FUNC_7 (char*,char*,int ) ;

__attribute__((used)) static s32_t FUNC_8(spiffs *VAR_7, spiffs_page_ix VAR_8, spiffs_file VAR_9, spiffs_stat *VAR_10) {
  (void)VAR_9;
  spiffs_page_object_ix_header VAR_11;
  spiffs_obj_id VAR_12;
  s32_t VAR_13 =FUNC_6(VAR_7, VAR_4 | VAR_3, VAR_9,
      FUNC_4(VAR_7, VAR_8), sizeof(spiffs_page_object_ix_header), (u8_t *)&VAR_11);
  FUNC_0(VAR_7, VAR_13);

  u32_t VAR_14 = FUNC_2(VAR_7, FUNC_1(VAR_7 , VAR_8)) +
      FUNC_3(VAR_7, VAR_8) * sizeof(spiffs_obj_id);
  VAR_13 =FUNC_6(VAR_7, VAR_5 | VAR_3, VAR_9,
      VAR_14, sizeof(spiffs_obj_id), (u8_t *)&VAR_12);
  FUNC_0(VAR_7, VAR_13);

  VAR_10->obj_id = VAR_12 & ~VAR_0;
  VAR_10->type = VAR_11.type;
  VAR_10->size = VAR_11.size == VAR_6 ? 0 : VAR_11.size;
  VAR_10->pix = VAR_8;
  FUNC_7((char *)VAR_10->name, (char *)VAR_11.name, VAR_2);




  return VAR_13;
}
