
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcxhr {struct pcxhr_mgr* mgr; } ;
struct snd_info_entry {struct snd_pcxhr* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct pcxhr_rmh {int* stat; int cmd_len; int stat_len; int cmd_idx; scalar_t__ dsp_stat; void** cmd; } ;
struct pcxhr_mgr {int dsp_loaded; int dsp_version; int sample_rate_real; int async_err_other_last; int async_err_stream_xrun; int async_err_pipe_xrun; int dsp_time_err; int granularity; scalar_t__ board_has_analog; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (struct pcxhr_rmh*,int ) ;
 int FUNC_1 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;
 int FUNC_2 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct snd_info_entry *VAR_6,
       struct snd_info_buffer *VAR_7)
{
 struct snd_pcxhr *VAR_8 = VAR_6->private_data;
 struct pcxhr_mgr *VAR_9 = VAR_8->mgr;

 FUNC_2(VAR_7, "\n%s\n", VAR_9->name);


 if (VAR_9->dsp_loaded & (1 << VAR_3)) {
  struct pcxhr_rmh VAR_10;
  short VAR_11 = (VAR_9->dsp_version >> 16) & 0xff;
  short VAR_12 = (VAR_9->dsp_version >> 8) & 0xff;
  short VAR_13 = VAR_9->dsp_version & 0xff;
  FUNC_2(VAR_7, "module version %s\n",
       VAR_2);
  FUNC_2(VAR_7, "dsp version %d.%d.%d\n",
       VAR_11, VAR_12, VAR_13);
  if (VAR_9->board_has_analog)
   FUNC_2(VAR_7, "analog io available\n");
  else
   FUNC_2(VAR_7, "digital only board\n");


  FUNC_0(&VAR_10, VAR_0);
  if( ! FUNC_1(VAR_9, &VAR_10) ) {
   int VAR_14 = VAR_10.stat[0];
   int VAR_15 = VAR_10.stat[1];
   if (VAR_15 > 0) {
    if (VAR_9->sample_rate_real != 0 &&
        VAR_9->sample_rate_real != 48000) {
     VAR_15 = (VAR_15 * 48000) /
       VAR_9->sample_rate_real;
     if (VAR_9->sample_rate_real >=
         VAR_4)
      VAR_15 *= 2;
    }
    VAR_14 = 100 - (100 * VAR_14) / VAR_15;
    FUNC_2(VAR_7, "cpu load    %d%%\n", VAR_14);
    FUNC_2(VAR_7, "buffer pool %d/%d\n",
         VAR_10.stat[2], VAR_10.stat[3]);
   }
  }
  FUNC_2(VAR_7, "dma granularity : %d\n",
       VAR_9->granularity);
  FUNC_2(VAR_7, "dsp time errors : %d\n",
       VAR_9->dsp_time_err);
  FUNC_2(VAR_7, "dsp async pipe xrun errors : %d\n",
       VAR_9->async_err_pipe_xrun);
  FUNC_2(VAR_7, "dsp async stream xrun errors : %d\n",
       VAR_9->async_err_stream_xrun);
  FUNC_2(VAR_7, "dsp async last other error : %x\n",
       VAR_9->async_err_other_last);

  VAR_10.cmd[0] = 0x4200 + VAR_5;
  VAR_10.cmd_len = 1;
  VAR_10.stat_len = VAR_5;
  VAR_10.dsp_stat = 0;
  VAR_10.cmd_idx = VAR_1;
  if( ! FUNC_1(VAR_9, &VAR_10) ) {
   int VAR_16;
   if (VAR_10.stat_len > 8)
    VAR_10.stat_len = 8;
   for (VAR_16 = 0; VAR_16 < VAR_10.stat_len; VAR_16++)
    FUNC_2(VAR_7, "debug[%02d] = %06x\n",
         VAR_16, VAR_10.stat[VAR_16]);
  }
 } else
  FUNC_2(VAR_7, "no firmware loaded\n");
 FUNC_2(VAR_7, "\n");
}
