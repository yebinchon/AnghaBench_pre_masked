
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int xpt_flags; int xpt_remotebuf; } ;
struct svc_sock {TYPE_3__ sk_xprt; int * sk_pages; scalar_t__ sk_datalen; scalar_t__ sk_tcplen; scalar_t__ sk_reclen; TYPE_1__* sk_sock; struct sock* sk_sk; } ;
struct svc_serv {int dummy; } ;
struct sock {int sk_state; int sk_write_space; int sk_data_ready; int sk_state_change; } ;
struct TYPE_5__ {int nonagle; } ;
struct TYPE_4__ {int sk; } ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,int *,TYPE_3__*,struct svc_serv*) ;
 TYPE_2__* FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct svc_sock *VAR_13, struct svc_serv *VAR_14)
{
 struct sock *VAR_15 = VAR_13->sk_sk;

 FUNC_5(FUNC_3(VAR_13->sk_sock->sk), &VAR_9,
        &VAR_13->sk_xprt, VAR_14);
 FUNC_2(VAR_2, &VAR_13->sk_xprt.xpt_flags);
 FUNC_2(VAR_4, &VAR_13->sk_xprt.xpt_flags);
 if (VAR_15->sk_state == VAR_0) {
  FUNC_0("setting up TCP socket for listening\n");
  FUNC_4(VAR_13->sk_xprt.xpt_remotebuf, "listener");
  FUNC_2(VAR_7, &VAR_13->sk_xprt.xpt_flags);
  VAR_15->sk_data_ready = VAR_10;
  FUNC_2(VAR_5, &VAR_13->sk_xprt.xpt_flags);
 } else {
  FUNC_0("setting up TCP socket for reading\n");
  VAR_15->sk_state_change = VAR_11;
  VAR_15->sk_data_ready = VAR_8;
  VAR_15->sk_write_space = VAR_12;

  VAR_13->sk_reclen = 0;
  VAR_13->sk_tcplen = 0;
  VAR_13->sk_datalen = 0;
  FUNC_1(&VAR_13->sk_pages[0], 0, sizeof(VAR_13->sk_pages));

  FUNC_6(VAR_15)->nonagle |= VAR_1;

  FUNC_2(VAR_6, &VAR_13->sk_xprt.xpt_flags);
  switch (VAR_15->sk_state) {
  case 128:
  case 129:
   break;
  default:
   FUNC_2(VAR_3, &VAR_13->sk_xprt.xpt_flags);
  }
 }
}
