
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_dv_timings {int dummy; } ;
struct skeleton {scalar_t__ input; struct v4l2_dv_timings timings; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct skeleton* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
     struct v4l2_dv_timings *VAR_3)
{
 struct skeleton *VAR_4 = FUNC_0(VAR_1);


 if (VAR_4->input == 0)
  return -VAR_0;

 *VAR_3 = VAR_4->timings;
 return 0;
}
