
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_efw {int rx_stream; int tx_stream; int domain; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_efw*,int *) ;
 int FUNC_2 (struct snd_efw*,int *) ;
 int FUNC_3 (struct snd_efw*,int ) ;

int FUNC_4(struct snd_efw *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1, &VAR_1->tx_stream);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_1, &VAR_1->rx_stream);
 if (VAR_2 < 0) {
  FUNC_1(VAR_1, &VAR_1->tx_stream);
  return VAR_2;
 }

 VAR_2 = FUNC_0(&VAR_1->domain);
 if (VAR_2 < 0) {
  FUNC_1(VAR_1, &VAR_1->tx_stream);
  FUNC_1(VAR_1, &VAR_1->rx_stream);
  return VAR_2;
 }


 VAR_2 = FUNC_3(VAR_1, VAR_0);
 if (VAR_2 < 0) {
  FUNC_1(VAR_1, &VAR_1->tx_stream);
  FUNC_1(VAR_1, &VAR_1->rx_stream);
 }

 return VAR_2;
}
