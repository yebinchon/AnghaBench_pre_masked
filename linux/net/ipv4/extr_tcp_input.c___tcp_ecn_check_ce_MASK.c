
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int ecn_flags; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int ip_dsfield; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_5, const struct sk_buff *VAR_6)
{
 struct tcp_sock *VAR_7 = FUNC_4(VAR_5);

 switch (FUNC_0(VAR_6)->ip_dsfield & VAR_2) {
 case 128:




  if (VAR_7->ecn_flags & VAR_4)
   FUNC_3(VAR_5, 2);
  break;
 case 129:
  if (FUNC_2(VAR_5))
   FUNC_1(VAR_5, VAR_0);

  if (!(VAR_7->ecn_flags & VAR_3)) {

   FUNC_3(VAR_5, 2);
   VAR_7->ecn_flags |= VAR_3;
  }
  VAR_7->ecn_flags |= VAR_4;
  break;
 default:
  if (FUNC_2(VAR_5))
   FUNC_1(VAR_5, VAR_1);
  VAR_7->ecn_flags |= VAR_4;
  break;
 }
}
