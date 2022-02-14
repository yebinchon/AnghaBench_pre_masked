
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int spiffs_page_ix ;
struct TYPE_4__ {int obj_id; } ;
typedef TYPE_1__ spiffs_page_header ;
typedef int spiffs ;
typedef int s32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,TYPE_1__*,int ,int ,int ,int ,int *) ;
 int FUNC_4 (int *,int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static s32_t FUNC_5(spiffs *VAR_0, spiffs_page_ix VAR_1, spiffs_page_header *VAR_2, spiffs_page_ix *VAR_3) {
  s32_t VAR_4;
  VAR_4 = FUNC_3(VAR_0, VAR_2->obj_id, VAR_2, 0,0,0,0, VAR_3);
  FUNC_0(VAR_4);
  VAR_4 = FUNC_4(VAR_0, 0,
      FUNC_2(VAR_0, *VAR_3) + sizeof(spiffs_page_header),
      FUNC_2(VAR_0, VAR_1) + sizeof(spiffs_page_header),
      FUNC_1(VAR_0));
  FUNC_0(VAR_4);
  return VAR_4;
}
