
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_authops {int owner; } ;
typedef size_t rpc_authflavor_t ;


 size_t VAR_0 ;
 int * VAR_1 ;
 struct rpc_authops* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static const struct rpc_authops *
FUNC_5(rpc_authflavor_t VAR_2)
{
 const struct rpc_authops *VAR_3;

 if (VAR_2 >= VAR_0)
  return ((void*)0);

 FUNC_1();
 VAR_3 = FUNC_0(VAR_1[VAR_2]);
 if (VAR_3 == ((void*)0)) {
  FUNC_2();
  FUNC_3("rpc-auth-%u", VAR_2);
  FUNC_1();
  VAR_3 = FUNC_0(VAR_1[VAR_2]);
  if (VAR_3 == ((void*)0))
   goto out;
 }
 if (!FUNC_4(VAR_3->owner))
  VAR_3 = ((void*)0);
out:
 FUNC_2();
 return VAR_3;
}
