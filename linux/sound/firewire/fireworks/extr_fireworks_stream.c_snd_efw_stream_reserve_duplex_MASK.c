
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_efw {scalar_t__ substreams_counter; int in_conn; int rx_stream; int tx_stream; int out_conn; int domain; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_efw*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_efw*,int *,unsigned int,unsigned int) ;
 int FUNC_5 (struct snd_efw*,unsigned int*) ;
 int FUNC_6 (struct snd_efw*,unsigned int) ;
 int FUNC_7 (unsigned int,unsigned int*) ;

int FUNC_8(struct snd_efw *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;



 VAR_3 = FUNC_1(VAR_0, &VAR_0->rx_stream);
 if (VAR_3 < 0)
  return VAR_3;


 VAR_3 = FUNC_5(VAR_0, &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_1 == 0)
  VAR_1 = VAR_2;
 if (VAR_1 != VAR_2) {
  FUNC_0(&VAR_0->domain);

  FUNC_2(&VAR_0->out_conn);
  FUNC_2(&VAR_0->in_conn);

  FUNC_3(&VAR_0->out_conn);
  FUNC_3(&VAR_0->in_conn);
 }

 if (VAR_0->substreams_counter == 0 || VAR_1 != VAR_2) {
  unsigned int VAR_4;

  VAR_3 = FUNC_6(VAR_0, VAR_1);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_3 = FUNC_7(VAR_1, &VAR_4);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_3 = FUNC_4(VAR_0, &VAR_0->tx_stream, VAR_1, VAR_4);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_3 = FUNC_4(VAR_0, &VAR_0->rx_stream, VAR_1, VAR_4);
  if (VAR_3 < 0) {
   FUNC_3(&VAR_0->in_conn);
   return VAR_3;
  }
 }

 return 0;
}
