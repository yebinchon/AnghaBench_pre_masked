
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_dv_timings {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct skeleton {scalar_t__ input; TYPE_1__ v4l2_dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,char*,struct v4l2_dv_timings*,int) ;
 struct skeleton* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, void *VAR_8,
         struct v4l2_dv_timings *VAR_9)
{
 struct skeleton *VAR_10 = FUNC_2(VAR_7);


 if (VAR_10->input == 0)
  return -VAR_0;
 return 0;
}
