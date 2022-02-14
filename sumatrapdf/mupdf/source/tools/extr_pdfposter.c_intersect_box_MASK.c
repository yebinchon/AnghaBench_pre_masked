
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_document ;
struct TYPE_3__ {scalar_t__ x0; scalar_t__ y0; scalar_t__ x1; scalar_t__ y1; } ;
typedef TYPE_1__ fz_rect ;
typedef int fz_context ;


 void* FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int * FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int * FUNC_4 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, pdf_document *VAR_1, pdf_obj *VAR_2, pdf_obj *VAR_3, fz_rect VAR_4)
{
 pdf_obj *VAR_5 = FUNC_2(VAR_0, VAR_2, VAR_3);
 pdf_obj *VAR_6;
 fz_rect VAR_7;

 if (VAR_5 == ((void*)0))
  return;

 VAR_7.x0 = FUNC_0(VAR_0, VAR_5, 0);
 VAR_7.y0 = FUNC_0(VAR_0, VAR_5, 1);
 VAR_7.x1 = FUNC_0(VAR_0, VAR_5, 2);
 VAR_7.y1 = FUNC_0(VAR_0, VAR_5, 3);

 if (VAR_7.x0 < VAR_4.x0)
  VAR_7.x0 = VAR_4.x0;
 if (VAR_7.y0 < VAR_4.y0)
  VAR_7.y0 = VAR_4.y0;
 if (VAR_7.x1 > VAR_4.x1)
  VAR_7.x1 = VAR_4.x1;
 if (VAR_7.y1 > VAR_4.y1)
  VAR_7.y1 = VAR_4.y1;

 VAR_6 = FUNC_4(VAR_0, VAR_1, 4);
 FUNC_1(VAR_0, VAR_6, VAR_7.x0);
 FUNC_1(VAR_0, VAR_6, VAR_7.y0);
 FUNC_1(VAR_0, VAR_6, VAR_7.x1);
 FUNC_1(VAR_0, VAR_6, VAR_7.y1);
 FUNC_3(VAR_0, VAR_2, VAR_3, VAR_6);
}
