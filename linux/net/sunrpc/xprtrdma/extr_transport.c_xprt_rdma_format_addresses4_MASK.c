
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct rpc_xprt {int * address_strings; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct rpc_xprt *VAR_4, struct sockaddr *VAR_5)
{
 struct sockaddr_in *VAR_6 = (struct sockaddr_in *)VAR_5;
 char VAR_7[20];

 FUNC_2(VAR_7, sizeof(VAR_7), "%08x", FUNC_1(VAR_6->sin_addr.s_addr));
 VAR_4->address_strings[VAR_2] = FUNC_0(VAR_7, VAR_0);

 VAR_4->address_strings[VAR_3] = VAR_1;
}
