
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_4__ {size_t dccps_qpolicy; } ;
struct TYPE_3__ {int (* full ) (struct sock*) ;} ;


 TYPE_2__* FUNC_0 (struct sock*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct sock*) ;

bool FUNC_2(struct sock *VAR_1)
{
 return VAR_0[FUNC_0(VAR_1)->dccps_qpolicy].full(VAR_1);
}
