
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcxhr {struct pcxhr_mgr* mgr; } ;
struct snd_info_entry {struct snd_pcxhr* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct pcxhr_mgr {size_t cur_clock_type; int dsp_loaded; int sample_rate_real; int name; scalar_t__ is_hr_stereo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcxhr_mgr*,int,int*) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_3,
       struct snd_info_buffer *VAR_4)
{
 struct snd_pcxhr *VAR_5 = VAR_3->private_data;
 struct pcxhr_mgr *VAR_6 = VAR_5->mgr;
 static const char *VAR_7[3] = {
  "Internal", "AES Sync", "AES 1"
 };
 static const char *VAR_8[7] = {
  "Internal", "Word", "AES Sync",
  "AES 1", "AES 2", "AES 3", "AES 4"
 };
 const char **VAR_9;
 int VAR_10;
 if (VAR_6->is_hr_stereo) {
  VAR_9 = VAR_7;
  VAR_10 = VAR_0;
 } else {
  VAR_9 = VAR_8;
  VAR_10 = VAR_1;
 }

 FUNC_1(VAR_4, "\n%s\n", VAR_6->name);
 FUNC_1(VAR_4, "Current Sample Clock\t: %s\n",
      VAR_9[VAR_6->cur_clock_type]);
 FUNC_1(VAR_4, "Current Sample Rate\t= %d\n",
      VAR_6->sample_rate_real);

 if (VAR_6->dsp_loaded & (1 << VAR_2)) {
  int VAR_11, VAR_12, VAR_13;
  for (VAR_11 = 1; VAR_11 <= VAR_10; VAR_11++) {
   VAR_12 = FUNC_0(VAR_6, VAR_11, &VAR_13);
   if (VAR_12)
    break;
   FUNC_1(VAR_4, "%s Clock\t\t= %d\n",
        VAR_9[VAR_11], VAR_13);
  }
 } else
  FUNC_1(VAR_4, "no firmware loaded\n");
 FUNC_1(VAR_4, "\n");
}
