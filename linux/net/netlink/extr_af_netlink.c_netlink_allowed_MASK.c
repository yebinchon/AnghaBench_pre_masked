
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {TYPE_2__* sk; } ;
struct TYPE_6__ {unsigned int flags; } ;
struct TYPE_5__ {size_t sk_protocol; } ;
struct TYPE_4__ {int user_ns; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static inline int FUNC_2(const struct socket *VAR_2, unsigned int VAR_3)
{
 return (VAR_1[VAR_2->sk->sk_protocol].flags & VAR_3) ||
  FUNC_0(FUNC_1(VAR_2->sk)->user_ns, VAR_0);
}
