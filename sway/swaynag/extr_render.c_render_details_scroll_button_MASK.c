
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swaynag_button {int height; int text; scalar_t__ y; scalar_t__ x; scalar_t__ width; } ;
struct swaynag {int scale; TYPE_1__* type; } ;
typedef int cairo_t ;
struct TYPE_2__ {int button_border_thickness; int button_padding; int font; int text; int button_background; int border; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int*,int*,int *,int,int,char*,int ) ;
 int FUNC_5 (int *,int ,int,int,char*,int ) ;

__attribute__((used)) static void FUNC_6(cairo_t *VAR_0,
  struct swaynag *VAR_1, struct swaynag_button *VAR_2) {
 int VAR_3, VAR_4;
 FUNC_4(VAR_0, VAR_1->type->font, &VAR_3, &VAR_4, ((void*)0),
   VAR_1->scale, 1, "%s", VAR_2->text);

 int VAR_5 = VAR_1->type->button_border_thickness * VAR_1->scale;
 int VAR_6 = VAR_1->type->button_padding * VAR_1->scale;

 FUNC_3(VAR_0, VAR_1->type->border);
 FUNC_2(VAR_0, VAR_2->x, VAR_2->y,
   VAR_2->width, VAR_2->height);
 FUNC_0(VAR_0);

 FUNC_3(VAR_0, VAR_1->type->button_background);
 FUNC_2(VAR_0, VAR_2->x + VAR_5, VAR_2->y + VAR_5,
   VAR_2->width - (VAR_5 * 2), VAR_2->height - (VAR_5 * 2));
 FUNC_0(VAR_0);

 FUNC_3(VAR_0, VAR_1->type->text);
 FUNC_1(VAR_0, VAR_2->x + VAR_5 + VAR_6,
   VAR_2->y + VAR_5 + (VAR_2->height - VAR_4) / 2);
 FUNC_5(VAR_0, VAR_1->type->font, VAR_1->scale, 1,
   "%s", VAR_2->text);
}
