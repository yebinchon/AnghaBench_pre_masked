
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_annot ;
struct TYPE_3__ {int y1; int x1; int y0; int x0; } ;
typedef TYPE_1__ fz_rect ;
typedef int fz_context ;
typedef int fz_buffer ;


 int FUNC_0 (int *,int *,float,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int *,int,int) ;
 float FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, pdf_annot *VAR_1, fz_buffer *VAR_2, fz_rect *VAR_3)
{
 float VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_2);
 VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2);

 FUNC_0(VAR_0, VAR_2, VAR_4, VAR_3->x0, VAR_3->y0, VAR_3->x1, VAR_3->y1);
 FUNC_1(VAR_0, VAR_2, VAR_5, VAR_6);
}
