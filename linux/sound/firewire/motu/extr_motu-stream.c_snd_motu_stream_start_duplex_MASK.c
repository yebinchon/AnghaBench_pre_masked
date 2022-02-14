
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {unsigned int generation; int channel; } ;
struct snd_motu {scalar_t__ substreams_counter; int domain; TYPE_5__* unit; TYPE_3__* spec; int rx_stream; int tx_stream; TYPE_6__ rx_resources; TYPE_6__ tx_resources; } ;
struct TYPE_11__ {int device; } ;
struct TYPE_10__ {int max_speed; TYPE_1__* card; } ;
struct TYPE_9__ {TYPE_2__* protocol; } ;
struct TYPE_8__ {int (* switch_fetching_mode ) (struct snd_motu*,int) ;} ;
struct TYPE_7__ {unsigned int generation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct snd_motu*) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (struct snd_motu*) ;
 int FUNC_9 (struct snd_motu*) ;
 int FUNC_10 (TYPE_6__*) ;
 TYPE_4__* FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (struct snd_motu*,int) ;

int FUNC_13(struct snd_motu *VAR_2)
{
 unsigned int VAR_3 = VAR_2->rx_resources.generation;
 int VAR_4 = 0;

 if (VAR_2->substreams_counter == 0)
  return 0;

 if (FUNC_5(&VAR_2->rx_stream) ||
     FUNC_5(&VAR_2->tx_stream)) {
  FUNC_2(&VAR_2->domain);
  FUNC_9(VAR_2);
 }

 if (VAR_3 != FUNC_11(VAR_2->unit)->card->generation) {
  VAR_4 = FUNC_10(&VAR_2->rx_resources);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_4 = FUNC_10(&VAR_2->tx_resources);
  if (VAR_4 < 0)
   return VAR_4;
 }

 if (!FUNC_3(&VAR_2->rx_stream)) {
  int VAR_5 = FUNC_11(VAR_2->unit)->max_speed;

  VAR_4 = FUNC_8(VAR_2);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_4 = FUNC_6(VAR_2);
  if (VAR_4 < 0) {
   FUNC_7(&VAR_2->unit->device,
    "fail to start isochronous comm: %d\n", VAR_4);
   goto stop_streams;
  }

  VAR_4 = FUNC_0(&VAR_2->domain, &VAR_2->tx_stream,
           VAR_2->tx_resources.channel, VAR_5);
  if (VAR_4 < 0)
   goto stop_streams;

  VAR_4 = FUNC_0(&VAR_2->domain, &VAR_2->rx_stream,
           VAR_2->rx_resources.channel, VAR_5);
  if (VAR_4 < 0)
   goto stop_streams;

  VAR_4 = FUNC_1(&VAR_2->domain);
  if (VAR_4 < 0)
   goto stop_streams;

  if (!FUNC_4(&VAR_2->tx_stream,
      VAR_0) ||
      !FUNC_4(&VAR_2->rx_stream,
      VAR_0)) {
   VAR_4 = -VAR_1;
   goto stop_streams;
  }

  VAR_4 = VAR_2->spec->protocol->switch_fetching_mode(VAR_2, 1);
  if (VAR_4 < 0) {
   FUNC_7(&VAR_2->unit->device,
    "fail to enable frame fetching: %d\n", VAR_4);
   goto stop_streams;
  }
 }

 return 0;

stop_streams:
 FUNC_2(&VAR_2->domain);
 FUNC_9(VAR_2);
 return VAR_4;
}
