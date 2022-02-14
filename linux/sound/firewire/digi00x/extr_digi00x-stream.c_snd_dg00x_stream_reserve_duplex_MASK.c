
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dg00x {scalar_t__ substreams_counter; int rx_resources; int tx_stream; int rx_stream; int tx_resources; int domain; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_dg00x*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_dg00x*,int *,unsigned int) ;
 int FUNC_4 (struct snd_dg00x*,unsigned int*) ;
 int FUNC_5 (struct snd_dg00x*,unsigned int) ;

int FUNC_6(struct snd_dg00x *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_4(VAR_0, &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_1 == 0)
  VAR_1 = VAR_2;

 if (VAR_0->substreams_counter == 0 || VAR_2 != VAR_1) {
  FUNC_0(&VAR_0->domain);

  FUNC_1(VAR_0);

  FUNC_2(&VAR_0->tx_resources);
  FUNC_2(&VAR_0->rx_resources);

  VAR_3 = FUNC_5(VAR_0, VAR_1);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_3 = FUNC_3(VAR_0, &VAR_0->rx_stream, VAR_1);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_3 = FUNC_3(VAR_0, &VAR_0->tx_stream, VAR_1);
  if (VAR_3 < 0) {
   FUNC_2(&VAR_0->rx_resources);
   return VAR_3;
  }
 }

 return 0;
}
