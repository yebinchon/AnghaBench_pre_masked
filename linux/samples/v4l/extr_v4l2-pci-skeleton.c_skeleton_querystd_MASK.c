
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct skeleton {scalar_t__ input; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct skeleton* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6, v4l2_std_id *VAR_7)
{
 struct skeleton *VAR_8 = FUNC_1(VAR_5);


 if (VAR_8->input)
  return -VAR_0;
 return 0;
}
