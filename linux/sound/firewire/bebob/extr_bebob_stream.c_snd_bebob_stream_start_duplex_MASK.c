
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_bebob {scalar_t__ substreams_counter; int domain; int tx_stream; int rx_stream; TYPE_3__* unit; TYPE_2__* spec; scalar_t__ maudio_special_quirk; } ;
struct TYPE_6__ {int device; } ;
struct TYPE_5__ {TYPE_1__* rate; } ;
struct TYPE_4__ {int (* get ) (struct snd_bebob*,unsigned int*) ;int (* set ) (struct snd_bebob*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct snd_bebob*) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (struct snd_bebob*) ;
 int FUNC_8 (struct snd_bebob*,int *) ;
 int FUNC_9 (struct snd_bebob*,unsigned int*) ;
 int FUNC_10 (struct snd_bebob*,unsigned int) ;

int FUNC_11(struct snd_bebob *VAR_3)
{
 int VAR_4;


 if (VAR_3->substreams_counter == 0)
  return -VAR_1;


 if (FUNC_4(&VAR_3->rx_stream) ||
     FUNC_4(&VAR_3->tx_stream)) {
  FUNC_1(&VAR_3->domain);
  FUNC_5(VAR_3);
 }

 if (!FUNC_2(&VAR_3->rx_stream)) {
  unsigned int VAR_5;

  if (VAR_3->maudio_special_quirk) {
   VAR_4 = VAR_3->spec->rate->get(VAR_3, &VAR_5);
   if (VAR_4 < 0)
    return VAR_4;
  }

  VAR_4 = FUNC_7(VAR_3);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_4 = FUNC_8(VAR_3, &VAR_3->rx_stream);
  if (VAR_4 < 0)
   goto error;

  VAR_4 = FUNC_8(VAR_3, &VAR_3->tx_stream);
  if (VAR_4 < 0)
   goto error;

  VAR_4 = FUNC_0(&VAR_3->domain);
  if (VAR_4 < 0)
   goto error;




  if (VAR_3->maudio_special_quirk) {
   VAR_4 = VAR_3->spec->rate->set(VAR_3, VAR_5);
   if (VAR_4 < 0) {
    FUNC_6(&VAR_3->unit->device,
     "fail to ensure sampling rate: %d\n",
     VAR_4);
    goto error;
   }
  }

  if (!FUNC_3(&VAR_3->rx_stream,
      VAR_0) ||
      !FUNC_3(&VAR_3->tx_stream,
      VAR_0)) {
   VAR_4 = -VAR_2;
   goto error;
  }
 }

 return 0;
error:
 FUNC_1(&VAR_3->domain);
 FUNC_5(VAR_3);
 return VAR_4;
}
