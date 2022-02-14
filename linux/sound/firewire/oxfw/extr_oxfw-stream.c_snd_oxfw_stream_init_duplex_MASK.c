
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_oxfw {int tx_stream; scalar_t__ has_output; int rx_stream; int domain; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_oxfw*,int *) ;
 int FUNC_2 (struct snd_oxfw*,int *) ;

int FUNC_3(struct snd_oxfw *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0, &VAR_0->rx_stream);
 if (VAR_1 < 0)
  return VAR_1;

 if (VAR_0->has_output) {
  VAR_1 = FUNC_2(VAR_0, &VAR_0->tx_stream);
  if (VAR_1 < 0) {
   FUNC_1(VAR_0, &VAR_0->rx_stream);
   return VAR_1;
  }
 }

 VAR_1 = FUNC_0(&VAR_0->domain);
 if (VAR_1 < 0) {
  FUNC_1(VAR_0, &VAR_0->rx_stream);
  if (VAR_0->has_output)
   FUNC_1(VAR_0, &VAR_0->tx_stream);
 }

 return VAR_1;
}
