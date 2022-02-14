
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prev; } ;
struct sock {int sk_shutdown; scalar_t__ sk_state; TYPE_1__ sk_receive_queue; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff const* FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int VAR_5 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int VAR_6 ;
 long FUNC_5 (long) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (long) ;
 int VAR_7 ;

int FUNC_10(struct sock *VAR_8, int *VAR_9, long *VAR_10,
    const struct sk_buff *VAR_11)
{
 int VAR_12;
 FUNC_0(VAR_7, VAR_6);

 FUNC_4(FUNC_7(VAR_8), &VAR_7, VAR_2);


 VAR_12 = FUNC_8(VAR_8);
 if (VAR_12)
  goto out_err;

 if (FUNC_1(VAR_8->sk_receive_queue.prev) != VAR_11)
  goto out;


 if (VAR_8->sk_shutdown & VAR_1)
  goto out_noerr;




 VAR_12 = -VAR_0;
 if (FUNC_2(VAR_8) &&
     !(VAR_8->sk_state == VAR_3 || VAR_8->sk_state == VAR_4))
  goto out_err;


 if (FUNC_6(VAR_5))
  goto interrupted;

 VAR_12 = 0;
 *VAR_10 = FUNC_5(*VAR_10);
out:
 FUNC_3(FUNC_7(VAR_8), &VAR_7);
 return VAR_12;
interrupted:
 VAR_12 = FUNC_9(*VAR_10);
out_err:
 *VAR_9 = VAR_12;
 goto out;
out_noerr:
 *VAR_9 = 0;
 VAR_12 = 1;
 goto out;
}
