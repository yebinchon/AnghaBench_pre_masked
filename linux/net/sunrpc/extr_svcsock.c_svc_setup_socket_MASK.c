
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xpt_flags; } ;
struct svc_sock {TYPE_1__ sk_xprt; struct sock* sk_sk; int sk_owspace; int sk_odata; int sk_ostate; struct socket* sk_sock; } ;
struct svc_serv {int dummy; } ;
struct socket {scalar_t__ type; struct sock* sk; } ;
struct sock {struct svc_sock* sk_user_data; int sk_write_space; int sk_data_ready; int sk_state_change; int sk_protocol; int sk_family; } ;
struct TYPE_4__ {int inet_sport; } ;


 int VAR_0 ;
 struct svc_sock* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct svc_sock*) ;
 struct svc_sock* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct svc_serv*,int ,int ,int ,int ) ;
 int FUNC_8 (struct svc_sock*,struct svc_serv*) ;
 int FUNC_9 (struct svc_sock*,struct svc_serv*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 () ;

__attribute__((used)) static struct svc_sock *FUNC_12(struct svc_serv *VAR_6,
      struct socket *VAR_7,
      int VAR_8)
{
 struct svc_sock *VAR_9;
 struct sock *VAR_10;
 int VAR_11 = !(VAR_8 & VAR_3);
 int VAR_12 = 0;

 FUNC_1("svc: svc_setup_socket %p\n", VAR_7);
 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_10 = VAR_7->sk;


 if (VAR_11)
  VAR_12 = FUNC_7(VAR_6, FUNC_6(VAR_7->sk), VAR_10->sk_family,
         VAR_10->sk_protocol,
         FUNC_5(FUNC_2(VAR_10)->inet_sport));

 if (VAR_12 < 0) {
  FUNC_3(VAR_9);
  return FUNC_0(VAR_12);
 }

 VAR_9->sk_sock = VAR_7;
 VAR_9->sk_sk = VAR_10;
 VAR_9->sk_ostate = VAR_10->sk_state_change;
 VAR_9->sk_odata = VAR_10->sk_data_ready;
 VAR_9->sk_owspace = VAR_10->sk_write_space;





 FUNC_11();
 VAR_10->sk_user_data = VAR_9;


 if (VAR_7->type == VAR_2)
  FUNC_9(VAR_9, VAR_6);
 else
  FUNC_8(VAR_9, VAR_6);

 FUNC_1("svc: svc_setup_socket created %p (inet %p), "
   "listen %d close %d\n",
   VAR_9, VAR_9->sk_sk,
   FUNC_10(VAR_5, &VAR_9->sk_xprt.xpt_flags),
   FUNC_10(VAR_4, &VAR_9->sk_xprt.xpt_flags));

 return VAR_9;
}
