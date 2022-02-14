
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmp_connection {int dummy; } ;
struct amdtp_stream {int dummy; } ;
struct snd_efw {unsigned int* pcm_capture_channels; unsigned int midi_out_ports; unsigned int* pcm_playback_channels; unsigned int midi_in_ports; struct cmp_connection in_conn; struct cmp_connection out_conn; struct amdtp_stream tx_stream; } ;


 int FUNC_0 (struct amdtp_stream*,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_1 (struct amdtp_stream*) ;
 int FUNC_2 (struct cmp_connection*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_efw *VAR_0, struct amdtp_stream *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 struct cmp_connection *VAR_6;
 int VAR_7;

 if (VAR_1 == &VAR_0->tx_stream) {
  VAR_4 = VAR_0->pcm_capture_channels[VAR_3];
  VAR_5 = VAR_0->midi_out_ports;
  VAR_6 = &VAR_0->out_conn;
 } else {
  VAR_4 = VAR_0->pcm_playback_channels[VAR_3];
  VAR_5 = VAR_0->midi_in_ports;
  VAR_6 = &VAR_0->in_conn;
 }

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_4,
      VAR_5, 0);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_2(VAR_6, FUNC_1(VAR_1));
}
