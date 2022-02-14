
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_sndbuf; int sk_wmem_alloc; } ;
struct TYPE_3__ {scalar_t__ max_sdu; } ;
struct TYPE_4__ {TYPE_1__ txtp; } ;
struct atm_vcc {TYPE_2__ qos; } ;


 struct atm_vcc* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct sock *VAR_0)
{
 struct atm_vcc *VAR_1 = FUNC_0(VAR_0);

 return (VAR_1->qos.txtp.max_sdu +
  FUNC_1(&VAR_0->sk_wmem_alloc)) <= VAR_0->sk_sndbuf;
}
