
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format {scalar_t__ pixelformat; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct skeleton {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct skeleton*,struct v4l2_pix_format*) ;
 struct skeleton* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
        struct v4l2_format *VAR_4)
{
 struct skeleton *VAR_5 = FUNC_1(VAR_2);
 struct v4l2_pix_format *VAR_6 = &VAR_4->fmt.pix;







 if (VAR_6->pixelformat != VAR_1)
  return -VAR_0;
 FUNC_0(VAR_5, VAR_6);
 return 0;
}
