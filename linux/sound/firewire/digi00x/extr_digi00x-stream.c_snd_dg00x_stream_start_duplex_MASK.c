
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int generation; int channel; } ;
struct snd_dg00x {scalar_t__ substreams_counter; int domain; int tx_stream; int rx_stream; TYPE_3__ tx_resources; TYPE_3__ rx_resources; int unit; } ;
struct TYPE_5__ {int max_speed; TYPE_1__* card; } ;
struct TYPE_4__ {unsigned int generation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct snd_dg00x*) ;
 int FUNC_7 (struct snd_dg00x*) ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_2__* FUNC_9 (int ) ;

int FUNC_10(struct snd_dg00x *VAR_2)
{
 unsigned int VAR_3 = VAR_2->rx_resources.generation;
 int VAR_4 = 0;

 if (VAR_2->substreams_counter == 0)
  return 0;

 if (FUNC_5(&VAR_2->tx_stream) ||
     FUNC_5(&VAR_2->rx_stream)) {
  FUNC_2(&VAR_2->domain);
  FUNC_7(VAR_2);
 }

 if (VAR_3 != FUNC_9(VAR_2->unit)->card->generation) {
  VAR_4 = FUNC_8(&VAR_2->tx_resources);
  if (VAR_4 < 0)
   goto error;

  VAR_4 = FUNC_8(&VAR_2->rx_resources);
  if (VAR_4 < 0)
   goto error;
 }





 if (!FUNC_3(&VAR_2->rx_stream)) {
  int VAR_5 = FUNC_9(VAR_2->unit)->max_speed;

  VAR_4 = FUNC_6(VAR_2);
  if (VAR_4 < 0)
   goto error;

  VAR_4 = FUNC_0(&VAR_2->domain, &VAR_2->rx_stream,
           VAR_2->rx_resources.channel, VAR_5);
  if (VAR_4 < 0)
   goto error;

  VAR_4 = FUNC_0(&VAR_2->domain, &VAR_2->tx_stream,
           VAR_2->tx_resources.channel, VAR_5);
  if (VAR_4 < 0)
   goto error;

  VAR_4 = FUNC_1(&VAR_2->domain);
  if (VAR_4 < 0)
   goto error;

  if (!FUNC_4(&VAR_2->rx_stream,
      VAR_0) ||
      !FUNC_4(&VAR_2->tx_stream,
      VAR_0)) {
   VAR_4 = -VAR_1;
   goto error;
  }
 }

 return 0;
error:
 FUNC_2(&VAR_2->domain);
 FUNC_7(VAR_2);

 return VAR_4;
}
