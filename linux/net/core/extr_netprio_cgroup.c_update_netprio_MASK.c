
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int sk_cgrp_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 struct socket* FUNC_1 (struct file*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const void *VAR_1, struct file *VAR_2, unsigned VAR_3)
{
 int VAR_4;
 struct socket *VAR_5 = FUNC_1(VAR_2, &VAR_4);
 if (VAR_5) {
  FUNC_2(&VAR_0);
  FUNC_0(&VAR_5->sk->sk_cgrp_data,
     (unsigned long)VAR_1);
  FUNC_3(&VAR_0);
 }
 return 0;
}
