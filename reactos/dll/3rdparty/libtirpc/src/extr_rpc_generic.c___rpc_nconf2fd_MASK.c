
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct netconfig {int dummy; } ;
struct __rpc_sockinfo {scalar_t__ si_af; int si_proto; int si_socktype; } ;
typedef int SOCKET ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netconfig const*,struct __rpc_sockinfo*) ;
 int FUNC_1 (int ,int ,int ,char const*,int) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

SOCKET
FUNC_3(const struct netconfig *VAR_4)
{
 struct __rpc_sockinfo VAR_5;
 SOCKET VAR_6;

 if (!FUNC_0(VAR_4, &VAR_5))
  return 0;

 if ((VAR_6 = FUNC_2(VAR_5.si_af, VAR_5.si_socktype, VAR_5.si_proto)) != VAR_1 &&
     VAR_5.si_af == VAR_0) {
  int VAR_7 = 1;

  FUNC_1(VAR_6, VAR_3, VAR_2, (const char *)&VAR_7, sizeof(VAR_7));
 }
 return VAR_6;
}
