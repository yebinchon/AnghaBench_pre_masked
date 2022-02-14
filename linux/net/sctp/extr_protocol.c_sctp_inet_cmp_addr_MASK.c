
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ s_addr; } ;
struct TYPE_5__ {TYPE_3__ sin_addr; } ;
struct TYPE_4__ {scalar_t__ sa_family; } ;
union sctp_addr {TYPE_2__ v4; TYPE_1__ sa; } ;
struct sctp_sock {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const union sctp_addr *VAR_1,
         const union sctp_addr *VAR_2,
         struct sctp_sock *VAR_3)
{

 if (VAR_1->sa.sa_family != VAR_2->sa.sa_family)
  return 0;
 if (FUNC_0(VAR_0) == VAR_1->v4.sin_addr.s_addr ||
     FUNC_0(VAR_0) == VAR_2->v4.sin_addr.s_addr)
  return 1;
 if (VAR_1->v4.sin_addr.s_addr == VAR_2->v4.sin_addr.s_addr)
  return 1;

 return 0;
}
