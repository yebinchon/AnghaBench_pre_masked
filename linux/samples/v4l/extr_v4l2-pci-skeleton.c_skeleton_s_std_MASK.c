
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v4l2_std_id ;
struct skeleton {scalar_t__ std; int format; int queue; scalar_t__ input; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct skeleton*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct skeleton* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3, v4l2_std_id VAR_4)
{
 struct skeleton *VAR_5 = FUNC_2(VAR_2);


 if (VAR_5->input)
  return -VAR_1;






 if (VAR_4 == VAR_5->std)
  return 0;





 if (FUNC_1(&VAR_5->queue))
  return -VAR_0;



 VAR_5->std = VAR_4;


 FUNC_0(VAR_5, &VAR_5->format);
 return 0;
}
