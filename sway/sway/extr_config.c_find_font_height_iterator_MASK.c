
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {size_t title_height; size_t title_baseline; } ;
struct TYPE_2__ {size_t font_baseline; size_t font_height; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct sway_container *VAR_1, void *VAR_2) {
 size_t VAR_3 = VAR_1->title_height - VAR_1->title_baseline;
 size_t VAR_4 = VAR_0->font_baseline + VAR_3;
 if (VAR_4 > VAR_0->font_height) {
  VAR_0->font_height = VAR_4;
 }
}
