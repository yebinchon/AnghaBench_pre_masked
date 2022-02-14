
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {int height; int width; int nr_entries; int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ui_browser*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ui_browser *VAR_2)
{
 int VAR_3 = VAR_2->height, VAR_4 = 0, VAR_5 = 0,
     VAR_6 = VAR_2->width,
     VAR_7 = 0;

 if (VAR_2->nr_entries > 1) {
  VAR_5 = ((VAR_2->index * (VAR_2->height - 1)) /
         (VAR_2->nr_entries - 1));
 }

 FUNC_0(1);

 while (VAR_4 < VAR_3) {
         FUNC_2(VAR_2, VAR_7++, VAR_6);
  FUNC_1(VAR_4 == VAR_5 ? VAR_1 : VAR_0);
  ++VAR_4;
 }

 FUNC_0(0);
}
