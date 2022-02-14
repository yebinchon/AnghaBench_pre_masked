
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ff {scalar_t__ substreams_counter; int rx_resources; int tx_resources; int domain; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_ff*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct snd_ff *VAR_0)
{
 if (VAR_0->substreams_counter == 0) {
  FUNC_0(&VAR_0->domain);
  FUNC_1(VAR_0);

  FUNC_2(&VAR_0->tx_resources);
  FUNC_2(&VAR_0->rx_resources);
 }
}
