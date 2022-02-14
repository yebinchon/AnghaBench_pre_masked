
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int pixelformat; int bytesperline; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; int type; } ;
typedef int int_fast32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,struct v4l2_format*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*,int*,int) ;

int_fast32_t FUNC_3(int_fast32_t VAR_3, int *VAR_4,
        int *VAR_5, int *VAR_6)
{
 bool VAR_7 = 0;
 int VAR_8, VAR_9;
 struct v4l2_format VAR_10;

 if (!VAR_3 || !VAR_4 || !VAR_5 || !VAR_6)
  return -1;


 VAR_10.type = VAR_0;

 if (FUNC_0(VAR_3, VAR_1, &VAR_10) < 0)
  return -1;

 if (*VAR_4 != -1) {
  FUNC_2(&VAR_8, &VAR_9, *VAR_4);
  VAR_10.fmt.pix.width = VAR_8;
  VAR_10.fmt.pix.height = VAR_9;
  VAR_7 = 1;
 }

 if (*VAR_5 != -1) {
  VAR_10.fmt.pix.pixelformat = *VAR_5;
  VAR_7 = 1;
 }

 if (VAR_7 && (FUNC_0(VAR_3, VAR_2, &VAR_10) < 0))
  return -1;

 *VAR_4 = FUNC_1(VAR_10.fmt.pix.width, VAR_10.fmt.pix.height);
 *VAR_5 = VAR_10.fmt.pix.pixelformat;
 *VAR_6 = VAR_10.fmt.pix.bytesperline;
 return 0;
}
