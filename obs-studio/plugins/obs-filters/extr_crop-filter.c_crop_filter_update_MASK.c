
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crop_filter_data {int absolute; int left; int top; int right; int bottom; int abs_cx; int abs_cy; } ;
typedef int obs_data_t ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, obs_data_t *VAR_1)
{
 struct crop_filter_data *VAR_2 = VAR_0;

 VAR_2->absolute = !FUNC_0(VAR_1, "relative");
 VAR_2->left = (int)FUNC_1(VAR_1, "left");
 VAR_2->top = (int)FUNC_1(VAR_1, "top");
 VAR_2->right = (int)FUNC_1(VAR_1, "right");
 VAR_2->bottom = (int)FUNC_1(VAR_1, "bottom");
 VAR_2->abs_cx = (int)FUNC_1(VAR_1, "cx");
 VAR_2->abs_cy = (int)FUNC_1(VAR_1, "cy");
}
