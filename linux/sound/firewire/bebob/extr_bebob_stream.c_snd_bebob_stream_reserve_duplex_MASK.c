
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_bebob {scalar_t__ substreams_counter; int out_conn; int rx_stream; int tx_stream; TYPE_3__* unit; TYPE_2__* spec; int in_conn; int domain; } ;
struct TYPE_6__ {int device; } ;
struct TYPE_5__ {TYPE_1__* rate; } ;
struct TYPE_4__ {int (* get ) (struct snd_bebob*,unsigned int*) ;int (* set ) (struct snd_bebob*,unsigned int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_bebob*) ;
 int FUNC_2 (struct snd_bebob*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (unsigned int,unsigned int*) ;
 int FUNC_6 (struct snd_bebob*,int *,unsigned int,unsigned int) ;
 int FUNC_7 (struct snd_bebob*,unsigned int*) ;
 int FUNC_8 (struct snd_bebob*,unsigned int) ;

int FUNC_9(struct snd_bebob *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;



 VAR_3 = FUNC_2(VAR_0, &VAR_0->rx_stream);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = VAR_0->spec->rate->get(VAR_0, &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_1 == 0)
  VAR_1 = VAR_2;
 if (VAR_2 != VAR_1) {
  FUNC_0(&VAR_0->domain);
  FUNC_1(VAR_0);

  FUNC_3(&VAR_0->out_conn);
  FUNC_3(&VAR_0->in_conn);
 }

 if (VAR_0->substreams_counter == 0 || VAR_2 != VAR_1) {
  unsigned int VAR_4;






  VAR_3 = VAR_0->spec->rate->set(VAR_0, VAR_1);
  if (VAR_3 < 0) {
   FUNC_4(&VAR_0->unit->device,
    "fail to set sampling rate: %d\n",
    VAR_3);
   return VAR_3;
  }

  VAR_3 = FUNC_5(VAR_1, &VAR_4);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_3 = FUNC_6(VAR_0, &VAR_0->tx_stream, VAR_1, VAR_4);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_3 = FUNC_6(VAR_0, &VAR_0->rx_stream, VAR_1, VAR_4);
  if (VAR_3 < 0) {
   FUNC_3(&VAR_0->out_conn);
   return VAR_3;
  }
 }

 return 0;
}
