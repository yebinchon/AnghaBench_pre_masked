
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rpc_xprt {void** address_strings; } ;
typedef int buf ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (char*,int ) ;
 int FUNC_1 (struct sockaddr*) ;
 int FUNC_2 (char*,int,char*,int) ;
 struct sockaddr* FUNC_3 (struct rpc_xprt*) ;

__attribute__((used)) static void FUNC_4(struct rpc_xprt *VAR_3)
{
 struct sockaddr *VAR_4 = FUNC_3(VAR_3);
 char VAR_5[128];

 FUNC_2(VAR_5, sizeof(VAR_5), "%u", FUNC_1(VAR_4));
 VAR_3->address_strings[VAR_2] = FUNC_0(VAR_5, VAR_0);

 FUNC_2(VAR_5, sizeof(VAR_5), "%4hx", FUNC_1(VAR_4));
 VAR_3->address_strings[VAR_1] = FUNC_0(VAR_5, VAR_0);
}
