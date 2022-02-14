
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_dv_timings_cap {int dummy; } ;
struct skeleton {scalar_t__ input; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct v4l2_dv_timings_cap VAR_1 ;
 struct skeleton* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
       struct v4l2_dv_timings_cap *VAR_4)
{
 struct skeleton *VAR_5 = FUNC_0(VAR_2);


 if (VAR_5->input == 0)
  return -VAR_0;
 *VAR_4 = VAR_1;
 return 0;
}
