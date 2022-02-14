
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ passthrough; } ;
typedef TYPE_1__ fz_test_device ;
typedef int fz_stroke_state ;
typedef int fz_rect ;
typedef int fz_path ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,scalar_t__,int const*,int const*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_device *VAR_1, const fz_path *VAR_2, const fz_stroke_state *VAR_3, fz_matrix VAR_4, fz_rect VAR_5)
{
 fz_test_device *VAR_6 = (fz_test_device*)VAR_1;

 if (VAR_6->passthrough)
  FUNC_0(VAR_0, VAR_6->passthrough, VAR_2, VAR_3, VAR_4, VAR_5);
}
