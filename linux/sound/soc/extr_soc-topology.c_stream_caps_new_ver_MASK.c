
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_tplg_stream_caps_v4 {int buffer_size_max; int buffer_size_min; int period_size_max; int period_size_min; int periods_max; int periods_min; int channels_max; int channels_min; int rate_max; int rate_min; int rates; int formats; int name; } ;
struct snd_soc_tplg_stream_caps {int buffer_size_max; int buffer_size_min; int period_size_max; int period_size_min; int periods_max; int periods_min; int channels_max; int channels_min; int rate_max; int rate_min; int rates; int formats; int name; int size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_tplg_stream_caps *VAR_1,
    struct snd_soc_tplg_stream_caps_v4 *VAR_2)
{
 VAR_1->size = FUNC_0(sizeof(*VAR_1));
 FUNC_1(VAR_1->name, VAR_2->name, VAR_0);
 VAR_1->formats = VAR_2->formats;
 VAR_1->rates = VAR_2->rates;
 VAR_1->rate_min = VAR_2->rate_min;
 VAR_1->rate_max = VAR_2->rate_max;
 VAR_1->channels_min = VAR_2->channels_min;
 VAR_1->channels_max = VAR_2->channels_max;
 VAR_1->periods_min = VAR_2->periods_min;
 VAR_1->periods_max = VAR_2->periods_max;
 VAR_1->period_size_min = VAR_2->period_size_min;
 VAR_1->period_size_max = VAR_2->period_size_max;
 VAR_1->buffer_size_min = VAR_2->buffer_size_min;
 VAR_1->buffer_size_max = VAR_2->buffer_size_max;
}
