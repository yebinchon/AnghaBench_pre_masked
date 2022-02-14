
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct skeleton {int format; int queue; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,void*,struct v4l2_format*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct skeleton* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
      struct v4l2_format *VAR_3)
{
 struct skeleton *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;





 if (FUNC_1(&VAR_4->queue))
  return -VAR_0;


 VAR_4->format = VAR_3->fmt.pix;
 return 0;
}
