
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_10__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
struct TYPE_11__ {scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; scalar_t__ y0; } ;
typedef TYPE_2__ fz_rect ;
struct TYPE_12__ {int y; int x; } ;
typedef TYPE_3__ fz_point ;
typedef int fz_context ;
typedef int fz_buffer ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int *,TYPE_3__*,int *,int) ;
 int FUNC_2 (int *,int *,char*,...) ;
 TYPE_2__ VAR_5 ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_6, pdf_annot *VAR_7, fz_buffer *VAR_8, fz_rect *VAR_9)
{
 fz_point VAR_10[4];
 pdf_obj *VAR_11;
 int VAR_12, VAR_13;

 FUNC_2(VAR_6, VAR_8, "1 0 0 RG\n");

 VAR_11 = FUNC_4(VAR_6, VAR_7->obj, FUNC_0(VAR_2));
 VAR_13 = FUNC_3(VAR_6, VAR_11);
 if (VAR_13 > 0)
 {
  *VAR_9 = VAR_5;
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12 += 8)
  {
   FUNC_1(VAR_6, VAR_10, VAR_11, VAR_12);
   FUNC_2(VAR_6, VAR_8, "%g %g m\n", VAR_10[VAR_0].x, VAR_10[VAR_0].y);
   FUNC_2(VAR_6, VAR_8, "%g %g l\n", VAR_10[VAR_1].x, VAR_10[VAR_1].y);
   FUNC_2(VAR_6, VAR_8, "%g %g l\n", VAR_10[VAR_4].x, VAR_10[VAR_4].y);
   FUNC_2(VAR_6, VAR_8, "%g %g l\n", VAR_10[VAR_3].x, VAR_10[VAR_3].y);
   FUNC_2(VAR_6, VAR_8, "s\n");
   FUNC_5(VAR_9, VAR_10, 1);
  }
 }
 else
 {
  FUNC_2(VAR_6, VAR_8, "%g %g m\n", VAR_9->x0+1, VAR_9->y0+1);
  FUNC_2(VAR_6, VAR_8, "%g %g l\n", VAR_9->x1-1, VAR_9->y0+1);
  FUNC_2(VAR_6, VAR_8, "%g %g l\n", VAR_9->x1-1, VAR_9->y1-1);
  FUNC_2(VAR_6, VAR_8, "%g %g l\n", VAR_9->x0+1, VAR_9->y1-1);
  FUNC_2(VAR_6, VAR_8, "s\n");
 }
}
