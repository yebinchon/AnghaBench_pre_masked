
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int text; } ;
struct TYPE_5__ {int text; } ;
struct TYPE_7__ {TYPE_2__ button_down; TYPE_1__ button_up; } ;
struct swaynag {int scale; TYPE_4__* type; TYPE_3__ details; } ;
typedef int cairo_t ;
struct TYPE_8__ {int button_border_thickness; int button_padding; int font; } ;


 int FUNC_0 (int *,int ,int*,int*,int *,int,int,char*,int ) ;

__attribute__((used)) static int FUNC_1(cairo_t *VAR_0,
  struct swaynag *VAR_1) {
 int VAR_2, VAR_3, VAR_4;
 FUNC_0(VAR_0, VAR_1->type->font, &VAR_2, &VAR_4, ((void*)0),
   VAR_1->scale, 1,
   "%s", VAR_1->details.button_up.text);
 FUNC_0(VAR_0, VAR_1->type->font, &VAR_3, &VAR_4, ((void*)0),
   VAR_1->scale, 1,
   "%s", VAR_1->details.button_down.text);

 int VAR_5 = VAR_2 > VAR_3 ? VAR_2 : VAR_3;
 int VAR_6 = VAR_1->type->button_border_thickness * VAR_1->scale;
 int VAR_7 = VAR_1->type->button_padding * VAR_1->scale;

 return VAR_5 + VAR_6 * 2 + VAR_7 * 2;
}
