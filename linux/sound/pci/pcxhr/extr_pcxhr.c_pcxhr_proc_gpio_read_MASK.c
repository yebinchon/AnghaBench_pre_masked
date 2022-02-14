
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcxhr {struct pcxhr_mgr* mgr; } ;
struct snd_info_entry {struct snd_pcxhr* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct pcxhr_mgr {int dsp_loaded; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcxhr_mgr*,int,int*) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_1,
     struct snd_info_buffer *VAR_2)
{
 struct snd_pcxhr *VAR_3 = VAR_1->private_data;
 struct pcxhr_mgr *VAR_4 = VAR_3->mgr;

 if (VAR_4->dsp_loaded & (1 << VAR_0)) {

  int VAR_5 = 0;
  FUNC_0(VAR_4, 1, &VAR_5);
  FUNC_1(VAR_2, "GPI: 0x%x\n", VAR_5);
  FUNC_0(VAR_4, 0, &VAR_5);
  FUNC_1(VAR_2, "GPO: 0x%x\n", VAR_5);
 } else
  FUNC_1(VAR_2, "no firmware loaded\n");
 FUNC_1(VAR_2, "\n");
}
