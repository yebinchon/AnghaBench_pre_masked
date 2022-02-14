
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_shutdown; TYPE_1__* sk_socket; int sk_write_pending; scalar_t__ sk_err; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,struct sock*) ;
 int FUNC_7 (int ,struct sock*) ;
 int FUNC_8 (struct sock*) ;
 scalar_t__ FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,long*,int,int *) ;
 int FUNC_11 (long) ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_12(struct sock *VAR_10, long *VAR_11)
{
 int VAR_12 = 0;
 long VAR_13 = 0;
 long VAR_14 = *VAR_11;
 FUNC_0(VAR_8, VAR_9);

 if (FUNC_9(VAR_10))
  VAR_14 = VAR_13 = (FUNC_2() % (VAR_2 / 5)) + 2;

 FUNC_1(FUNC_8(VAR_10), &VAR_8);

 while (1) {
  FUNC_7(VAR_5, VAR_10);

  if (VAR_10->sk_err || (VAR_10->sk_shutdown & VAR_4))
   goto do_error;
  if (!*VAR_11)
   goto do_eagain;
  if (FUNC_5(VAR_7))
   goto do_interrupted;
  FUNC_6(VAR_5, VAR_10);
  if (FUNC_9(VAR_10) && !VAR_13)
   break;

  FUNC_4(VAR_6, &VAR_10->sk_socket->flags);
  VAR_10->sk_write_pending++;
  FUNC_10(VAR_10, &VAR_14, VAR_10->sk_err ||
        (VAR_10->sk_shutdown & VAR_4) ||
        (FUNC_9(VAR_10) &&
        !VAR_13), &VAR_8);
  VAR_10->sk_write_pending--;

  if (VAR_13) {
   VAR_13 -= VAR_14;
   VAR_14 = *VAR_11;
   if (VAR_14 != VAR_3 &&
       (VAR_14 -= VAR_13) < 0)
    VAR_14 = 0;
   VAR_13 = 0;
  }
  *VAR_11 = VAR_14;
 }
out:
 FUNC_3(FUNC_8(VAR_10), &VAR_8);
 return VAR_12;

do_error:
 VAR_12 = -VAR_1;
 goto out;
do_eagain:





 FUNC_4(VAR_6, &VAR_10->sk_socket->flags);
 VAR_12 = -VAR_0;
 goto out;
do_interrupted:
 VAR_12 = FUNC_11(*VAR_11);
 goto out;
}
