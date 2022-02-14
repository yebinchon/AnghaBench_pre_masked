
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_14__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
struct TYPE_15__ {void* y1; void* y0; void* x1; void* x0; } ;
typedef TYPE_2__ fz_rect ;
struct TYPE_16__ {void* y; void* x; } ;
typedef TYPE_3__ fz_point ;
typedef int fz_context ;
typedef int fz_buffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,char*,void*,void*) ;
 int FUNC_2 (int *,int *,char*) ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ FUNC_3 (TYPE_2__,float) ;
 TYPE_2__ FUNC_4 (TYPE_2__,TYPE_3__) ;
 int FUNC_5 (int *,int *,int) ;
 void* FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *,int ,int ) ;
 float FUNC_9 (int *,TYPE_1__*,int *) ;
 int FUNC_10 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_11(fz_context *VAR_2, pdf_annot *VAR_3, fz_buffer *VAR_4, fz_rect *VAR_5, int VAR_6)
{
 pdf_obj *VAR_7;
 fz_point VAR_8;
 int VAR_9, VAR_10;
 float VAR_11;
 int VAR_12;

 VAR_11 = FUNC_9(VAR_2, VAR_3, VAR_4);
 VAR_12 = FUNC_10(VAR_2, VAR_3, VAR_4);

 *VAR_5 = VAR_1;

 VAR_7 = FUNC_8(VAR_2, VAR_3->obj, FUNC_0(VAR_0));
 VAR_10 = FUNC_7(VAR_2, VAR_7) / 2;
 if (VAR_10 > 0)
 {
  for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9)
  {
   VAR_8.x = FUNC_6(VAR_2, VAR_7, VAR_9*2+0);
   VAR_8.y = FUNC_6(VAR_2, VAR_7, VAR_9*2+1);
   if (VAR_9 == 0)
   {
    VAR_5->x0 = VAR_5->x1 = VAR_8.x;
    VAR_5->y0 = VAR_5->y1 = VAR_8.y;
   }
   else
    *VAR_5 = FUNC_4(*VAR_5, VAR_8);
   if (VAR_9 == 0)
    FUNC_1(VAR_2, VAR_4, "%g %g m\n", VAR_8.x, VAR_8.y);
   else
    FUNC_1(VAR_2, VAR_4, "%g %g l\n", VAR_8.x, VAR_8.y);
  }
  if (VAR_6)
   FUNC_2(VAR_2, VAR_4, "h\n");
  FUNC_5(VAR_2, VAR_4, VAR_12);
  *VAR_5 = FUNC_3(*VAR_5, VAR_11);
 }
}
