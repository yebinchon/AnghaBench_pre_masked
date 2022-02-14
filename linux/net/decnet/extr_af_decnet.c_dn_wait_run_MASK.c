
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {TYPE_1__* sk_socket; } ;
struct dn_scp {scalar_t__ state; } ;
struct TYPE_2__ {int state; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct dn_scp* FUNC_1 (struct sock*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct sock*) ;
 long FUNC_6 (long) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (long) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_10, long *VAR_11)
{
 struct dn_scp *VAR_12 = FUNC_1(VAR_10);
 FUNC_0(VAR_9);
 int VAR_13 = 0;

 if (VAR_12->state == VAR_2)
  goto out;

 if (!*VAR_11)
  return -VAR_3;

 FUNC_4(FUNC_8(VAR_10), &VAR_9, VAR_7);
 for(;;) {
  FUNC_5(VAR_10);
  if (VAR_12->state == VAR_1 || VAR_12->state == VAR_0)
   *VAR_11 = FUNC_6(*VAR_11);
  FUNC_3(VAR_10);
  VAR_13 = 0;
  if (VAR_12->state == VAR_2)
   break;
  VAR_13 = FUNC_9(VAR_10);
  if (VAR_13)
   break;
  VAR_13 = FUNC_10(*VAR_11);
  if (FUNC_7(VAR_8))
   break;
  VAR_13 = -VAR_4;
  if (!*VAR_11)
   break;
  FUNC_4(FUNC_8(VAR_10), &VAR_9, VAR_7);
 }
 FUNC_2(FUNC_8(VAR_10), &VAR_9);
out:
 if (VAR_13 == 0) {
  VAR_10->sk_socket->state = VAR_5;
 } else if (VAR_12->state != VAR_1 && VAR_12->state != VAR_0) {
  VAR_10->sk_socket->state = VAR_6;
 }
 return VAR_13;
}
