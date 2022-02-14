
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int pdf_device ;
struct TYPE_19__ {int font_size; int buf; } ;
typedef TYPE_1__ gstate ;
struct TYPE_23__ {int e; int f; } ;
struct TYPE_20__ {int len; int wmode; int font; TYPE_3__* items; TYPE_5__ trm; } ;
typedef TYPE_2__ fz_text_span ;
struct TYPE_21__ {int x; int y; int gid; } ;
typedef TYPE_3__ fz_text_item ;
struct TYPE_22__ {int x; int y; } ;
typedef TYPE_4__ fz_point ;
typedef TYPE_5__ fz_matrix ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *) ;
 float FUNC_1 (int *,int ,int,int) ;
 int FUNC_2 (int *,int ,char*,...) ;
 int FUNC_3 (int *,int ,char*) ;
 TYPE_5__ FUNC_4 (TYPE_5__,TYPE_5__) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 TYPE_5__ FUNC_6 (TYPE_5__) ;
 TYPE_5__ FUNC_7 (TYPE_5__,float,float) ;
 TYPE_5__ FUNC_8 (int,int) ;
 TYPE_4__ FUNC_9 (TYPE_4__,TYPE_5__) ;

__attribute__((used)) static void
FUNC_10(fz_context *VAR_0, pdf_device *VAR_1, fz_text_span *VAR_2)
{
 gstate *VAR_3 = FUNC_0(VAR_1);
 fz_matrix VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 fz_matrix VAR_9;
 fz_point VAR_10;
 float VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;

 if (VAR_2->len == 0)
  return;

 VAR_9 = FUNC_8(1 / VAR_3->font_size, 1 / VAR_3->font_size);

 VAR_4 = VAR_2->trm;
 VAR_4.e = VAR_2->items[0].x;
 VAR_4.f = VAR_2->items[0].y;

 VAR_5 = FUNC_4(VAR_9, VAR_4);
 VAR_6 = VAR_5;

 VAR_8 = FUNC_6(VAR_5);
 VAR_7 = FUNC_6(VAR_4);

 FUNC_2(VAR_0, VAR_3->buf, "%M Tm\n[<", &VAR_5);

 for (VAR_14 = 0; VAR_14 < VAR_2->len; ++VAR_14)
 {
  fz_text_item *VAR_15 = &VAR_2->items[VAR_14];
  if (VAR_15->gid < 0)
   continue;


  VAR_10.x = VAR_15->x - VAR_4.e;
  VAR_10.y = VAR_15->y - VAR_4.f;
  VAR_10 = FUNC_9(VAR_10, VAR_7);
  VAR_12 = (int)(VAR_10.x * 1000 + (VAR_10.x < 0 ? -0.5f : 0.5f));
  VAR_13 = (int)(VAR_10.y * 1000 + (VAR_10.y < 0 ? -0.5f : 0.5f));

  VAR_4.e = VAR_15->x;
  VAR_4.f = VAR_15->y;

  if (VAR_12 != 0 || VAR_13 != 0)
  {
   if (VAR_2->wmode == 0 && VAR_13 == 0)
    FUNC_2(VAR_0, VAR_3->buf, ">%d<", -VAR_12);
   else if (VAR_2->wmode == 1 && VAR_12 == 0)
    FUNC_2(VAR_0, VAR_3->buf, ">%d<", -VAR_13);
   else
   {

    VAR_5 = FUNC_4(VAR_9, VAR_4);
    VAR_10.x = VAR_5.e - VAR_6.e;
    VAR_10.y = VAR_5.f - VAR_6.f;
    VAR_10 = FUNC_9(VAR_10, VAR_8);
    FUNC_2(VAR_0, VAR_3->buf, ">]TJ\n%g %g Td\n[<", VAR_10.x, VAR_10.y);
    VAR_6 = VAR_5;
   }
  }

  if (FUNC_5(VAR_0, VAR_2->font))
   FUNC_2(VAR_0, VAR_3->buf, "%02x", VAR_15->gid);
  else
   FUNC_2(VAR_0, VAR_3->buf, "%04x", VAR_15->gid);

  VAR_11 = FUNC_1(VAR_0, VAR_2->font, VAR_15->gid, VAR_2->wmode);
  if (VAR_2->wmode == 0)
   VAR_4 = FUNC_7(VAR_4, VAR_11, 0);
  else
   VAR_4 = FUNC_7(VAR_4, 0, VAR_11);
 }

 FUNC_3(VAR_0, VAR_3->buf, ">]TJ\n");
}
