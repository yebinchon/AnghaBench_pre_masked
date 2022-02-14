
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ visible; } ;
struct swaynag {int width; int scale; scalar_t__ height; TYPE_3__* type; TYPE_2__ details; TYPE_1__* buttons; } ;
typedef int cairo_t ;
struct TYPE_6__ {int button_margin_right; int button_gap; int button_gap_close; int bar_border_thickness; int border_bottom; int background; } ;
struct TYPE_4__ {int length; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int,int,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,struct swaynag*,int,int*) ;
 scalar_t__ FUNC_6 (int *,struct swaynag*,scalar_t__) ;
 scalar_t__ FUNC_7 (int *,struct swaynag*) ;

__attribute__((used)) static uint32_t FUNC_8(cairo_t *VAR_1, struct swaynag *VAR_2) {
 uint32_t VAR_3 = 0;

 FUNC_3(VAR_1, VAR_0);
 FUNC_4(VAR_1, VAR_2->type->background);
 FUNC_1(VAR_1);

 uint32_t VAR_4 = FUNC_7(VAR_1, VAR_2);
 VAR_3 = VAR_4 > VAR_3 ? VAR_4 : VAR_3;

 int VAR_5 = VAR_2->width - VAR_2->type->button_margin_right;
 VAR_5 *= VAR_2->scale;
 for (int VAR_6 = 0; VAR_6 < VAR_2->buttons->length; VAR_6++) {
  VAR_4 = FUNC_5(VAR_1, VAR_2, VAR_6, &VAR_5);
  VAR_3 = VAR_4 > VAR_3 ? VAR_4 : VAR_3;
  VAR_5 -= VAR_2->type->button_gap * VAR_2->scale;
  if (VAR_6 == 0) {
   VAR_5 -= VAR_2->type->button_gap_close * VAR_2->scale;
  }
 }

 if (VAR_2->details.visible) {
  VAR_4 = FUNC_6(VAR_1, VAR_2, VAR_3);
  VAR_3 = VAR_4 > VAR_3 ? VAR_4 : VAR_3;
 }

 int VAR_7 = VAR_2->type->bar_border_thickness * VAR_2->scale;
 if (VAR_3 > VAR_2->height) {
  VAR_3 += VAR_7;
 }
 FUNC_4(VAR_1, VAR_2->type->border_bottom);
 FUNC_2(VAR_1, 0,
   VAR_2->height * VAR_2->scale - VAR_7,
   VAR_2->width * VAR_2->scale,
   VAR_7);
 FUNC_0(VAR_1);

 return VAR_3;
}
