
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct TYPE_5__ {TYPE_1__ sin_addr; } ;
union sctp_addr {TYPE_2__ v4; } ;
struct sk_buff {int dummy; } ;
struct sctp_sock {int dummy; } ;
struct TYPE_6__ {int rt_flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_sock*) ;
 TYPE_3__* FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_4(union sctp_addr *VAR_1,
         struct sctp_sock *VAR_2,
         const struct sk_buff *VAR_3)
{

 if (VAR_2 && FUNC_1(FUNC_2(VAR_2)))
  return 0;


 if (FUNC_0(VAR_1->v4.sin_addr.s_addr))
  return 0;


 if (VAR_3 && FUNC_3(VAR_3)->rt_flags & VAR_0)
  return 0;

 return 1;
}
