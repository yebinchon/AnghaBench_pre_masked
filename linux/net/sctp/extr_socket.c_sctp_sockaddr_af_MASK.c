
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sa_family; } ;
struct TYPE_4__ {int sin6_addr; } ;
union sctp_addr {TYPE_3__ sa; TYPE_1__ v6; } ;
struct sockaddr {int dummy; } ;
struct sctp_sock {TYPE_2__* pf; } ;
struct sctp_af {int sockaddr_len; } ;
struct TYPE_5__ {int (* af_supported ) (scalar_t__,struct sctp_sock*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct sctp_af* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,struct sctp_sock*) ;
 int FUNC_3 (scalar_t__,struct sctp_sock*) ;

__attribute__((used)) static struct sctp_af *FUNC_4(struct sctp_sock *VAR_3,
     union sctp_addr *VAR_4, int VAR_5)
{
 struct sctp_af *VAR_6;


 if (VAR_5 < sizeof (struct sockaddr))
  return ((void*)0);

 if (!VAR_3->pf->af_supported(VAR_4->sa.sa_family, VAR_3))
  return ((void*)0);

 if (VAR_4->sa.sa_family == VAR_1) {
  if (VAR_5 < VAR_2)
   return ((void*)0);

  if (FUNC_0(&VAR_4->v6.sin6_addr) &&
      !VAR_3->pf->af_supported(VAR_0, VAR_3))
   return ((void*)0);
 }


 VAR_6 = FUNC_1(VAR_4->sa.sa_family);

 if (VAR_5 < VAR_6->sockaddr_len)
  return ((void*)0);

 return VAR_6;
}
