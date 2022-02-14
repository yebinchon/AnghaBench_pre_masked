
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct ccid2_hc_tx_sock {int tx_av_chunks; } ;




 struct ccid2_hc_tx_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,int*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_0, u8 VAR_1,
         u8 VAR_2, u8 *VAR_3, u8 VAR_4)
{
 struct ccid2_hc_tx_sock *VAR_5 = FUNC_0(VAR_0);

 switch (VAR_2) {
 case 129:
 case 128:
  return FUNC_1(&VAR_5->tx_av_chunks, VAR_3, VAR_4,
           VAR_2 - 129);
 }
 return 0;
}
