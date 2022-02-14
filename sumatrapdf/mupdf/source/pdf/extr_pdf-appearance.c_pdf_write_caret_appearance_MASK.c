
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_annot ;
struct TYPE_5__ {int x0; int x1; int y0; int y1; } ;
typedef TYPE_1__ fz_rect ;
typedef int fz_context ;
typedef int fz_buffer ;


 int FUNC_0 (int *,int *,char*) ;
 TYPE_1__ FUNC_1 (float,float,int,int) ;
 int FUNC_2 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, pdf_annot *VAR_1, fz_buffer *VAR_2, fz_rect *VAR_3, fz_rect *VAR_4)
{
 float VAR_5 = (VAR_3->x0 + VAR_3->x1) / 2;
 float VAR_6 = (VAR_3->y0 + VAR_3->y1) / 2;

 FUNC_2(VAR_0, VAR_1, VAR_2);

 FUNC_0(VAR_0, VAR_2, "0 0 m\n");
 FUNC_0(VAR_0, VAR_2, "10 0 10 7 10 14 c\n");
 FUNC_0(VAR_0, VAR_2, "10 7 10 0 20 0 c\n");
 FUNC_0(VAR_0, VAR_2, "f\n");

 *VAR_3 = FUNC_1(VAR_5 - 10, VAR_6 - 7, VAR_5 + 10, VAR_6 + 7);
 *VAR_4 = FUNC_1(0, 0, 20, 14);
}
