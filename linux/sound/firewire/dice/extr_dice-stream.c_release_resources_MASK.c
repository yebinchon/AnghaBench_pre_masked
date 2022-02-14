
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {int * rx_resources; int * tx_resources; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct snd_dice *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  FUNC_0(&VAR_1->tx_resources[VAR_2]);
  FUNC_0(&VAR_1->rx_resources[VAR_2]);
 }
}
