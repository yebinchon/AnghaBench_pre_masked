
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_efw {scalar_t__ substreams_counter; int in_conn; int out_conn; int domain; int tx_stream; int rx_stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_efw*,unsigned int*) ;
 int FUNC_7 (struct snd_efw*,int *,unsigned int) ;

int FUNC_8(struct snd_efw *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5 = 0;


 if (VAR_3->substreams_counter == 0)
  return -VAR_1;

 if (FUNC_4(&VAR_3->rx_stream) ||
     FUNC_4(&VAR_3->tx_stream)) {
  FUNC_1(&VAR_3->domain);
  FUNC_5(&VAR_3->out_conn);
  FUNC_5(&VAR_3->in_conn);
 }

 VAR_5 = FUNC_6(VAR_3, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 if (!FUNC_2(&VAR_3->rx_stream)) {
  VAR_5 = FUNC_7(VAR_3, &VAR_3->rx_stream, VAR_4);
  if (VAR_5 < 0)
   goto error;

  VAR_5 = FUNC_7(VAR_3, &VAR_3->tx_stream, VAR_4);
  if (VAR_5 < 0)
   goto error;

  VAR_5 = FUNC_0(&VAR_3->domain);
  if (VAR_5 < 0)
   goto error;


  if (!FUNC_3(&VAR_3->rx_stream,
      VAR_0) ||
      !FUNC_3(&VAR_3->tx_stream,
      VAR_0)) {
   VAR_5 = -VAR_2;
   goto error;
  }
 }

 return 0;
error:
 FUNC_1(&VAR_3->domain);

 FUNC_5(&VAR_3->out_conn);
 FUNC_5(&VAR_3->in_conn);

 return VAR_5;
}
