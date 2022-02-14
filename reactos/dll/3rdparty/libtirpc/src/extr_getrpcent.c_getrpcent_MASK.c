
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcent {int dummy; } ;
struct rpcdata {scalar_t__ currentlen; char* line; int * rpcf; int * current; int domain; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 struct rpcdata* FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*,scalar_t__,int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 struct rpcent* FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,int **,scalar_t__*,char**,int*) ;
 int FUNC_8 (int ,char*,int *,scalar_t__,int **,scalar_t__*,char**,int*) ;

struct rpcent *
FUNC_9()
{
 struct rpcdata *VAR_3 = FUNC_0();







 if (VAR_3 == 0)
  return(((void*)0));
 if (VAR_3->rpcf == ((void*)0) && (VAR_3->rpcf = FUNC_3(VAR_1, "r")) == ((void*)0))
  return (((void*)0));

        if (FUNC_2(VAR_3->line, VAR_0 - 1, VAR_3->rpcf) == ((void*)0))
  return (((void*)0));
 return (FUNC_5(VAR_3->line, FUNC_6(VAR_3->line)));
}
