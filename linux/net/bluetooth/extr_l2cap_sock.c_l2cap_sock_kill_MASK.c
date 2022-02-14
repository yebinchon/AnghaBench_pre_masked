
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_state; scalar_t__ sk_socket; } ;
struct TYPE_2__ {int chan; } ;


 int FUNC_0 (char*,struct sock*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2)
{
 if (!FUNC_3(VAR_2, VAR_1) || VAR_2->sk_socket)
  return;

 FUNC_0("sk %p state %s", VAR_2, FUNC_6(VAR_2->sk_state));



 FUNC_1(FUNC_2(VAR_2)->chan);
 FUNC_5(VAR_2, VAR_0);
 FUNC_4(VAR_2);
}
