
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fz_pixmap ;
typedef int fz_matrix ;
struct TYPE_2__ {int flags; } ;
typedef TYPE_1__ fz_draw_device ;
typedef int fz_device ;
typedef int fz_context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;

fz_device *
FUNC_1(fz_context *VAR_1, fz_matrix VAR_2, fz_pixmap *VAR_3)
{
 fz_draw_device *VAR_4 = (fz_draw_device*)FUNC_0(VAR_1, VAR_2, VAR_3);
 VAR_4->flags |= VAR_0;
 return (fz_device*)VAR_4;
}
