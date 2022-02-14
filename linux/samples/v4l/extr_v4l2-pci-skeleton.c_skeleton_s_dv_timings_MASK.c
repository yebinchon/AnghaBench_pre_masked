
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_dv_timings {int dummy; } ;
struct skeleton {scalar_t__ input; int format; struct v4l2_dv_timings timings; int queue; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct skeleton*,int *) ;
 int FUNC_1 (struct v4l2_dv_timings*,int *,int ,int *,int *) ;
 scalar_t__ FUNC_2 (struct v4l2_dv_timings*,struct v4l2_dv_timings*,int ,int) ;
 int FUNC_3 (struct v4l2_dv_timings*,int *,int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 struct skeleton* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_4, void *VAR_5,
     struct v4l2_dv_timings *VAR_6)
{
 struct skeleton *VAR_7 = FUNC_5(VAR_4);


 if (VAR_7->input == 0)
  return -VAR_2;


 if (!FUNC_3(VAR_6, &VAR_3, ((void*)0), ((void*)0)))
  return -VAR_1;


 if (!FUNC_1(VAR_6, &VAR_3,
          0, ((void*)0), ((void*)0)))
  return -VAR_1;


 if (FUNC_2(VAR_6, &VAR_7->timings, 0, 0))
  return 0;





 if (FUNC_4(&VAR_7->queue))
  return -VAR_0;




 VAR_7->timings = *VAR_6;


 FUNC_0(VAR_7, &VAR_7->format);
 return 0;
}
