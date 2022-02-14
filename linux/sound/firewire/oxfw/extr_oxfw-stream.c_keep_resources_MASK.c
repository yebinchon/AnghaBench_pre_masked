
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_oxfw_stream_formation {scalar_t__ rate; scalar_t__ pcm; scalar_t__ midi; } ;
struct cmp_connection {int dummy; } ;
struct amdtp_stream {int dummy; } ;
struct snd_oxfw {struct cmp_connection out_conn; int ** tx_stream_formats; struct cmp_connection in_conn; int ** rx_stream_formats; struct amdtp_stream rx_stream; } ;
typedef enum avc_general_plug_dir { ____Placeholder_avc_general_plug_dir } avc_general_plug_dir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amdtp_stream*,scalar_t__,scalar_t__,int,int) ;
 int FUNC_1 (struct amdtp_stream*) ;
 int FUNC_2 (struct cmp_connection*,int ) ;
 int FUNC_3 (struct snd_oxfw*,int,struct snd_oxfw_stream_formation*) ;
 int FUNC_4 (int *,struct snd_oxfw_stream_formation*) ;

__attribute__((used)) static int FUNC_5(struct snd_oxfw *VAR_4, struct amdtp_stream *VAR_5)
{
 enum avc_general_plug_dir VAR_6;
 u8 **VAR_7;
 struct snd_oxfw_stream_formation VAR_8;
 struct cmp_connection *VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_5 == &VAR_4->rx_stream) {
  VAR_6 = VAR_0;
  VAR_7 = VAR_4->rx_stream_formats;
  VAR_9 = &VAR_4->in_conn;
 } else {
  VAR_6 = VAR_1;
  VAR_7 = VAR_4->tx_stream_formats;
  VAR_9 = &VAR_4->out_conn;
 }

 VAR_11 = FUNC_3(VAR_4, VAR_6, &VAR_8);
 if (VAR_11 < 0)
  return VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  struct snd_oxfw_stream_formation VAR_12;

  if (VAR_7[VAR_10] == ((void*)0))
   break;

  VAR_11 = FUNC_4(VAR_7[VAR_10], &VAR_12);
  if (VAR_11 < 0)
   return VAR_11;

  if (VAR_12.rate == VAR_8.rate && VAR_12.pcm == VAR_8.pcm &&
      VAR_12.midi == VAR_8.midi)
   break;
 }
 if (VAR_10 == VAR_3)
  return -VAR_2;


 if (VAR_8.pcm == 0)
  return -VAR_2;

 VAR_11 = FUNC_0(VAR_5, VAR_8.rate, VAR_8.pcm,
      VAR_8.midi * 8, 0);
 if (VAR_11 < 0)
  return VAR_11;

 return FUNC_2(VAR_9, FUNC_1(VAR_5));
}
