
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {scalar_t__ title_baseline; } ;
struct TYPE_2__ {scalar_t__ font_baseline; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct sway_container*) ;

__attribute__((used)) static void FUNC_1(struct sway_container *VAR_1, void *VAR_2) {
 bool *VAR_3 = VAR_2;
 if (*VAR_3) {
  FUNC_0(VAR_1);
 }
 if (VAR_1->title_baseline > VAR_0->font_baseline) {
  VAR_0->font_baseline = VAR_1->title_baseline;
 }
}
