
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_createerr {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct rpc_createerr*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct rpc_createerr*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 struct rpc_createerr VAR_1 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,void*) ;
 int VAR_2 ;

struct rpc_createerr *
FUNC_8()
{
 struct rpc_createerr *VAR_3;

 FUNC_4(&VAR_2);
 if (VAR_0 == -1)
  VAR_0 = FUNC_0();
 FUNC_5(&VAR_2);

 VAR_3 = (struct rpc_createerr *)FUNC_6(VAR_0);
 if (!VAR_3) {
  VAR_3 = (struct rpc_createerr *)
   FUNC_2(sizeof (struct rpc_createerr));
  if (!VAR_3 ||
      FUNC_7(VAR_0, (void *) VAR_3) == 0) {
   if (VAR_3)
    FUNC_1(VAR_3);
   return (&VAR_1);
  }
  FUNC_3(VAR_3, 0, sizeof (struct rpc_createerr));
 }
 return (VAR_3);
}
