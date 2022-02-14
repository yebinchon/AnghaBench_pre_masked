
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int sa_family; } ;
struct TYPE_10__ {int sin_port; } ;
union sctp_addr {TYPE_4__ sa; TYPE_5__ v4; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct sctp_sockaddr_entry {scalar_t__ state; union sctp_addr a; } ;
struct sctp_sock {TYPE_3__* ep; } ;
struct sctp_af {int sockaddr_len; } ;
struct TYPE_6__ {int port; } ;
struct TYPE_7__ {TYPE_1__ bind_addr; } ;
struct TYPE_8__ {TYPE_2__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 struct sctp_af* FUNC_1 (int ) ;
 struct sock* FUNC_2 (struct sctp_sock*) ;
 int FUNC_3 (struct sock*,struct sockaddr*,int) ;
 int FUNC_4 (struct sock*,struct sockaddr*,int) ;
 scalar_t__ FUNC_5 (struct sock*,union sctp_addr*,int ) ;

int FUNC_6(struct sctp_sock *VAR_2, struct sctp_sockaddr_entry *VAR_3)
{
 struct sock *VAR_4 = FUNC_2(VAR_2);
 union sctp_addr *VAR_5;
 struct sctp_af *VAR_6;


 VAR_5 = &VAR_3->a;
 VAR_5->v4.sin_port = FUNC_0(VAR_2->ep->base.bind_addr.port);
 VAR_6 = FUNC_1(VAR_5->sa.sa_family);
 if (!VAR_6)
  return -VAR_0;
 if (FUNC_5(VAR_4, VAR_5, VAR_6->sockaddr_len))
  return -VAR_0;

 if (VAR_3->state == VAR_1)
  return FUNC_3(VAR_4, (struct sockaddr *)VAR_5, 1);
 else
  return FUNC_4(VAR_4, (struct sockaddr *)VAR_5, 1);
}
