
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {TYPE_1__* sk_prot; } ;
struct TYPE_2__ {unsigned long* memory_pressure; int (* leave_memory_pressure ) (struct sock*) ;} ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 if (VAR_0->sk_prot->leave_memory_pressure) {
  VAR_0->sk_prot->leave_memory_pressure(VAR_0);
 } else {
  unsigned long *VAR_1 = VAR_0->sk_prot->memory_pressure;

  if (VAR_1 && FUNC_0(*VAR_1))
   FUNC_1(*VAR_1, 0);
 }
}
