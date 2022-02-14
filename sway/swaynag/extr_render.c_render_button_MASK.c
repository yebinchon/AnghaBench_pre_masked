
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct swaynag_button {int x; int y; int width; int height; int text; } ;
struct swaynag {int scale; scalar_t__ height; TYPE_2__* type; TYPE_1__* buttons; } ;
typedef int cairo_t ;
struct TYPE_4__ {int button_border_thickness; int button_padding; int font; int text; int button_background; int border; } ;
struct TYPE_3__ {struct swaynag_button** items; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,int,int,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int*,int*,int *,int,int,char*,int ) ;
 int FUNC_5 (int *,int ,scalar_t__,int,char*,int ) ;

__attribute__((used)) static uint32_t FUNC_6(cairo_t *VAR_0, struct swaynag *VAR_1,
  int VAR_2, int *VAR_3) {
 struct swaynag_button *VAR_4 = VAR_1->buttons->items[VAR_2];

 int VAR_5, VAR_6;
 FUNC_4(VAR_0, VAR_1->type->font, &VAR_5, &VAR_6, ((void*)0),
   VAR_1->scale, 1, "%s", VAR_4->text);

 int VAR_7 = VAR_1->type->button_border_thickness * VAR_1->scale;
 int VAR_8 = VAR_1->type->button_padding * VAR_1->scale;

 uint32_t VAR_9 = VAR_6 + VAR_8 * 2 + VAR_7 * 2;
 uint32_t VAR_10 = VAR_9 / VAR_1->scale;
 if (VAR_1->height < VAR_10) {
  return VAR_10;
 }

 VAR_4->x = *VAR_3 - VAR_7 - VAR_5 - VAR_8 * 2 + 1;
 VAR_4->y = (int)(VAR_9 - VAR_6) / 2 - VAR_8 + 1;
 VAR_4->width = VAR_5 + VAR_8 * 2;
 VAR_4->height = VAR_6 + VAR_8 * 2;

 FUNC_3(VAR_0, VAR_1->type->border);
 FUNC_2(VAR_0, VAR_4->x - VAR_7, VAR_4->y - VAR_7,
   VAR_4->width + VAR_7 * 2, VAR_4->height + VAR_7 * 2);
 FUNC_0(VAR_0);

 FUNC_3(VAR_0, VAR_1->type->button_background);
 FUNC_2(VAR_0, VAR_4->x, VAR_4->y,
   VAR_4->width, VAR_4->height);
 FUNC_0(VAR_0);

 FUNC_3(VAR_0, VAR_1->type->text);
 FUNC_1(VAR_0, VAR_4->x + VAR_8, VAR_4->y + VAR_8);
 FUNC_5(VAR_0, VAR_1->type->font, VAR_1->scale, 1,
   "%s", VAR_4->text);

 *VAR_3 = VAR_4->x - VAR_7;

 return VAR_10;
}
