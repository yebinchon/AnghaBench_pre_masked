
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_11__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_rect ;
struct TYPE_12__ {int x; int y; } ;
typedef TYPE_2__ fz_point ;
typedef int fz_context ;
typedef int fz_buffer ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 float FUNC_1 (int *,TYPE_2__*,int *,int) ;
 int FUNC_2 (int *,int *,char*,...) ;
 int VAR_5 ;
 TYPE_2__ FUNC_3 (int,int) ;
 TYPE_2__ FUNC_4 (TYPE_2__,TYPE_2__,int) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,TYPE_1__*,int *) ;
 float FUNC_8 (int) ;
 int FUNC_9 (int *,TYPE_2__*,float) ;

__attribute__((used)) static void
FUNC_10(fz_context *VAR_6, pdf_annot *VAR_7, fz_buffer *VAR_8, fz_rect *VAR_9)
{
 fz_point VAR_10[4], VAR_11, VAR_12, VAR_13, VAR_14;
 float VAR_15, VAR_16, VAR_17;
 pdf_obj *VAR_18;
 int VAR_19, VAR_20;

 *VAR_9 = VAR_5;

 FUNC_7(VAR_6, VAR_7, VAR_8);

 VAR_18 = FUNC_6(VAR_6, VAR_7->obj, FUNC_0(VAR_2));
 VAR_20 = FUNC_5(VAR_6, VAR_18);
 if (VAR_20 > 0)
 {
  for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19 += 8)
  {
   int VAR_21 = 1;
   VAR_15 = FUNC_1(VAR_6, VAR_10, VAR_18, VAR_19);
   VAR_14 = FUNC_3(VAR_10[VAR_1].x - VAR_10[VAR_0].x, VAR_10[VAR_1].y - VAR_10[VAR_0].y);
   VAR_17 = FUNC_8(VAR_14.x * VAR_14.x + VAR_14.y * VAR_14.y);
   VAR_16 = 0;

   FUNC_2(VAR_6, VAR_8, "%g w\n", VAR_15/16);
   FUNC_2(VAR_6, VAR_8, "%g %g m\n", VAR_10[VAR_0].x, VAR_10[VAR_0].y);
   while (VAR_16 < VAR_17)
   {
    VAR_16 += VAR_15/7;
    VAR_11 = FUNC_4(VAR_10[VAR_0], VAR_10[VAR_1], VAR_16/VAR_17);
    if (VAR_21)
    {
     VAR_12 = FUNC_4(VAR_10[VAR_3], VAR_10[VAR_4], VAR_16/VAR_17);
     VAR_13 = FUNC_4(VAR_11, VAR_12, 1/7.0f);
     FUNC_2(VAR_6, VAR_8, "%g %g l\n", VAR_13.x, VAR_13.y);
    }
    else
     FUNC_2(VAR_6, VAR_8, "%g %g l\n", VAR_11.x, VAR_11.y);
    VAR_21 = !VAR_21;
   }
   FUNC_2(VAR_6, VAR_8, "S\n");

   FUNC_9(VAR_9, VAR_10, VAR_15/16);
  }
 }
}
