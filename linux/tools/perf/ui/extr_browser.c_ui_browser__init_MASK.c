
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser_colorset {int bg; int fg; scalar_t__ name; int colorset; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int VAR_0 ;
 struct ui_browser_colorset* VAR_1 ;

void FUNC_2(void)
{
 int VAR_2 = 0;

 FUNC_0(VAR_0, ((void*)0));

 while (VAR_1[VAR_2].name) {
  struct ui_browser_colorset *VAR_3 = &VAR_1[VAR_2++];
  FUNC_1(VAR_3->colorset, VAR_3->name, VAR_3->fg, VAR_3->bg);
 }
}
