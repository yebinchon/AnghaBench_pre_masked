
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {void* upper; void* lower; void* type; } ;
struct tipc_subscr {int usr_handle; void* filter; int timeout; TYPE_1__ seq; } ;
struct tipc_conn {int conid; int * sock; } ;
struct net {int dummy; } ;


 scalar_t__ FUNC_0 (struct tipc_conn*) ;
 int VAR_0 ;
 int FUNC_1 (struct tipc_conn*) ;
 struct tipc_conn* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct tipc_conn*,struct tipc_subscr*) ;
 int FUNC_4 (struct net*) ;

bool FUNC_5(struct net *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4,
        u32 VAR_5, u32 VAR_6, int *VAR_7)
{
 struct tipc_subscr VAR_8;
 struct tipc_conn *VAR_9;
 int VAR_10;

 VAR_8.seq.type = VAR_3;
 VAR_8.seq.lower = VAR_4;
 VAR_8.seq.upper = VAR_5;
 VAR_8.timeout = VAR_0;
 VAR_8.filter = VAR_6;
 *(u32 *)&VAR_8.usr_handle = VAR_2;

 VAR_9 = FUNC_2(FUNC_4(VAR_1));
 if (FUNC_0(VAR_9))
  return 0;

 *VAR_7 = VAR_9->conid;
 VAR_9->sock = ((void*)0);
 VAR_10 = FUNC_3(FUNC_4(VAR_1), VAR_9, &VAR_8);
 if (VAR_10 >= 0)
  return 1;
 FUNC_1(VAR_9);
 return 0;
}
