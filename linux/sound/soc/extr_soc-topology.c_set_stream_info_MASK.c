
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_tplg_stream_caps {int sig_bits; int formats; int rate_max; int rate_min; int rates; int channels_max; int channels_min; int name; } ;
struct snd_soc_pcm_stream {void* sig_bits; int formats; void* rate_max; void* rate_min; void* rates; void* channels_max; void* channels_min; int stream_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_pcm_stream *VAR_1,
 struct snd_soc_tplg_stream_caps *VAR_2)
{
 VAR_1->stream_name = FUNC_0(VAR_2->name, VAR_0);
 VAR_1->channels_min = FUNC_1(VAR_2->channels_min);
 VAR_1->channels_max = FUNC_1(VAR_2->channels_max);
 VAR_1->rates = FUNC_1(VAR_2->rates);
 VAR_1->rate_min = FUNC_1(VAR_2->rate_min);
 VAR_1->rate_max = FUNC_1(VAR_2->rate_max);
 VAR_1->formats = FUNC_2(VAR_2->formats);
 VAR_1->sig_bits = FUNC_1(VAR_2->sig_bits);
}
