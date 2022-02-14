
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int xpt_cred; } ;
struct svc_sock {TYPE_2__ sk_xprt; int sk_sock; } ;
struct svc_serv {int dummy; } ;
struct socket {scalar_t__ state; TYPE_1__* sk; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct cred {int dummy; } ;
struct TYPE_4__ {scalar_t__ sk_family; scalar_t__ sk_protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct svc_sock*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct svc_sock*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct cred const*) ;
 int FUNC_3 (int ,struct sockaddr*) ;
 int FUNC_4 (int ) ;
 struct socket* FUNC_5 (int const,int*) ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 (struct svc_serv*,TYPE_2__*) ;
 int FUNC_8 (struct svc_sock*,char*,size_t const) ;
 struct svc_sock* FUNC_9 (struct svc_serv*,struct socket*,int ) ;
 int FUNC_10 (TYPE_2__*,struct sockaddr*,int) ;
 int FUNC_11 (int ) ;

int FUNC_12(struct svc_serv *VAR_11, const int VAR_12, char *VAR_13,
  const size_t VAR_14, const struct cred *VAR_15)
{
 int VAR_16 = 0;
 struct socket *VAR_17 = FUNC_5(VAR_12, &VAR_16);
 struct svc_sock *VAR_18 = ((void*)0);
 struct sockaddr_storage VAR_19;
 struct sockaddr *VAR_20 = (struct sockaddr *)&VAR_19;
 int VAR_21;

 if (!VAR_17)
  return VAR_16;
 VAR_16 = -VAR_0;
 if ((VAR_17->sk->sk_family != VAR_6) && (VAR_17->sk->sk_family != VAR_7))
  goto out;
 VAR_16 = -VAR_3;
 if (VAR_17->sk->sk_protocol != VAR_4 &&
     VAR_17->sk->sk_protocol != VAR_5)
  goto out;
 VAR_16 = -VAR_1;
 if (VAR_17->state > VAR_8)
  goto out;
 VAR_16 = -VAR_2;
 if (!FUNC_11(VAR_10))
  goto out;
 VAR_18 = FUNC_9(VAR_11, VAR_17, VAR_9);
 if (FUNC_0(VAR_18)) {
  FUNC_4(VAR_10);
  VAR_16 = FUNC_1(VAR_18);
  goto out;
 }
 VAR_21 = FUNC_3(VAR_18->sk_sock, VAR_20);
 if (VAR_21 >= 0)
  FUNC_10(&VAR_18->sk_xprt, VAR_20, VAR_21);
 VAR_18->sk_xprt.xpt_cred = FUNC_2(VAR_15);
 FUNC_7(VAR_11, &VAR_18->sk_xprt);
 return FUNC_8(VAR_18, VAR_13, VAR_14);
out:
 FUNC_6(VAR_17);
 return VAR_16;
}
