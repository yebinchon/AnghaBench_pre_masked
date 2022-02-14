
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_connection {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rxrpc_connection*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct rxrpc_connection*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct rxrpc_connection *VAR_2,
         unsigned int VAR_3)
{
 if (!FUNC_1(VAR_0, &VAR_2->flags)) {
  FUNC_2(VAR_2, VAR_3, VAR_1);
  FUNC_0(VAR_2);
 }
}
