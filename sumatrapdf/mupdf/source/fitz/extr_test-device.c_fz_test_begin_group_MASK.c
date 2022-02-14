
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ passthrough; } ;
typedef TYPE_1__ fz_test_device ;
typedef int fz_rect ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int FUNC_0 (int *,scalar_t__,int ,int *,int,int,int,float) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_device *VAR_1, fz_rect VAR_2, fz_colorspace *VAR_3, int VAR_4, int VAR_5, int VAR_6, float VAR_7)
{
 fz_test_device *VAR_8 = (fz_test_device*)VAR_1;

 if (VAR_8->passthrough)
  FUNC_0(VAR_0, VAR_8->passthrough, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
