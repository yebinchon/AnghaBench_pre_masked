
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct socket {int state; struct sock* sk; } ;
struct sockaddr_pn {scalar_t__ spn_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_state; TYPE_1__* sk_prot; } ;
struct pn_sock {scalar_t__ dobject; int resource; } ;
struct TYPE_2__ {int (* connect ) (struct sock*,struct sockaddr*,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int const VAR_10 ;


 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct task_struct* VAR_17 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sock*) ;
 struct pn_sock* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sockaddr_pn*) ;
 int FUNC_5 (struct sockaddr_pn*) ;
 scalar_t__ FUNC_6 (struct socket*) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (struct sock*) ;
 long FUNC_9 (long) ;
 scalar_t__ FUNC_10 (struct task_struct*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (long) ;
 long FUNC_13 (struct sock*,int) ;
 int FUNC_14 (struct sock*,struct sockaddr*,int) ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_15(struct socket *VAR_19, struct sockaddr *VAR_20,
  int VAR_21, int VAR_22)
{
 struct sock *VAR_23 = VAR_19->sk;
 struct pn_sock *VAR_24 = FUNC_3(VAR_23);
 struct sockaddr_pn *VAR_25 = (struct sockaddr_pn *)VAR_20;
 struct task_struct *VAR_26 = VAR_17;
 long VAR_27 = FUNC_13(VAR_23, VAR_22 & VAR_9);
 int VAR_28;

 if (FUNC_6(VAR_19))
  return -VAR_8;
 if (VAR_21 < sizeof(struct sockaddr_pn))
  return -VAR_6;
 if (VAR_25->spn_family != VAR_0)
  return -VAR_1;

 FUNC_2(VAR_23);

 switch (VAR_19->state) {
 case 128:
  if (VAR_23->sk_state != VAR_14) {
   VAR_28 = -VAR_7;
   goto out;
  }
  break;
 case 129:
  VAR_28 = -VAR_2;
  goto out;
 default:
  VAR_28 = -VAR_7;
  goto out;
 }

 VAR_24->dobject = FUNC_4(VAR_25);
 VAR_24->resource = FUNC_5(VAR_25);
 VAR_19->state = 129;

 VAR_28 = VAR_23->sk_prot->connect(VAR_23, VAR_20, VAR_21);
 if (VAR_28) {
  VAR_19->state = 128;
  VAR_24->dobject = 0;
  goto out;
 }

 while (VAR_23->sk_state == VAR_16) {
  FUNC_0(VAR_18);

  if (!VAR_27) {
   VAR_28 = -VAR_5;
   goto out;
  }
  if (FUNC_10(VAR_26)) {
   VAR_28 = FUNC_12(VAR_27);
   goto out;
  }

  FUNC_7(FUNC_11(VAR_23), &VAR_18,
      VAR_11);
  FUNC_8(VAR_23);
  VAR_27 = FUNC_9(VAR_27);
  FUNC_2(VAR_23);
  FUNC_1(FUNC_11(VAR_23), &VAR_18);
 }

 if ((1 << VAR_23->sk_state) & (VAR_13|VAR_12))
  VAR_28 = 0;
 else if (VAR_23->sk_state == VAR_15)
  VAR_28 = -VAR_4;
 else
  VAR_28 = -VAR_3;
 VAR_19->state = VAR_28 ? 128 : VAR_10;
out:
 FUNC_8(VAR_23);
 return VAR_28;
}
