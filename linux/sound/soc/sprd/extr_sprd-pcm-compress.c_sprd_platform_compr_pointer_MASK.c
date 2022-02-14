
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_compr_stream {int copied_total; scalar_t__ info_area; } ;
struct sprd_compr_playinfo {int current_data_offset; } ;
struct snd_compr_tstamp {int pcm_io_frames; int copied_total; } ;
struct snd_compr_stream {struct snd_compr_runtime* runtime; } ;
struct snd_compr_runtime {struct sprd_compr_stream* private_data; } ;



__attribute__((used)) static int FUNC_0(struct snd_compr_stream *VAR_0,
           struct snd_compr_tstamp *VAR_1)
{
 struct snd_compr_runtime *VAR_2 = VAR_0->runtime;
 struct sprd_compr_stream *VAR_3 = VAR_2->private_data;
 struct sprd_compr_playinfo *VAR_4 =
  (struct sprd_compr_playinfo *)VAR_3->info_area;

 VAR_1->copied_total = VAR_3->copied_total;
 VAR_1->pcm_io_frames = VAR_4->current_data_offset;

 return 0;
}
