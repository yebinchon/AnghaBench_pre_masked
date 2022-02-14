
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fib6_sernum; } ;
struct net {TYPE_1__ ipv6; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_1)
{
 int VAR_2, VAR_3;

 do {
  VAR_3 = FUNC_1(&VAR_1->ipv6.fib6_sernum);
  VAR_2 = VAR_3 < VAR_0 ? VAR_3 + 1 : 1;
 } while (FUNC_0(&VAR_1->ipv6.fib6_sernum,
    VAR_3, VAR_2) != VAR_3);
 return VAR_2;
}
