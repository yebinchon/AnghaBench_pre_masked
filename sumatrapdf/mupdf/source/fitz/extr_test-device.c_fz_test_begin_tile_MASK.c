
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ passthrough; } ;
typedef TYPE_1__ fz_test_device ;
typedef int fz_rect ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,scalar_t__,int ,int ,float,float,int ,int) ;

__attribute__((used)) static int
FUNC_1(fz_context *VAR_0, fz_device *VAR_1, fz_rect VAR_2, fz_rect VAR_3, float VAR_4, float VAR_5, fz_matrix VAR_6, int VAR_7)
{
 fz_test_device *VAR_8 = (fz_test_device*)VAR_1;

 if (VAR_8->passthrough)
  return FUNC_0(VAR_0, VAR_8->passthrough, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 else
  return 0;
}
