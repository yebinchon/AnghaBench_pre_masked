
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_connection {int flags; struct rxrpc_channel* channels; } ;
struct rxrpc_channel {int final_ack_at; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct rxrpc_connection*,int *,unsigned int) ;
 int FUNC_2 (struct rxrpc_connection*,unsigned long) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (scalar_t__,int *) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct rxrpc_connection *VAR_4)
{
 unsigned long VAR_5 = VAR_3, VAR_6;
 unsigned int VAR_7;
 bool VAR_8;

again:
 VAR_6 = VAR_5 + VAR_0;
 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  struct rxrpc_channel *VAR_9 = &VAR_4->channels[VAR_7];
  unsigned long VAR_10;

  if (!FUNC_5(VAR_1 + VAR_7, &VAR_4->flags))
   continue;

  FUNC_3();
  VAR_10 = FUNC_0(VAR_9->final_ack_at);

  if (FUNC_6(VAR_5, VAR_10)) {
   if (FUNC_6(VAR_10, VAR_6)) {
    VAR_6 = VAR_10;
    VAR_8 = 1;
   }
   continue;
  }

  if (FUNC_4(VAR_1 + VAR_7,
           &VAR_4->flags))
   FUNC_1(VAR_4, ((void*)0), VAR_7);
 }

 VAR_5 = VAR_3;
 if (FUNC_7(VAR_6, VAR_5))
  goto again;
 if (VAR_8)
  FUNC_2(VAR_4, VAR_6);
}
