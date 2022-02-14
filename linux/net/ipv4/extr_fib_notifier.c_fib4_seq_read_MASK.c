
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int fib_seq; } ;
struct net {TYPE_1__ ipv4; } ;


 int FUNC_0 () ;
 unsigned int FUNC_1 (struct net*) ;

__attribute__((used)) static unsigned int FUNC_2(struct net *VAR_0)
{
 FUNC_0();

 return VAR_0->ipv4.fib_seq + FUNC_1(VAR_0);
}
