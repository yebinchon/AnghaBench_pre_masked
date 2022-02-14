
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dg00x {int rx_stream; int tx_stream; int rx_resources; int tx_resources; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct snd_dg00x *VAR_0)
{
 FUNC_1(&VAR_0->tx_resources);
 FUNC_1(&VAR_0->rx_resources);

 FUNC_0(&VAR_0->tx_stream);
 FUNC_0(&VAR_0->rx_stream);
}
