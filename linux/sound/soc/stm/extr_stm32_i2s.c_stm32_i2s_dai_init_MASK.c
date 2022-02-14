
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_stream {char* stream_name; int channels_min; int channels_max; int formats; int rates; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct snd_soc_pcm_stream *VAR_3,
          char *VAR_4)
{
 VAR_3->stream_name = VAR_4;
 VAR_3->channels_min = 1;
 VAR_3->channels_max = 2;
 VAR_3->rates = VAR_2;
 VAR_3->formats = VAR_0 |
       VAR_1;
}
