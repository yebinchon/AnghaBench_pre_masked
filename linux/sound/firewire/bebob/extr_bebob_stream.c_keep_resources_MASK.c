
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_bebob_stream_formation {int midi; int pcm; } ;
struct cmp_connection {int dummy; } ;
struct amdtp_stream {int dummy; } ;
struct snd_bebob {struct cmp_connection in_conn; struct snd_bebob_stream_formation* rx_stream_formations; struct cmp_connection out_conn; struct snd_bebob_stream_formation* tx_stream_formations; struct amdtp_stream tx_stream; } ;


 int FUNC_0 (struct amdtp_stream*,unsigned int,int ,int ,int) ;
 int FUNC_1 (struct amdtp_stream*) ;
 int FUNC_2 (struct cmp_connection*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_bebob *VAR_0, struct amdtp_stream *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 struct snd_bebob_stream_formation *VAR_4;
 struct cmp_connection *VAR_5;
 int VAR_6;

 if (VAR_1 == &VAR_0->tx_stream) {
  VAR_4 = VAR_0->tx_stream_formations + VAR_3;
  VAR_5 = &VAR_0->out_conn;
 } else {
  VAR_4 = VAR_0->rx_stream_formations + VAR_3;
  VAR_5 = &VAR_0->in_conn;
 }

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_4->pcm,
      VAR_4->midi, 0);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_2(VAR_5, FUNC_1(VAR_1));
}
