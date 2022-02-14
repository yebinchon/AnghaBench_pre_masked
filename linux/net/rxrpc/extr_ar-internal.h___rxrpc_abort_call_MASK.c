
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rxrpc_call {int call_id; int cid; int debug_id; } ;
typedef int rxrpc_seq_t ;


 int VAR_0 ;
 int FUNC_0 (struct rxrpc_call*,int ,int ,int) ;
 int FUNC_1 (int ,char const*,int ,int ,int ,int ,int) ;

__attribute__((used)) static inline bool FUNC_2(const char *VAR_1, struct rxrpc_call *VAR_2,
          rxrpc_seq_t VAR_3,
          u32 VAR_4, int VAR_5)
{
 FUNC_1(VAR_2->debug_id, VAR_1, VAR_2->cid, VAR_2->call_id, VAR_3,
     VAR_4, VAR_5);
 return FUNC_0(VAR_2, VAR_0,
        VAR_4, VAR_5);
}
