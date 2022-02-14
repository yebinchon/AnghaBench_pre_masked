
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int x; int y; int width; int height; } ;
struct TYPE_7__ {int x; int y; int width; int height; TYPE_4__ button_down; TYPE_4__ button_up; void* visible_lines; int offset; void* total_lines; int message; } ;
struct swaynag {int width; int scale; TYPE_1__* type; TYPE_2__ details; } ;
typedef int gint ;
typedef int cairo_t ;
struct TYPE_8__ {int start_index; } ;
struct TYPE_6__ {int details_border_thickness; int message_padding; int text; int border; int font; } ;
typedef TYPE_3__ PangoLayoutLine ;
typedef int PangoLayout ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,int,int,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct swaynag*) ;
 int * FUNC_6 (int *,int ,int ,int,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 void* FUNC_9 (int *) ;
 TYPE_3__* FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int*,int*) ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,char const*,int) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,struct swaynag*,TYPE_4__*) ;
 int FUNC_20 (char const*) ;

__attribute__((used)) static uint32_t FUNC_21(cairo_t *VAR_4, struct swaynag *VAR_5,
  uint32_t VAR_6) {
 uint32_t VAR_7 = VAR_5->width * VAR_5->scale;

 int VAR_8 = VAR_5->type->details_border_thickness * VAR_5->scale;
 int VAR_9 = VAR_5->type->message_padding * VAR_5->scale;
 int VAR_10 = VAR_9 + VAR_8;

 VAR_5->details.x = VAR_10;
 VAR_5->details.y = VAR_6 * VAR_5->scale + VAR_10;
 VAR_5->details.width = VAR_7 - VAR_10 * 2;

 PangoLayout *VAR_11 = FUNC_6(VAR_4, VAR_5->type->font,
   VAR_5->details.message, VAR_5->scale, 0);
 FUNC_17(VAR_11,
   (VAR_5->details.width - VAR_9 * 2) * VAR_1);
 FUNC_18(VAR_11, VAR_2);
 FUNC_15(VAR_11, 0);
 FUNC_8(VAR_4, VAR_11);
 VAR_5->details.total_lines = FUNC_9(VAR_11);

 PangoLayoutLine *VAR_12;
 VAR_12 = FUNC_10(VAR_11, VAR_5->details.offset);
 gint VAR_13 = VAR_12->start_index;
 const char *VAR_14 = FUNC_12(VAR_11);
 FUNC_16(VAR_11, VAR_14 + VAR_13, FUNC_20(VAR_14) - VAR_13);

 int VAR_15, VAR_16;
 FUNC_8(VAR_4, VAR_11);
 FUNC_11(VAR_11, &VAR_15, &VAR_16);

 bool VAR_17 = VAR_5->details.offset > 0;
 int VAR_18 = FUNC_5(VAR_4, VAR_5);
 if (VAR_17) {
  VAR_5->details.width -= VAR_18;
  FUNC_17(VAR_11,
    (VAR_5->details.width - VAR_9 * 2) * VAR_1);
 }

 uint32_t VAR_19;
 do {
  VAR_19 = VAR_5->details.y + VAR_16 + VAR_10 + VAR_9 * 2;
  if (VAR_19 > VAR_3) {
   VAR_19 = VAR_3;

   if (!VAR_17) {
    VAR_17 = 1;
    VAR_5->details.width -= VAR_18;
    FUNC_17(VAR_11,
      (VAR_5->details.width - VAR_9 * 2) * VAR_1);
   }
  }

  VAR_5->details.height = VAR_19 - VAR_5->details.y - VAR_10;
  FUNC_14(VAR_11,
    (VAR_5->details.height - VAR_9 * 2) * VAR_1);
  FUNC_13(VAR_11, VAR_0);
  FUNC_8(VAR_4, VAR_11);
  FUNC_11(VAR_11, &VAR_15, &VAR_16);
 } while (VAR_16 != (VAR_5->details.height - VAR_9 * 2));

 VAR_5->details.visible_lines = FUNC_9(VAR_11);

 if (VAR_17) {
  VAR_5->details.button_up.x =
   VAR_5->details.x + VAR_5->details.width;
  VAR_5->details.button_up.y = VAR_5->details.y;
  VAR_5->details.button_up.width = VAR_18;
  VAR_5->details.button_up.height = VAR_5->details.height / 2;
  FUNC_19(VAR_4, VAR_5,
    &VAR_5->details.button_up);

  VAR_5->details.button_down.x =
   VAR_5->details.x + VAR_5->details.width;
  VAR_5->details.button_down.y =
   VAR_5->details.button_up.y + VAR_5->details.button_up.height;
  VAR_5->details.button_down.width = VAR_18;
  VAR_5->details.button_down.height = VAR_5->details.height / 2;
  FUNC_19(VAR_4, VAR_5,
    &VAR_5->details.button_down);
 }

 FUNC_3(VAR_4, VAR_5->type->border);
 FUNC_2(VAR_4, VAR_5->details.x, VAR_5->details.y,
   VAR_5->details.width, VAR_5->details.height);
 FUNC_0(VAR_4);

 FUNC_1(VAR_4, VAR_5->details.x + VAR_9,
   VAR_5->details.y + VAR_9);
 FUNC_3(VAR_4, VAR_5->type->text);
 FUNC_7(VAR_4, VAR_11);
 FUNC_4(VAR_11);

 return VAR_19 / VAR_5->scale;
}
