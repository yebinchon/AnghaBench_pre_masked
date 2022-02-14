
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_key_token {int security_index; int k5; struct rxrpc_key_token* kad; struct rxrpc_key_token* next; } ;


 int FUNC_0 () ;


 int FUNC_1 (struct rxrpc_key_token*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct rxrpc_key_token *VAR_0)
{
 struct rxrpc_key_token *VAR_1;

 for (; VAR_0; VAR_0 = VAR_1) {
  VAR_1 = VAR_0->next;
  switch (VAR_0->security_index) {
  case 128:
   FUNC_1(VAR_0->kad);
   break;
  case 129:
   if (VAR_0->k5)
    FUNC_3(VAR_0->k5);
   break;
  default:
   FUNC_2("Unknown token type %x on rxrpc key\n",
          VAR_0->security_index);
   FUNC_0();
  }

  FUNC_1(VAR_0);
 }
}
