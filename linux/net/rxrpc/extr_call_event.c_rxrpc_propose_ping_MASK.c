
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {int ping_at; int events; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (struct rxrpc_call*) ;
 int FUNC_2 (struct rxrpc_call*,unsigned long,unsigned long,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_5(struct rxrpc_call *VAR_4,
          bool VAR_5, bool VAR_6)
{
 if (VAR_5) {
  if (VAR_6 &&
      !FUNC_3(VAR_0, &VAR_4->events))
   FUNC_1(VAR_4);
 } else {
  unsigned long VAR_7 = VAR_1;
  unsigned long VAR_8 = VAR_7 + VAR_2;

  if (FUNC_4(VAR_8, VAR_4->ping_at)) {
   FUNC_0(VAR_4->ping_at, VAR_8);
   FUNC_2(VAR_4, VAR_8, VAR_7,
      VAR_3);
  }
 }
}
