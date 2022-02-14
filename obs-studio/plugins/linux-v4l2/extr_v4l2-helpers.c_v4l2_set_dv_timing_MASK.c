
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_dv_timings {int dummy; } ;
typedef int int_fast32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct v4l2_dv_timings*,int) ;
 scalar_t__ FUNC_1 (int,int ,struct v4l2_dv_timings*) ;

int_fast32_t FUNC_2(int_fast32_t VAR_1, int *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return -1;

 if (*VAR_2 == -1)
  return 0;

 struct v4l2_dv_timings VAR_3;

 if (FUNC_0(VAR_1, &VAR_3, *VAR_2) < 0)
  return -1;

 if (FUNC_1(VAR_1, VAR_0, &VAR_3) < 0)
  return -1;

 return 0;
}
