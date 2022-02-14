
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {int tx_q; int tx_credits; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct l2cap_chan*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct l2cap_chan *VAR_0)
{
 int VAR_1 = 0;

 FUNC_0("chan %p", VAR_0);

 while (VAR_0->tx_credits && !FUNC_3(&VAR_0->tx_q)) {
  FUNC_1(VAR_0, FUNC_2(&VAR_0->tx_q));
  VAR_0->tx_credits--;
  VAR_1++;
 }

 FUNC_0("Sent %d credits %u queued %u", VAR_1, VAR_0->tx_credits,
        FUNC_4(&VAR_0->tx_q));
}
