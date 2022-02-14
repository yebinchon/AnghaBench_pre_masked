
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_annot ;
struct TYPE_4__ {int x0; int y0; int x1; int y1; } ;
typedef TYPE_1__ fz_rect ;
typedef int fz_matrix ;
typedef int fz_context ;
typedef int fz_buffer ;


 int FUNC_0 (int *,int *,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_1, pdf_annot *VAR_2, fz_buffer *VAR_3,
 fz_rect *VAR_4, fz_rect *VAR_5, fz_matrix *VAR_6, pdf_obj **VAR_7)
{
 float VAR_8 = VAR_4->x0 + 1;
 float VAR_9 = VAR_4->y0 + 1;
 float VAR_10 = VAR_4->x1 - 1;
 float VAR_11 = VAR_4->y1 - 1;
 float VAR_12 = VAR_10 - VAR_8;
 float VAR_13 = VAR_11 - VAR_9;
 FUNC_0(VAR_1, VAR_3, "1 w\n0 G\n");
 FUNC_0(VAR_1, VAR_3, "%g %g %g %g re\n", VAR_8, VAR_9, VAR_12, VAR_13);
 FUNC_0(VAR_1, VAR_3, "%g %g m %g %g l\n", VAR_8, VAR_9, VAR_10, VAR_11);
 FUNC_0(VAR_1, VAR_3, "%g %g m %g %g l\n", VAR_10, VAR_9, VAR_8, VAR_11);
 FUNC_0(VAR_1, VAR_3, "s\n");
 *VAR_5 = *VAR_4;
 *VAR_6 = VAR_0;
}
