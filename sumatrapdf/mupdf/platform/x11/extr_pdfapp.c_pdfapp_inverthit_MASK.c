
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hit_count; int * hit_bbox; } ;
typedef TYPE_1__ pdfapp_t ;
typedef int fz_rect ;
typedef int fz_matrix ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;

void FUNC_4(pdfapp_t *VAR_0)
{
 fz_rect VAR_1;
 fz_matrix VAR_2;
 int VAR_3;

 FUNC_3(&VAR_2, VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_0->hit_count; VAR_3++)
 {
  VAR_1 = FUNC_0(VAR_0->hit_bbox[VAR_3]);
  VAR_1 = FUNC_1(VAR_1, VAR_2);
  FUNC_2(VAR_0, VAR_1);
 }
}
