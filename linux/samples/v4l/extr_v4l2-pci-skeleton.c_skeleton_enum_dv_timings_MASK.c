
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_enum_dv_timings {int dummy; } ;
struct skeleton {scalar_t__ input; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_enum_dv_timings*,int *,int *,int *) ;
 struct skeleton* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
        struct v4l2_enum_dv_timings *VAR_4)
{
 struct skeleton *VAR_5 = FUNC_1(VAR_2);


 if (VAR_5->input == 0)
  return -VAR_0;

 return FUNC_0(VAR_4, &VAR_1,
     ((void*)0), ((void*)0));
}
