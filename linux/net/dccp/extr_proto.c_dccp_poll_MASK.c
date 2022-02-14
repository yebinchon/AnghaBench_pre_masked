
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_state; int sk_shutdown; TYPE_1__* sk_socket; int sk_rmem_alloc; scalar_t__ sk_err; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 int FUNC_5 (struct file*,struct socket*,int *) ;

__poll_t FUNC_6(struct file *VAR_16, struct socket *VAR_17,
         poll_table *VAR_18)
{
 __poll_t VAR_19;
 struct sock *VAR_20 = VAR_17->sk;

 FUNC_5(VAR_16, VAR_17, VAR_18);
 if (VAR_20->sk_state == VAR_3)
  return FUNC_1(VAR_20);






 VAR_19 = 0;
 if (VAR_20->sk_err)
  VAR_19 = VAR_4;

 if (VAR_20->sk_shutdown == VAR_13 || VAR_20->sk_state == VAR_2)
  VAR_19 |= VAR_5;
 if (VAR_20->sk_shutdown & VAR_11)
  VAR_19 |= VAR_6 | VAR_9 | VAR_8;


 if ((1 << VAR_20->sk_state) & ~(VAR_0 | VAR_1)) {
  if (FUNC_0(&VAR_20->sk_rmem_alloc) > 0)
   VAR_19 |= VAR_6 | VAR_9;

  if (!(VAR_20->sk_shutdown & VAR_12)) {
   if (FUNC_4(VAR_20)) {
    VAR_19 |= VAR_7 | VAR_10;
   } else {
    FUNC_3(VAR_14, VAR_20);
    FUNC_2(VAR_15, &VAR_20->sk_socket->flags);





    if (FUNC_4(VAR_20))
     VAR_19 |= VAR_7 | VAR_10;
   }
  }
 }
 return VAR_19;
}
