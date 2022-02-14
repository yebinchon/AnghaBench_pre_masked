
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;
struct pep_sock {int rx_fc; int rx_credits; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct pep_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_6, gfp_t VAR_7)
{
 struct pep_sock *VAR_8 = FUNC_1(VAR_6);

 FUNC_0(VAR_6->sk_state != VAR_5);

 switch (VAR_8->rx_fc) {
 case 130:
  break;
 case 128:
  if (FUNC_2(VAR_6, VAR_3,
     VAR_2, VAR_7) == 0)
   VAR_8->rx_credits = 1;
  break;
 case 129:
  if ((VAR_8->rx_credits + VAR_1) > VAR_0)
   break;
  if (FUNC_2(VAR_6, VAR_4,
     VAR_0 - VAR_8->rx_credits,
     VAR_7) == 0)
   VAR_8->rx_credits = VAR_0;
  break;
 }
}
