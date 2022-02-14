
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid2_hc_tx_sock {int tx_seqbufc; int tx_av_chunks; int * tx_seqbuf; int tx_rtotimer; } ;


 struct ccid2_hc_tx_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sock*,int *) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0)
{
 struct ccid2_hc_tx_sock *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 FUNC_3(VAR_0, &VAR_1->tx_rtotimer);

 for (VAR_2 = 0; VAR_2 < VAR_1->tx_seqbufc; VAR_2++)
  FUNC_2(VAR_1->tx_seqbuf[VAR_2]);
 VAR_1->tx_seqbufc = 0;
 FUNC_1(&VAR_1->tx_av_chunks);
}
