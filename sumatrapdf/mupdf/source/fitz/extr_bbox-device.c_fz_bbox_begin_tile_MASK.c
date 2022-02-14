
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fz_rect ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
struct TYPE_2__ {int ignore; } ;
typedef TYPE_1__ fz_bbox_device ;


 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(fz_context *VAR_0, fz_device *VAR_1, fz_rect VAR_2, fz_rect VAR_3, float VAR_4, float VAR_5, fz_matrix VAR_6, int VAR_7)
{
 fz_bbox_device *VAR_8 = (fz_bbox_device*)VAR_1;
 FUNC_0(VAR_0, VAR_1, FUNC_1(VAR_2, VAR_6), 0);
 VAR_8->ignore++;
 return 0;
}
