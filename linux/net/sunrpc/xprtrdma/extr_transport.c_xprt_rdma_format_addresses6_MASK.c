
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr {int dummy; } ;
struct rpc_xprt {int * address_strings; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,char*,int *) ;

__attribute__((used)) static void
FUNC_2(struct rpc_xprt *VAR_4, struct sockaddr *VAR_5)
{
 struct sockaddr_in6 *VAR_6 = (struct sockaddr_in6 *)VAR_5;
 char VAR_7[40];

 FUNC_1(VAR_7, sizeof(VAR_7), "%pi6", &VAR_6->sin6_addr);
 VAR_4->address_strings[VAR_2] = FUNC_0(VAR_7, VAR_0);

 VAR_4->address_strings[VAR_3] = VAR_1;
}
