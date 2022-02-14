
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int,struct file*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct file* FUNC_5 (struct socket*,int,int *) ;
 int FUNC_6 (struct socket*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_0, int VAR_1)
{
 struct file *VAR_2;
 int VAR_3 = FUNC_3(VAR_1);
 if (FUNC_7(VAR_3 < 0)) {
  FUNC_6(VAR_0);
  return VAR_3;
 }

 VAR_2 = FUNC_5(VAR_0, VAR_1, ((void*)0));
 if (!FUNC_0(VAR_2)) {
  FUNC_2(VAR_3, VAR_2);
  return VAR_3;
 }

 FUNC_4(VAR_3);
 return FUNC_1(VAR_2);
}
