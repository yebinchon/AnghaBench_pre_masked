
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32_t ;
typedef int spiffs_obj_id ;
struct TYPE_4__ {scalar_t__ work; } ;
typedef TYPE_1__ spiffs ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(spiffs *VAR_1, spiffs_obj_id VAR_2) {
  u32_t VAR_3;
  spiffs_obj_id *VAR_4 = (spiffs_obj_id *)VAR_1->work;
  VAR_2 &= ~VAR_0;
  for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1) / sizeof(spiffs_obj_id); VAR_3++) {
    if ((VAR_4[VAR_3] & ~VAR_0) == VAR_2) {
      return VAR_3;
    }
  }
  return -1;
}
