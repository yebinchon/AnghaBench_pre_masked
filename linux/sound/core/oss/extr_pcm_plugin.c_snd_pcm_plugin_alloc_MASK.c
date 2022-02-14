
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_plugin_format {int channels; int format; } ;
struct TYPE_2__ {unsigned int first; int step; scalar_t__ addr; } ;
struct snd_pcm_plugin_channel {int frames; int enabled; TYPE_1__ area; scalar_t__ wanted; } ;
struct snd_pcm_plugin {scalar_t__ stream; int buf_frames; scalar_t__ access; scalar_t__ buf; struct snd_pcm_plugin_channel* buf_channels; struct snd_pcm_plugin_format dst_format; struct snd_pcm_plugin_format src_format; } ;
typedef int ssize_t ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (size_t,int ) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_plugin *VAR_7, snd_pcm_uframes_t VAR_8)
{
 struct snd_pcm_plugin_format *VAR_9;
 ssize_t VAR_10;
 size_t VAR_11;
 unsigned int VAR_12;
 struct snd_pcm_plugin_channel *VAR_13;

 if (VAR_7->stream == VAR_6) {
  VAR_9 = &VAR_7->src_format;
 } else {
  VAR_9 = &VAR_7->dst_format;
 }
 if ((VAR_10 = FUNC_3(VAR_9->format)) < 0)
  return VAR_10;
 VAR_11 = VAR_8 * VAR_9->channels * VAR_10;
 if (FUNC_2(VAR_11 % 8))
  return -VAR_2;
 VAR_11 /= 8;
 if (VAR_7->buf_frames < VAR_8) {
  FUNC_0(VAR_7->buf);
  VAR_7->buf = FUNC_1(VAR_11, VAR_3);
  VAR_7->buf_frames = VAR_8;
 }
 if (!VAR_7->buf) {
  VAR_7->buf_frames = 0;
  return -VAR_1;
 }
 VAR_13 = VAR_7->buf_channels;
 if (VAR_7->access == VAR_4) {
  for (VAR_12 = 0; VAR_12 < VAR_9->channels; VAR_12++, VAR_13++) {
   VAR_13->frames = VAR_8;
   VAR_13->enabled = 1;
   VAR_13->wanted = 0;
   VAR_13->area.addr = VAR_7->buf;
   VAR_13->area.first = VAR_12 * VAR_10;
   VAR_13->area.step = VAR_9->channels * VAR_10;
  }
 } else if (VAR_7->access == VAR_5) {
  if (FUNC_2(VAR_11 % VAR_9->channels))
   return -VAR_0;
  VAR_11 /= VAR_9->channels;
  for (VAR_12 = 0; VAR_12 < VAR_9->channels; VAR_12++, VAR_13++) {
   VAR_13->frames = VAR_8;
   VAR_13->enabled = 1;
   VAR_13->wanted = 0;
   VAR_13->area.addr = VAR_7->buf + (VAR_12 * VAR_11);
   VAR_13->area.first = 0;
   VAR_13->area.step = VAR_10;
  }
 } else
  return -VAR_0;
 return 0;
}
