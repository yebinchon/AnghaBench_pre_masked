
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct ccid3_hc_tx_sock {int tx_x_recv; int tx_p; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,struct sock*,int,int) ;
 int VAR_1 ;


 struct ccid3_hc_tx_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (char*,int ,struct sock*,int) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_2, u8 VAR_3,
         u8 VAR_4, u8 *VAR_5, u8 VAR_6)
{
 struct ccid3_hc_tx_sock *VAR_7 = FUNC_1(VAR_2);
 __be32 VAR_8;

 switch (VAR_4) {
 case 128:
 case 129:

  if (VAR_3 == VAR_0)
   break;
  if (FUNC_7(VAR_6 != 4)) {
   FUNC_0("%s(%p), invalid len %d for %u\n",
      FUNC_3(VAR_2), VAR_2, VAR_6, VAR_4);
   return -VAR_1;
  }
  VAR_8 = FUNC_5(FUNC_4((__be32 *)VAR_5));

  if (VAR_4 == 128) {

   VAR_7->tx_x_recv = VAR_8;
   VAR_7->tx_x_recv <<= 6;

   FUNC_2("%s(%p), RECEIVE_RATE=%u\n",
           FUNC_3(VAR_2), VAR_2, VAR_8);
  } else {

   VAR_7->tx_p = FUNC_6(VAR_8);

   FUNC_2("%s(%p), LOSS_EVENT_RATE=%u\n",
           FUNC_3(VAR_2), VAR_2, VAR_8);
  }
 }
 return 0;
}
