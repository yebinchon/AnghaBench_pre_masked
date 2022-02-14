
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_oxfw_stream_formation {int midi; int pcm; int rate; } ;
struct snd_oxfw {int ** tx_stream_formats; int has_output; int ** rx_stream_formats; } ;
struct snd_info_entry {struct snd_oxfw* private_data; } ;
struct snd_info_buffer {int dummy; } ;
typedef int curr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct snd_oxfw_stream_formation*,struct snd_oxfw_stream_formation*,int) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;
 int FUNC_2 (struct snd_oxfw*,int ,struct snd_oxfw_stream_formation*) ;
 int FUNC_3 (int *,struct snd_oxfw_stream_formation*) ;

__attribute__((used)) static void FUNC_4(struct snd_info_entry *VAR_3,
    struct snd_info_buffer *VAR_4)
{
 struct snd_oxfw *VAR_5 = VAR_3->private_data;
 struct snd_oxfw_stream_formation VAR_6, VAR_7;
 u8 *VAR_8;
 char VAR_9;
 int VAR_10, VAR_11;


 VAR_11 = FUNC_2(VAR_5,
          VAR_0,
          &VAR_7);
 if (VAR_11 < 0)
  return;

 FUNC_1(VAR_4, "Input Stream to device:\n");
 FUNC_1(VAR_4, "\tRate\tPCM\tMIDI\n");
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_8 = VAR_5->rx_stream_formats[VAR_10];
  if (VAR_8 == ((void*)0))
   continue;

  VAR_11 = FUNC_3(VAR_8, &VAR_6);
  if (VAR_11 < 0)
   continue;

  if (FUNC_0(&VAR_6, &VAR_7, sizeof(VAR_7)) == 0)
   VAR_9 = '*';
  else
   VAR_9 = ' ';

  FUNC_1(VAR_4, "%c\t%d\t%d\t%d\n", VAR_9,
       VAR_6.rate, VAR_6.pcm, VAR_6.midi);
 }

 if (!VAR_5->has_output)
  return;


 VAR_11 = FUNC_2(VAR_5,
          VAR_1,
          &VAR_7);
 if (VAR_11 < 0)
  return;

 FUNC_1(VAR_4, "Output Stream from device:\n");
 FUNC_1(VAR_4, "\tRate\tPCM\tMIDI\n");
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_8 = VAR_5->tx_stream_formats[VAR_10];
  if (VAR_8 == ((void*)0))
   continue;

  VAR_11 = FUNC_3(VAR_8, &VAR_6);
  if (VAR_11 < 0)
   continue;

  if (FUNC_0(&VAR_6, &VAR_7, sizeof(VAR_7)) == 0)
   VAR_9 = '*';
  else
   VAR_9 = ' ';

  FUNC_1(VAR_4, "%c\t%d\t%d\t%d\n", VAR_9,
       VAR_6.rate, VAR_6.pcm, VAR_6.midi);
 }
}
