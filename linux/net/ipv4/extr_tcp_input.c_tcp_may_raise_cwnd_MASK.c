
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_4__ {scalar_t__ sysctl_tcp_reordering; } ;
struct TYPE_6__ {TYPE_1__ ipv4; } ;
struct TYPE_5__ {scalar_t__ reordering; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 TYPE_3__* FUNC_0 (struct sock const*) ;
 TYPE_2__* FUNC_1 (struct sock const*) ;

__attribute__((used)) static inline bool FUNC_2(const struct sock *VAR_2, const int VAR_3)
{






 if (FUNC_1(VAR_2)->reordering > FUNC_0(VAR_2)->ipv4.sysctl_tcp_reordering)
  return VAR_3 & VAR_1;

 return VAR_3 & VAR_0;
}
