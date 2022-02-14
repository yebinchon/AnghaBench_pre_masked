
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int channel; } ;
struct TYPE_6__ {int channel; } ;
struct snd_ff {scalar_t__ substreams_counter; int domain; TYPE_4__* spec; int tx_stream; int rx_stream; TYPE_2__ tx_resources; TYPE_1__ rx_resources; int unit; } ;
struct TYPE_10__ {int max_speed; } ;
struct TYPE_9__ {TYPE_3__* protocol; } ;
struct TYPE_8__ {int (* begin_session ) (struct snd_ff*,unsigned int) ;int (* switch_fetching_mode ) (struct snd_ff*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct snd_ff*) ;
 TYPE_5__* FUNC_7 (int ) ;
 int FUNC_8 (struct snd_ff*,unsigned int) ;
 int FUNC_9 (struct snd_ff*,int) ;

int FUNC_10(struct snd_ff *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 if (VAR_2->substreams_counter == 0)
  return 0;

 if (FUNC_5(&VAR_2->tx_stream) ||
     FUNC_5(&VAR_2->rx_stream)) {
  FUNC_2(&VAR_2->domain);
  FUNC_6(VAR_2);
 }





 if (!FUNC_3(&VAR_2->rx_stream)) {
  int VAR_5 = FUNC_7(VAR_2->unit)->max_speed;

  VAR_4 = VAR_2->spec->protocol->begin_session(VAR_2, VAR_3);
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

  VAR_4 = VAR_2->spec->protocol->switch_fetching_mode(VAR_2, 1);
  if (VAR_4 < 0)
   goto error;
 }

 return 0;
error:
 FUNC_2(&VAR_2->domain);
 FUNC_6(VAR_2);

 return VAR_4;
}
