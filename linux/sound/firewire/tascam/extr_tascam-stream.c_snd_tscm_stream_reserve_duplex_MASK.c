
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_tscm {scalar_t__ substreams_counter; int tx_resources; int rx_stream; int tx_stream; int rx_resources; int domain; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_tscm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_tscm*,unsigned int,int *) ;
 int FUNC_4 (struct snd_tscm*,unsigned int,int ) ;
 int FUNC_5 (struct snd_tscm*,unsigned int*) ;

int FUNC_6(struct snd_tscm *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_5(VAR_1, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_1->substreams_counter == 0 || VAR_2 != VAR_3) {
  FUNC_0(&VAR_1->domain);

  FUNC_1(VAR_1);

  FUNC_2(&VAR_1->tx_resources);
  FUNC_2(&VAR_1->rx_resources);

  VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_0);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_4 = FUNC_3(VAR_1, VAR_2, &VAR_1->tx_stream);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_4 = FUNC_3(VAR_1, VAR_2, &VAR_1->rx_stream);
  if (VAR_4 < 0) {
   FUNC_2(&VAR_1->tx_resources);
   return VAR_4;
  }
 }

 return 0;
}
