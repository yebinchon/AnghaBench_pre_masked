
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_motu {scalar_t__ substreams_counter; int tx_resources; int rx_stream; int tx_stream; TYPE_3__* unit; TYPE_2__* spec; int rx_resources; int domain; } ;
struct TYPE_6__ {int device; } ;
struct TYPE_5__ {TYPE_1__* protocol; } ;
struct TYPE_4__ {int (* get_clock_rate ) (struct snd_motu*,unsigned int*) ;int (* set_clock_rate ) (struct snd_motu*,unsigned int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct snd_motu*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_motu*,unsigned int,int *) ;
 int FUNC_5 (struct snd_motu*) ;
 int FUNC_6 (struct snd_motu*,unsigned int*) ;
 int FUNC_7 (struct snd_motu*,unsigned int) ;

int FUNC_8(struct snd_motu *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 VAR_3 = VAR_0->spec->protocol->get_clock_rate(VAR_0, &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_1 == 0)
  VAR_1 = VAR_2;

 if (VAR_0->substreams_counter == 0 || VAR_2 != VAR_1) {
  FUNC_0(&VAR_0->domain);
  FUNC_2(VAR_0);

  FUNC_3(&VAR_0->tx_resources);
  FUNC_3(&VAR_0->rx_resources);

  VAR_3 = VAR_0->spec->protocol->set_clock_rate(VAR_0, VAR_1);
  if (VAR_3 < 0) {
   FUNC_1(&VAR_0->unit->device,
    "fail to set sampling rate: %d\n", VAR_3);
   return VAR_3;
  }

  VAR_3 = FUNC_5(VAR_0);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_3 = FUNC_4(VAR_0, VAR_1, &VAR_0->tx_stream);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_3 = FUNC_4(VAR_0, VAR_1, &VAR_0->rx_stream);
  if (VAR_3 < 0) {
   FUNC_3(&VAR_0->tx_resources);
   return VAR_3;
  }
 }

 return 0;
}
