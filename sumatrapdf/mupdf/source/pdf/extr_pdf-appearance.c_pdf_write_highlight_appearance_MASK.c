
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_11__ {int obj; TYPE_1__* page; } ;
typedef TYPE_2__ pdf_annot ;
typedef int fz_rect ;
struct TYPE_12__ {float x; float y; } ;
typedef TYPE_3__ fz_point ;
typedef int fz_context ;
typedef int fz_buffer ;
struct TYPE_10__ {int doc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 float FUNC_1 (int *,TYPE_3__*,int *,int) ;
 int FUNC_2 (int *,int *,char*,...) ;
 int VAR_11 ;
 TYPE_3__ FUNC_3 (float,float) ;
 float FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int *,int ,int ) ;
 int * FUNC_8 (int *,int *,int ,int) ;
 int FUNC_9 (int *,int *,int ,float) ;
 int * FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,TYPE_2__*,int *) ;
 float FUNC_12 (float) ;
 int FUNC_13 (int *,TYPE_3__*,float) ;

__attribute__((used)) static void
FUNC_14(fz_context *VAR_12, pdf_annot *VAR_13, fz_buffer *VAR_14, fz_rect *VAR_15, pdf_obj **VAR_16)
{
 pdf_obj *VAR_17, *VAR_18;
 pdf_obj *VAR_19;
 fz_point VAR_20[4], VAR_21[4], VAR_22;
 float VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29, VAR_30;

 *VAR_15 = VAR_11;


 *VAR_16 = FUNC_10(VAR_12, VAR_13->page->doc, 1);
 VAR_17 = FUNC_8(VAR_12, *VAR_16, FUNC_0(VAR_1), 1);
 VAR_18 = FUNC_8(VAR_12, VAR_17, FUNC_0(VAR_2), 2);
 FUNC_7(VAR_12, VAR_18, FUNC_0(VAR_7), FUNC_0(VAR_1));
 FUNC_7(VAR_12, VAR_18, FUNC_0(VAR_0), FUNC_0(VAR_5));
 VAR_23 = FUNC_4(VAR_12, VAR_13);
 if (VAR_23 < 1)
  FUNC_9(VAR_12, VAR_18, FUNC_0(VAR_10), VAR_23);

 FUNC_11(VAR_12, VAR_13, VAR_14);

 FUNC_2(VAR_12, VAR_14, "/H gs\n");

 VAR_19 = FUNC_6(VAR_12, VAR_13->obj, FUNC_0(VAR_6));
 VAR_30 = FUNC_5(VAR_12, VAR_19);
 if (VAR_30 > 0)
 {
  for (VAR_29 = 0; VAR_29 < VAR_30; VAR_29 += 8)
  {
   VAR_24 = FUNC_1(VAR_12, VAR_20, VAR_19, VAR_29);
   VAR_25 = VAR_24 / 4.2425f;
   VAR_26 = VAR_20[VAR_4].x - VAR_20[VAR_3].x;
   VAR_27 = VAR_20[VAR_4].y - VAR_20[VAR_3].y;
   VAR_28 = FUNC_12(VAR_26 * VAR_26 + VAR_27 * VAR_27);
   VAR_22 = FUNC_3(VAR_26 * VAR_25 / VAR_28, VAR_27 * VAR_25 / VAR_28);

   VAR_21[VAR_3].x = VAR_20[VAR_3].x - VAR_22.x - VAR_22.y;
   VAR_21[VAR_3].y = VAR_20[VAR_3].y - VAR_22.y + VAR_22.x;
   VAR_21[VAR_8].x = VAR_20[VAR_8].x - VAR_22.x + VAR_22.y;
   VAR_21[VAR_8].y = VAR_20[VAR_8].y - VAR_22.y - VAR_22.x;
   VAR_21[VAR_4].x = VAR_20[VAR_4].x + VAR_22.x - VAR_22.y;
   VAR_21[VAR_4].y = VAR_20[VAR_4].y + VAR_22.y + VAR_22.x;
   VAR_21[VAR_9].x = VAR_20[VAR_9].x + VAR_22.x + VAR_22.y;
   VAR_21[VAR_9].y = VAR_20[VAR_9].y + VAR_22.y - VAR_22.x;

   FUNC_2(VAR_12, VAR_14, "%g %g m\n", VAR_20[VAR_3].x, VAR_20[VAR_3].y);
   FUNC_2(VAR_12, VAR_14, "%g %g %g %g %g %g c\n",
    VAR_21[VAR_3].x, VAR_21[VAR_3].y,
    VAR_21[VAR_8].x, VAR_21[VAR_8].y,
    VAR_20[VAR_8].x, VAR_20[VAR_8].y);
   FUNC_2(VAR_12, VAR_14, "%g %g l\n", VAR_20[VAR_9].x, VAR_20[VAR_9].y);
   FUNC_2(VAR_12, VAR_14, "%g %g %g %g %g %g c\n",
    VAR_21[VAR_9].x, VAR_21[VAR_9].y,
    VAR_21[VAR_4].x, VAR_21[VAR_4].y,
    VAR_20[VAR_4].x, VAR_20[VAR_4].y);
   FUNC_2(VAR_12, VAR_14, "f\n");

   FUNC_13(VAR_15, VAR_20, VAR_24/16);
   FUNC_13(VAR_15, VAR_21, 0);
  }
 }
}
