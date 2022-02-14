
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int spiffs_page_ix ;
struct TYPE_3__ {int ix; } ;
typedef TYPE_1__ spiffs_cache_page ;
typedef int spiffs ;


 int FUNC_0 (int *,int ,int ) ;
 TYPE_1__* FUNC_1 (int *,int ) ;

void FUNC_2(spiffs *VAR_0, spiffs_page_ix VAR_1) {
  spiffs_cache_page *VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (VAR_2) {
    FUNC_0(VAR_0, VAR_2->ix, 0);
  }
}
