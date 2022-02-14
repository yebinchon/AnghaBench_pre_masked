
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct skeleton {int std; scalar_t__ input; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct skeleton* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2, v4l2_std_id *VAR_3)
{
 struct skeleton *VAR_4 = FUNC_0(VAR_1);


 if (VAR_4->input)
  return -VAR_0;

 *VAR_3 = VAR_4->std;
 return 0;
}
