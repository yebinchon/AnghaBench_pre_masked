
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_10__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_rect ;
struct TYPE_11__ {int y; int x; } ;
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
 TYPE_2__ FUNC_3 (TYPE_2__,TYPE_2__,int) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,TYPE_1__*,int *) ;
 int FUNC_7 (int *,TYPE_2__*,float) ;

__attribute__((used)) static void
FUNC_8(fz_context *VAR_6, pdf_annot *VAR_7, fz_buffer *VAR_8, fz_rect *VAR_9)
{
 fz_point VAR_10[4], VAR_11, VAR_12;
 float VAR_13;
 pdf_obj *VAR_14;
 int VAR_15, VAR_16;

 *VAR_9 = VAR_5;

 FUNC_6(VAR_6, VAR_7, VAR_8);

 VAR_14 = FUNC_5(VAR_6, VAR_7->obj, FUNC_0(VAR_2));
 VAR_16 = FUNC_4(VAR_6, VAR_14);
 if (VAR_16 > 0)
 {
  for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15 += 8)
  {



   VAR_13 = FUNC_1(VAR_6, VAR_10, VAR_14, VAR_15);
   VAR_11 = FUNC_3(VAR_10[VAR_0], VAR_10[VAR_3], 1/7.0f);
   VAR_12 = FUNC_3(VAR_10[VAR_1], VAR_10[VAR_4], 1/7.0f);

   FUNC_2(VAR_6, VAR_8, "%g w\n", VAR_13/16);
   FUNC_2(VAR_6, VAR_8, "%g %g m\n", VAR_11.x, VAR_11.y);
   FUNC_2(VAR_6, VAR_8, "%g %g l\n", VAR_12.x, VAR_12.y);
   FUNC_2(VAR_6, VAR_8, "S\n");

   FUNC_7(VAR_9, VAR_10, VAR_13/16);
  }
 }
}
