
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rxrpc_call {int state_lock; } ;
typedef int rxrpc_seq_t ;


 int FUNC_0 (char const*,struct rxrpc_call*,int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline bool FUNC_3(const char *VAR_0, struct rxrpc_call *VAR_1,
        rxrpc_seq_t VAR_2, u32 VAR_3, int VAR_4)
{
 bool VAR_5;

 FUNC_1(&VAR_1->state_lock);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_1->state_lock);
 return VAR_5;
}
