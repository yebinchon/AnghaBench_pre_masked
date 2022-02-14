
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcdata {int dummy; } ;


 scalar_t__ FUNC_0 (int,int) ;
 struct rpcdata* VAR_0 ;

__attribute__((used)) static struct rpcdata *
FUNC_1()
{
 struct rpcdata *VAR_1 = VAR_0;

 if (VAR_1 == 0) {
  VAR_1 = (struct rpcdata *)FUNC_0(1, sizeof (struct rpcdata));
  VAR_0 = VAR_1;
 }
 return (VAR_1);
}
