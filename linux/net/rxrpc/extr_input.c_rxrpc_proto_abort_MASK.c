
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {int events; } ;
typedef int rxrpc_seq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,struct rxrpc_call*,int ,int ,int ) ;
 int FUNC_1 (struct rxrpc_call*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(const char *VAR_3,
         struct rxrpc_call *VAR_4, rxrpc_seq_t VAR_5)
{
 if (FUNC_0(VAR_3, VAR_4, VAR_5, VAR_2, -VAR_0)) {
  FUNC_2(VAR_1, &VAR_4->events);
  FUNC_1(VAR_4);
 }
}
