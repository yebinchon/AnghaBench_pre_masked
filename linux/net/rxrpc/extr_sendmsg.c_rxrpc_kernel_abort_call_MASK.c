
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct socket {int dummy; } ;
struct rxrpc_call {int user_mutex; int debug_id; } ;


 int FUNC_0 (char*,int ,int ,int,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,struct rxrpc_call*,int ,int ,int) ;
 int FUNC_4 (struct rxrpc_call*) ;

bool FUNC_5(struct socket *VAR_0, struct rxrpc_call *VAR_1,
        u32 VAR_2, int VAR_3, const char *VAR_4)
{
 bool VAR_5;

 FUNC_0("{%d},%d,%d,%s", VAR_1->debug_id, VAR_2, VAR_3, VAR_4);

 FUNC_1(&VAR_1->user_mutex);

 VAR_5 = FUNC_3(VAR_4, VAR_1, 0, VAR_2, VAR_3);
 if (VAR_5)
  FUNC_4(VAR_1);

 FUNC_2(&VAR_1->user_mutex);
 return VAR_5;
}
