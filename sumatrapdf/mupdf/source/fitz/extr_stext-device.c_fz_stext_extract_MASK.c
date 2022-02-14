
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ f; scalar_t__ e; } ;
struct TYPE_11__ {int len; int wmode; TYPE_1__* items; TYPE_3__ trm; int * font; } ;
typedef TYPE_2__ fz_text_span ;
typedef int fz_stext_device ;
typedef TYPE_3__ fz_matrix ;
typedef int fz_font ;
typedef int fz_context ;
struct TYPE_10__ {scalar_t__ gid; int ucs; scalar_t__ y; scalar_t__ x; } ;


 int FUNC_0 (int *,int *,int *,int ,scalar_t__,TYPE_3__,float,int ) ;
 float FUNC_1 (int *,int *,scalar_t__,int ) ;
 TYPE_3__ FUNC_2 (TYPE_3__,TYPE_3__) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, fz_stext_device *VAR_1, fz_text_span *VAR_2, fz_matrix VAR_3)
{
 fz_font *VAR_4 = VAR_2->font;
 fz_matrix VAR_5 = VAR_2->trm;
 fz_matrix VAR_6;
 float VAR_7;
 int VAR_8;

 if (VAR_2->len == 0)
  return;

 VAR_5.e = 0;
 VAR_5.f = 0;
 VAR_6 = FUNC_2(VAR_5, VAR_3);

 for (VAR_8 = 0; VAR_8 < VAR_2->len; VAR_8++)
 {

  VAR_5.e = VAR_2->items[VAR_8].x;
  VAR_5.f = VAR_2->items[VAR_8].y;
  VAR_6 = FUNC_2(VAR_5, VAR_3);


  if (VAR_2->items[VAR_8].gid >= 0)
   VAR_7 = FUNC_1(VAR_0, VAR_4, VAR_2->items[VAR_8].gid, VAR_2->wmode);
  else
   VAR_7 = 0;

  FUNC_0(VAR_0, VAR_1, VAR_4, VAR_2->items[VAR_8].ucs, VAR_2->items[VAR_8].gid, VAR_6, VAR_7, VAR_2->wmode);
 }
}
