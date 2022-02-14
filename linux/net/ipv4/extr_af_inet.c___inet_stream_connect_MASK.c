
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {int state; struct sock* sk; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct sock {int sk_state; scalar_t__ sk_protocol; TYPE_2__* sk_prot; } ;
struct TYPE_8__ {int defer_connect; } ;
struct TYPE_7__ {TYPE_1__* fastopen_req; } ;
struct TYPE_6__ {int (* disconnect ) (struct sock*,int) ;int (* pre_connect ) (struct sock*,struct sockaddr*,int) ;int (* connect ) (struct sock*,struct sockaddr*,int) ;} ;
struct TYPE_5__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_4__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,long,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 int FUNC_5 (long) ;
 long FUNC_6 (struct sock*,int) ;
 int FUNC_7 (struct sock*,int) ;
 int FUNC_8 (struct sock*,struct sockaddr*,int) ;
 int FUNC_9 (struct sock*,struct sockaddr*,int) ;
 int FUNC_10 (struct sock*,int) ;
 TYPE_3__* FUNC_11 (struct sock*) ;

int FUNC_12(struct socket *VAR_13, struct sockaddr *VAR_14,
     int VAR_15, int VAR_16, int VAR_17)
{
 struct sock *VAR_18 = VAR_13->sk;
 int VAR_19;
 long VAR_20;
 if (VAR_14) {
  if (VAR_15 < sizeof(VAR_14->sa_family))
   return -VAR_4;

  if (VAR_14->sa_family == VAR_0) {
   VAR_19 = VAR_18->sk_prot->disconnect(VAR_18, VAR_16);
   VAR_13->state = VAR_19 ? VAR_8 : 128;
   goto out;
  }
 }

 switch (VAR_13->state) {
 default:
  VAR_19 = -VAR_4;
  goto out;
 case 130:
  VAR_19 = -VAR_5;
  goto out;
 case 129:
  if (FUNC_1(VAR_18)->defer_connect)
   VAR_19 = VAR_17 ? -VAR_3 : -VAR_5;
  else
   VAR_19 = -VAR_1;

  break;
 case 128:
  VAR_19 = -VAR_5;
  if (VAR_18->sk_state != VAR_11)
   goto out;

  if (FUNC_0(VAR_18)) {
   VAR_19 = VAR_18->sk_prot->pre_connect(VAR_18, VAR_14, VAR_15);
   if (VAR_19)
    goto out;
  }

  VAR_19 = VAR_18->sk_prot->connect(VAR_18, VAR_14, VAR_15);
  if (VAR_19 < 0)
   goto out;

  VAR_13->state = 129;

  if (!VAR_19 && FUNC_1(VAR_18)->defer_connect)
   goto out;





  VAR_19 = -VAR_3;
  break;
 }

 VAR_20 = FUNC_6(VAR_18, VAR_16 & VAR_7);

 if ((1 << VAR_18->sk_state) & (VAR_10 | VAR_9)) {
  int VAR_21 = (VAR_18->sk_protocol == VAR_6) &&
    FUNC_11(VAR_18)->fastopen_req &&
    FUNC_11(VAR_18)->fastopen_req->data ? 1 : 0;


  if (!VAR_20 || !FUNC_2(VAR_18, VAR_20, VAR_21))
   goto out;

  VAR_19 = FUNC_5(VAR_20);
  if (FUNC_3(VAR_12))
   goto out;
 }




 if (VAR_18->sk_state == VAR_11)
  goto sock_error;






 VAR_13->state = 130;
 VAR_19 = 0;
out:
 return VAR_19;

sock_error:
 VAR_19 = FUNC_4(VAR_18) ? : -VAR_2;
 VAR_13->state = 128;
 if (VAR_18->sk_prot->disconnect(VAR_18, VAR_16))
  VAR_13->state = VAR_8;
 goto out;
}
