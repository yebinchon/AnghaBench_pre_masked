
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unix_sock {int iolock; int peer_wait; } ;
struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_type; int sk_shutdown; } ;
struct sk_buff {int len; int sk; } ;
struct scm_cookie {int fp; } ;
struct msghdr {int msg_flags; scalar_t__ msg_name; } ;
typedef int scm ;
struct TYPE_2__ {scalar_t__ fp; int gid; int uid; int pid; } ;


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
 scalar_t__ VAR_11 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct sock*,int,int *,int*,int*,struct sk_buff**) ;
 int FUNC_2 (struct sock*,int*,long*,struct sk_buff*) ;
 int FUNC_3 (struct msghdr*,struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct scm_cookie*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct socket*,struct msghdr*,struct scm_cookie*,int) ;
 int FUNC_9 (struct scm_cookie*,int ,int ,int ) ;
 int FUNC_10 (struct sock*,int) ;
 int FUNC_11 (struct sock*,int) ;
 int FUNC_12 (struct sock*,size_t) ;
 int FUNC_13 (struct sk_buff*,int,struct msghdr*,size_t) ;
 int FUNC_14 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct sock*,int ) ;
 long FUNC_16 (struct sock*,int) ;
 int FUNC_17 (struct msghdr*,int ) ;
 int FUNC_18 (struct scm_cookie*,struct sk_buff*) ;
 int FUNC_19 (struct scm_cookie*,struct sk_buff*) ;
 struct unix_sock* FUNC_20 (struct sock*) ;
 int FUNC_21 (struct sock*) ;
 int FUNC_22 (struct sock*) ;
 int FUNC_23 (int *,int) ;
 scalar_t__ FUNC_24 (int *) ;

__attribute__((used)) static int FUNC_25(struct socket *VAR_12, struct msghdr *VAR_13,
         size_t VAR_14, int VAR_15)
{
 struct scm_cookie VAR_16;
 struct sock *VAR_17 = VAR_12->sk;
 struct unix_sock *VAR_18 = FUNC_20(VAR_17);
 struct sk_buff *VAR_19, *VAR_20;
 long VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_23 = -VAR_1;
 if (VAR_15&VAR_6)
  goto out;

 VAR_21 = FUNC_16(VAR_17, VAR_15 & VAR_5);

 do {
  FUNC_5(&VAR_18->iolock);

  VAR_22 = FUNC_10(VAR_17, VAR_15);
  VAR_19 = FUNC_1(VAR_17, VAR_15, ((void*)0), &VAR_22, &VAR_23,
           &VAR_20);
  if (VAR_19)
   break;

  FUNC_6(&VAR_18->iolock);

  if (VAR_23 != -VAR_0)
   break;
 } while (VAR_21 &&
   !FUNC_2(VAR_17, &VAR_23, &VAR_21, VAR_20));

 if (!VAR_19) {
  FUNC_21(VAR_17);

  if (VAR_17->sk_type == VAR_11 && VAR_23 == -VAR_0 &&
      (VAR_17->sk_shutdown & VAR_9))
   VAR_23 = 0;
  FUNC_22(VAR_17);
  goto out;
 }

 if (FUNC_24(&VAR_18->peer_wait))
  FUNC_23(&VAR_18->peer_wait,
      VAR_2 | VAR_4 |
      VAR_3);

 if (VAR_13->msg_name)
  FUNC_17(VAR_13, VAR_19->sk);

 if (VAR_14 > VAR_19->len - VAR_22)
  VAR_14 = VAR_19->len - VAR_22;
 else if (VAR_14 < VAR_19->len - VAR_22)
  VAR_13->msg_flags |= VAR_8;

 VAR_23 = FUNC_13(VAR_19, VAR_22, VAR_13, VAR_14);
 if (VAR_23)
  goto out_free;

 if (FUNC_15(VAR_17, VAR_10))
  FUNC_3(VAR_13, VAR_17, VAR_19);

 FUNC_4(&VAR_16, 0, sizeof(VAR_16));

 FUNC_9(&VAR_16, FUNC_0(VAR_19).pid, FUNC_0(VAR_19).uid, FUNC_0(VAR_19).gid);
 FUNC_19(&VAR_16, VAR_19);

 if (!(VAR_15 & VAR_7)) {
  if (FUNC_0(VAR_19).fp)
   FUNC_18(&VAR_16, VAR_19);

  FUNC_11(VAR_17, VAR_19->len);
 } else {
  FUNC_12(VAR_17, VAR_14);

  if (FUNC_0(VAR_19).fp)
   VAR_16.fp = FUNC_7(FUNC_0(VAR_19).fp);
 }
 VAR_23 = (VAR_15 & VAR_8) ? VAR_19->len - VAR_22 : VAR_14;

 FUNC_8(VAR_12, VAR_13, &VAR_16, VAR_15);

out_free:
 FUNC_14(VAR_17, VAR_19);
 FUNC_6(&VAR_18->iolock);
out:
 return VAR_23;
}
