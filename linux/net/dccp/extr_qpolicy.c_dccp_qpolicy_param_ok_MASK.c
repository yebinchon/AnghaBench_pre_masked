
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
typedef int __be32 ;
struct TYPE_4__ {size_t dccps_qpolicy; } ;
struct TYPE_3__ {int params; } ;


 TYPE_2__* FUNC_0 (struct sock*) ;
 TYPE_1__* VAR_0 ;

bool FUNC_1(struct sock *VAR_1, __be32 VAR_2)
{

 if (!VAR_2 || (VAR_2 & (VAR_2 - 1)))
  return 0;
 return (VAR_0[FUNC_0(VAR_1)->dccps_qpolicy].params & VAR_2) == VAR_2;
}
