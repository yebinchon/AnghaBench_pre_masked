
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcxhr {struct pcxhr_mgr* mgr; } ;
struct snd_info_entry {struct snd_pcxhr* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct pcxhr_rmh {int* stat; int * cmd; } ;
struct pcxhr_mgr {int dsp_loaded; int capture_ltc; scalar_t__ is_hr_stereo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pcxhr_mgr*,int) ;
 int FUNC_1 (struct pcxhr_rmh*,int ) ;
 int FUNC_2 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;
 int FUNC_3 (struct pcxhr_mgr*,int ,int ,int *) ;
 int FUNC_4 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_5(struct snd_info_entry *VAR_6,
      struct snd_info_buffer *VAR_7)
{
 struct snd_pcxhr *VAR_8 = VAR_6->private_data;
 struct pcxhr_mgr *VAR_9 = VAR_8->mgr;
 struct pcxhr_rmh VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15;

 if (!(VAR_9->dsp_loaded & (1 << VAR_3))) {
  FUNC_4(VAR_7, "no firmware loaded\n");
  return;
 }
 if (!VAR_9->capture_ltc) {
  FUNC_1(&VAR_10, VAR_1);
  VAR_10.cmd[0] |= VAR_2;
  VAR_15 = FUNC_2(VAR_9, &VAR_10);
  if (VAR_15) {
   FUNC_4(VAR_7, "ltc not activated (%d)\n", VAR_15);
   return;
  }
  if (VAR_9->is_hr_stereo)
   FUNC_0(VAR_9, 1);
  else
   FUNC_3(VAR_9, VAR_4,
          VAR_4, ((void*)0));
  VAR_9->capture_ltc = 1;
 }
 FUNC_1(&VAR_10, VAR_0);
 VAR_15 = FUNC_2(VAR_9, &VAR_10);
 if (VAR_15) {
  FUNC_4(VAR_7, "ltc read error (err=%d)\n", VAR_15);
  return ;
 }
 VAR_11 = 10*((VAR_10.stat[0] >> 8) & 0x3) + (VAR_10.stat[0] & 0xf);
 VAR_12 = 10*((VAR_10.stat[1] >> 16) & 0x7) + ((VAR_10.stat[1] >> 8) & 0xf);
 VAR_13 = 10*(VAR_10.stat[1] & 0x7) + ((VAR_10.stat[2] >> 16) & 0xf);
 VAR_14 = 10*((VAR_10.stat[2] >> 8) & 0x3) + (VAR_10.stat[2] & 0xf);

 FUNC_4(VAR_7, "timecode: %02u:%02u:%02u-%02u\n",
       VAR_11, VAR_12, VAR_13, VAR_14);
 FUNC_4(VAR_7, "raw: 0x%04x%06x%06x\n", VAR_10.stat[0] & 0x00ffff,
       VAR_10.stat[1] & 0xffffff, VAR_10.stat[2] & 0xffffff);


 if (!(VAR_10.stat[0] & VAR_5)) {
  FUNC_4(VAR_7, "warning: linear timecode not valid\n");
 }
}
