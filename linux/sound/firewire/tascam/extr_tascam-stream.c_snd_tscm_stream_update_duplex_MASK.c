
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_tscm {int rx_stream; int tx_stream; int domain; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct snd_tscm *VAR_0)
{
 FUNC_0(&VAR_0->domain);

 FUNC_1(&VAR_0->tx_stream);
 FUNC_1(&VAR_0->rx_stream);
}
