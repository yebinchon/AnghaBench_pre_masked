
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numerator; int denominator; } ;
struct TYPE_5__ {TYPE_1__ timeperframe; } ;
struct TYPE_6__ {TYPE_2__ capture; } ;
struct v4l2_streamparm {TYPE_3__ parm; int type; } ;
typedef int int_fast32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,struct v4l2_streamparm*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*,int*,int) ;

int_fast32_t FUNC_3(int_fast32_t VAR_3, int *VAR_4)
{
 bool VAR_5 = 0;
 int VAR_6, VAR_7;
 struct v4l2_streamparm VAR_8;

 if (!VAR_3 || !VAR_4)
  return -1;


 VAR_8.type = VAR_0;

 if (FUNC_0(VAR_3, VAR_1, &VAR_8) < 0)
  return -1;

 if (*VAR_4 != -1) {
  FUNC_2(&VAR_6, &VAR_7, *VAR_4);
  VAR_8.parm.capture.timeperframe.numerator = VAR_6;
  VAR_8.parm.capture.timeperframe.denominator = VAR_7;
  VAR_5 = 1;
 }

 if (VAR_5 && (FUNC_0(VAR_3, VAR_2, &VAR_8) < 0))
  return -1;

 *VAR_4 = FUNC_1(VAR_8.parm.capture.timeperframe.numerator,
         VAR_8.parm.capture.timeperframe.denominator);
 return 0;
}
