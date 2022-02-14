
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct sock*,int) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_3)
{
 switch (VAR_3->sk_state) {
 case 129:

  FUNC_1(VAR_3, VAR_2);
  FUNC_2(VAR_3, VAR_0);
  break;
 case 128:




  FUNC_0(VAR_3, 1);
  FUNC_2(VAR_3, VAR_1);
 }
}
