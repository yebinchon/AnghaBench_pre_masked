
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {int title_height; int title_baseline; int formatted_title; } ;
typedef int cairo_t ;
struct TYPE_2__ {int pango_markup; int font; } ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *,int ,int *,int*,int*,int,int ,char*,int ) ;

void FUNC_3(struct sway_container *VAR_1) {
 if (!VAR_1->formatted_title) {
  VAR_1->title_height = 0;
  return;
 }
 cairo_t *VAR_2 = FUNC_0(((void*)0));
 int VAR_3;
 int VAR_4;
 FUNC_2(VAR_2, VAR_0->font, ((void*)0), &VAR_3, &VAR_4, 1,
   VAR_0->pango_markup, "%s", VAR_1->formatted_title);
 FUNC_1(VAR_2);
 VAR_1->title_height = VAR_3;
 VAR_1->title_baseline = VAR_4;
}
