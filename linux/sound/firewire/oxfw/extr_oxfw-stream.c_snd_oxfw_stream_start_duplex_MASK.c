
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_oxfw {scalar_t__ substreams_count; int out_conn; scalar_t__ has_output; int in_conn; int domain; int tx_stream; int rx_stream; TYPE_1__* unit; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (struct snd_oxfw*,int *) ;

int FUNC_8(struct snd_oxfw *VAR_3)
{
 int VAR_4;

 if (VAR_3->substreams_count == 0)
  return -VAR_1;

 if (FUNC_4(&VAR_3->rx_stream) ||
     FUNC_4(&VAR_3->tx_stream)) {
  FUNC_1(&VAR_3->domain);

  FUNC_5(&VAR_3->in_conn);
  if (VAR_3->has_output)
   FUNC_5(&VAR_3->out_conn);
 }

 if (!FUNC_2(&VAR_3->rx_stream)) {
  VAR_4 = FUNC_7(VAR_3, &VAR_3->rx_stream);
  if (VAR_4 < 0) {
   FUNC_6(&VAR_3->unit->device,
    "fail to prepare rx stream: %d\n", VAR_4);
   goto error;
  }

  if (VAR_3->has_output &&
      !FUNC_2(&VAR_3->tx_stream)) {
   VAR_4 = FUNC_7(VAR_3, &VAR_3->tx_stream);
   if (VAR_4 < 0) {
    FUNC_6(&VAR_3->unit->device,
     "fail to prepare tx stream: %d\n", VAR_4);
    goto error;
   }
  }

  VAR_4 = FUNC_0(&VAR_3->domain);
  if (VAR_4 < 0)
   goto error;


  if (!FUNC_3(&VAR_3->rx_stream,
      VAR_0)) {
   VAR_4 = -VAR_2;
   goto error;
  }

  if (VAR_3->has_output) {
   if (!FUNC_3(&VAR_3->tx_stream,
       VAR_0)) {
    VAR_4 = -VAR_2;
    goto error;
   }
  }
 }

 return 0;
error:
 FUNC_1(&VAR_3->domain);

 FUNC_5(&VAR_3->in_conn);
 if (VAR_3->has_output)
  FUNC_5(&VAR_3->out_conn);

 return VAR_4;
}
