
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; int sk; } ;
struct file {struct socket* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int (* poll ) (struct file*,struct socket*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct file*,struct socket*,int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_1, poll_table *VAR_2)
{
 struct socket *VAR_3 = VAR_1->private_data;
 __poll_t VAR_4 = FUNC_0(VAR_2), VAR_5 = 0;

 if (!VAR_3->ops->poll)
  return 0;

 if (FUNC_2(VAR_3->sk)) {

  if (VAR_4 & VAR_0)
   FUNC_1(VAR_3->sk, 1);


  VAR_5 = VAR_0;
 }

 return VAR_3->ops->poll(VAR_1, VAR_3, VAR_2) | VAR_5;
}
