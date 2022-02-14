
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int u_int32_t ;
struct netconfig {int dummy; } ;
struct netbuf {int dummy; } ;
typedef int rpcvers_t ;
typedef int rpcprog_t ;
typedef int bool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct netconfig* FUNC_0 (char*) ;
 int FUNC_1 (struct netbuf*) ;
 int FUNC_2 (struct netconfig*) ;
 int FUNC_3 (int ,int ,struct netconfig*,struct netbuf*) ;
 int FUNC_4 (char*,int,char*,int,int) ;
 struct netbuf* FUNC_5 (struct netconfig*,char*) ;

bool_t
FUNC_6(u_long VAR_3, u_long VAR_4, int VAR_5, int VAR_6)
{
 bool_t VAR_7;
 struct netbuf *VAR_8;
 struct netconfig *VAR_9;
 char VAR_10[32];

 if ((VAR_5 != VAR_2) && (VAR_5 != VAR_1)) {
  return (VAR_0);
 }
 VAR_9 = FUNC_0(VAR_5 == VAR_2 ? "udp" : "tcp");
 if (VAR_9 == ((void*)0)) {
  return (VAR_0);
 }
 FUNC_4(VAR_10, sizeof VAR_10, "0.0.0.0.%d.%d",
     (((u_int32_t)VAR_6) >> 8) & 0xff, VAR_6 & 0xff);
 VAR_8 = FUNC_5(VAR_9, VAR_10);
 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_9);
  return (VAR_0);
 }
 VAR_7 = FUNC_3((rpcprog_t)VAR_3, (rpcvers_t)VAR_4, VAR_9, VAR_8);
 FUNC_1(VAR_8);
 FUNC_2(VAR_9);
 return (VAR_7);
}
