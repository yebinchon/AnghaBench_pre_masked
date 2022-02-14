
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_oxfw_stream_formation {unsigned int rate; unsigned int pcm; } ;
struct amdtp_stream {int dummy; } ;
struct snd_oxfw {int** tx_stream_formats; int** rx_stream_formats; int unit; scalar_t__ assumed; struct amdtp_stream tx_stream; } ;
typedef enum avc_general_plug_dir { ____Placeholder_avc_general_plug_dir } avc_general_plug_dir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int*,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_oxfw*,unsigned int) ;
 int FUNC_3 (int*,struct snd_oxfw_stream_formation*) ;

__attribute__((used)) static int FUNC_4(struct snd_oxfw *VAR_4, struct amdtp_stream *VAR_5,
        unsigned int VAR_6, unsigned int VAR_7)
{
 u8 **VAR_8;
 struct snd_oxfw_stream_formation VAR_9;
 enum avc_general_plug_dir VAR_10;
 unsigned int VAR_11;
 int VAR_12, VAR_13;

 if (VAR_5 == &VAR_4->tx_stream) {
  VAR_8 = VAR_4->tx_stream_formats;
  VAR_10 = VAR_1;
 } else {
  VAR_8 = VAR_4->rx_stream_formats;
  VAR_10 = VAR_0;
 }


 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_13 = FUNC_3(VAR_8[VAR_12], &VAR_9);
  if (VAR_13 < 0)
   return VAR_13;

  if ((VAR_9.rate == VAR_6) && (VAR_9.pcm == VAR_7))
   break;
 }
 if (VAR_12 == VAR_3)
  return -VAR_2;


 if (VAR_4->assumed)
  return FUNC_2(VAR_4, VAR_6);


 VAR_11 = 5 + VAR_8[VAR_12][4] * 2;

 VAR_13 = FUNC_0(VAR_4->unit, VAR_10, 0, VAR_8[VAR_12], VAR_11);
 if (VAR_13 < 0)
  return VAR_13;


 FUNC_1(100);

 return 0;
}
