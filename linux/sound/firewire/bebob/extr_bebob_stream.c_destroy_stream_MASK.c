
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {int dummy; } ;
struct snd_bebob {int in_conn; int out_conn; struct amdtp_stream tx_stream; } ;


 int FUNC_0 (struct amdtp_stream*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct snd_bebob *VAR_0, struct amdtp_stream *VAR_1)
{
 FUNC_0(VAR_1);

 if (VAR_1 == &VAR_0->tx_stream)
  FUNC_1(&VAR_0->out_conn);
 else
  FUNC_1(&VAR_0->in_conn);
}
