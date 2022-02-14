
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_oxfw {int tx_stream; int out_conn; scalar_t__ has_output; int rx_stream; int in_conn; int domain; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct snd_oxfw *VAR_0)
{
 FUNC_0(&VAR_0->domain);

 FUNC_2(&VAR_0->in_conn);

 FUNC_1(&VAR_0->rx_stream);

 if (VAR_0->has_output) {
  FUNC_2(&VAR_0->out_conn);

  FUNC_1(&VAR_0->tx_stream);
 }
}
