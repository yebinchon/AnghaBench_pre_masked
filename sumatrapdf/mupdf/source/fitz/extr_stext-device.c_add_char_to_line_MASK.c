
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int pool; } ;
typedef TYPE_2__ fz_stext_page ;
struct TYPE_18__ {scalar_t__ wmode; TYPE_4__* last_char; TYPE_4__* first_char; } ;
typedef TYPE_3__ fz_stext_line ;
struct TYPE_16__ {void* ur; void* lr; void* ul; void* ll; } ;
struct TYPE_21__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_19__ {int c; int color; float size; TYPE_1__ quad; int * font; TYPE_6__ origin; struct TYPE_19__* next; } ;
typedef TYPE_4__ fz_stext_char ;
struct TYPE_20__ {scalar_t__ x0; scalar_t__ x1; } ;
typedef TYPE_5__ fz_rect ;
typedef TYPE_6__ fz_point ;
typedef int fz_matrix ;
typedef int fz_font ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_5__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 void* FUNC_3 (scalar_t__,scalar_t__) ;
 TYPE_4__* FUNC_4 (int *,int ,int) ;
 TYPE_6__ FUNC_5 (TYPE_6__,int ) ;

__attribute__((used)) static fz_stext_char *
FUNC_6(fz_context *VAR_0, fz_stext_page *VAR_1, fz_stext_line *VAR_2, fz_matrix VAR_3, fz_font *VAR_4, float VAR_5, int VAR_6, fz_point *VAR_7, fz_point *VAR_8, int VAR_9)
{
 fz_stext_char *VAR_10 = FUNC_4(VAR_0, VAR_1->pool, sizeof *VAR_2->first_char);
 fz_point VAR_11, VAR_12;

 if (!VAR_2->first_char)
  VAR_2->first_char = VAR_2->last_char = VAR_10;
 else
 {
  VAR_2->last_char->next = VAR_10;
  VAR_2->last_char = VAR_10;
 }

 VAR_10->c = VAR_6;
 VAR_10->color = VAR_9;
 VAR_10->origin = *VAR_7;
 VAR_10->size = VAR_5;
 VAR_10->font = VAR_4;

 if (VAR_2->wmode == 0)
 {
  VAR_11.x = 0;
  VAR_12.x = 0;
  VAR_11.y = FUNC_0(VAR_0, VAR_4);
  VAR_12.y = FUNC_2(VAR_0, VAR_4);
 }
 else
 {
  fz_rect VAR_13 = FUNC_1(VAR_0, VAR_4);
  VAR_11.x = VAR_13.x1;
  VAR_12.x = VAR_13.x0;
  VAR_11.y = 0;
  VAR_12.y = 0;
 }
 VAR_11 = FUNC_5(VAR_11, VAR_3);
 VAR_12 = FUNC_5(VAR_12, VAR_3);

 VAR_10->quad.ll = FUNC_3(VAR_7->x + VAR_12.x, VAR_7->y + VAR_12.y);
 VAR_10->quad.ul = FUNC_3(VAR_7->x + VAR_11.x, VAR_7->y + VAR_11.y);
 VAR_10->quad.lr = FUNC_3(VAR_8->x + VAR_12.x, VAR_8->y + VAR_12.y);
 VAR_10->quad.ur = FUNC_3(VAR_8->x + VAR_11.x, VAR_8->y + VAR_11.y);

 return VAR_10;
}
