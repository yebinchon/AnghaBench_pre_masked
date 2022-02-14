
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct file* vm_file; } ;
struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct file {struct socket* private_data; } ;
struct TYPE_2__ {int mapped; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct vm_area_struct *VAR_0)
{
 struct file *VAR_1 = VAR_0->vm_file;
 struct socket *VAR_2 = VAR_1->private_data;
 struct sock *VAR_3 = VAR_2->sk;

 if (VAR_3)
  FUNC_0(&FUNC_1(VAR_3)->mapped);
}
