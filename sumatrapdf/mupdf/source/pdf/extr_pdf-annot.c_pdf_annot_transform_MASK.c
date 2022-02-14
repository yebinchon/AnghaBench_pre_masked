
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ap; int obj; } ;
typedef TYPE_1__ pdf_annot ;
struct TYPE_9__ {scalar_t__ x1; scalar_t__ x0; scalar_t__ y1; scalar_t__ y0; } ;
typedef TYPE_2__ fz_rect ;
typedef int fz_matrix ;
typedef int fz_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,float,float) ;
 TYPE_2__ FUNC_2 (TYPE_2__,int ) ;
 int FUNC_3 (float,float) ;
 TYPE_2__ FUNC_4 (int *,int ,int ) ;
 TYPE_2__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

fz_matrix
FUNC_7(fz_context *VAR_1, pdf_annot *VAR_2)
{
 fz_rect VAR_3, VAR_4;
 fz_matrix VAR_5;
 float VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_4 = FUNC_4(VAR_1, VAR_2->obj, FUNC_0(VAR_0));
 VAR_3 = FUNC_5(VAR_1, VAR_2->ap);
 VAR_5 = FUNC_6(VAR_1, VAR_2->ap);

 VAR_3 = FUNC_2(VAR_3, VAR_5);
 if (VAR_3.x1 == VAR_3.x0)
  VAR_6 = 0;
 else
  VAR_6 = (VAR_4.x1 - VAR_4.x0) / (VAR_3.x1 - VAR_3.x0);
 if (VAR_3.y1 == VAR_3.y0)
  VAR_7 = 0;
 else
  VAR_7 = (VAR_4.y1 - VAR_4.y0) / (VAR_3.y1 - VAR_3.y0);
 VAR_8 = VAR_4.x0 - VAR_3.x0;
 VAR_9 = VAR_4.y0 - VAR_3.y0;

 return FUNC_1(FUNC_3(VAR_8, VAR_9), VAR_6, VAR_7);
}
