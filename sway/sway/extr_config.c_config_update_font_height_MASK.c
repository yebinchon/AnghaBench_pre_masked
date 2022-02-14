
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t font_height; scalar_t__ font_baseline; } ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int*) ;

void FUNC_2(bool VAR_3) {
 size_t VAR_4 = VAR_0->font_height;
 VAR_0->font_height = 0;
 VAR_0->font_baseline = 0;

 FUNC_1(VAR_1, &VAR_3);
 FUNC_1(VAR_2, ((void*)0));

 if (VAR_0->font_height != VAR_4) {
  FUNC_0();
 }
}
