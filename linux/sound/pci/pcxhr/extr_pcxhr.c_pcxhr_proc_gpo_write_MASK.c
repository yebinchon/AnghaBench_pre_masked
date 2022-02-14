
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcxhr {struct pcxhr_mgr* mgr; } ;
struct snd_info_entry {struct snd_pcxhr* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct pcxhr_mgr {int dsp_loaded; } ;
typedef int line ;


 int VAR_0 ;
 int FUNC_0 (struct pcxhr_mgr*,int) ;
 int FUNC_1 (struct snd_info_buffer*,char*,int) ;
 int FUNC_2 (char*,char*,int*) ;

__attribute__((used)) static void FUNC_3(struct snd_info_entry *VAR_1,
     struct snd_info_buffer *VAR_2)
{
 struct snd_pcxhr *VAR_3 = VAR_1->private_data;
 struct pcxhr_mgr *VAR_4 = VAR_3->mgr;
 char VAR_5[64];
 int VAR_6;

 if (!(VAR_4->dsp_loaded & (1 << VAR_0)))
  return;
 while (!FUNC_1(VAR_2, VAR_5, sizeof(VAR_5))) {
  if (FUNC_2(VAR_5, "GPO: 0x%x", &VAR_6) != 1)
   continue;
  FUNC_0(VAR_4, VAR_6);
 }
}
