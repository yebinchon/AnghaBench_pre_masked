
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ s_addr; } ;
struct TYPE_6__ {TYPE_2__ sin_addr; } ;
struct TYPE_4__ {scalar_t__ sa_family; } ;
union sctp_addr {TYPE_3__ v4; TYPE_1__ sa; } ;
struct sock {int dummy; } ;
struct sctp_sock {int dummy; } ;
struct sctp_af {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 int FUNC_1 (union sctp_addr const*,union sctp_addr const*) ;
 struct sctp_af* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct sock*,union sctp_addr const*) ;
 struct sock* FUNC_4 (struct sctp_sock*) ;

__attribute__((used)) static int FUNC_5(const union sctp_addr *VAR_1,
          const union sctp_addr *VAR_2,
          struct sctp_sock *VAR_3)
{
 struct sock *VAR_4 = FUNC_4(VAR_3);
 struct sctp_af *VAR_5, *VAR_6;

 VAR_5 = FUNC_2(VAR_1->sa.sa_family);
 VAR_6 = FUNC_2(VAR_2->sa.sa_family);

 if (!VAR_5 || !VAR_6)
  return 0;


 if (FUNC_0(VAR_4) && VAR_5 != VAR_6)
  return 0;


 if (FUNC_3(VAR_4, VAR_1) || FUNC_3(VAR_4, VAR_2))
  return 1;

 if (VAR_1->sa.sa_family == VAR_0 && VAR_2->sa.sa_family == VAR_0)
  return VAR_1->v4.sin_addr.s_addr == VAR_2->v4.sin_addr.s_addr;

 return FUNC_1(VAR_1, VAR_2);
}
