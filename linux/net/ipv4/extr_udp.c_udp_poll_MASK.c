
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_shutdown; } ;
struct file {int f_flags; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int reader_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*,struct socket*,int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct sock*) ;

__poll_t FUNC_4(struct file *VAR_4, struct socket *VAR_5, poll_table *VAR_6)
{
 __poll_t VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6);
 struct sock *VAR_8 = VAR_5->sk;

 if (!FUNC_2(&FUNC_3(VAR_8)->reader_queue))
  VAR_7 |= VAR_0 | VAR_1;


 if ((VAR_7 & VAR_1) && !(VAR_4->f_flags & VAR_2) &&
     !(VAR_8->sk_shutdown & VAR_3) && FUNC_1(VAR_8) == -1)
  VAR_7 &= ~(VAR_0 | VAR_1);

 return VAR_7;

}
