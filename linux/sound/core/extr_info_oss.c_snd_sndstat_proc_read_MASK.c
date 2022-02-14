
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {int dummy; } ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_2__ {int machine; int version; int release; int nodename; int sysname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (struct snd_info_buffer*) ;
 int FUNC_2 (struct snd_info_buffer*,char*,...) ;
 int FUNC_3 (struct snd_info_buffer*,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_info_entry *VAR_5,
      struct snd_info_buffer *VAR_6)
{
 FUNC_2(VAR_6, "Sound Driver:3.8.1a-980706 (ALSA emulation code)\n");
 FUNC_2(VAR_6, "Kernel: %s %s %s %s %s\n",
      FUNC_0()->sysname,
      FUNC_0()->nodename,
      FUNC_0()->release,
      FUNC_0()->version,
      FUNC_0()->machine);
 FUNC_2(VAR_6, "Config options: 0\n");
 FUNC_2(VAR_6, "\nInstalled drivers: \n");
 FUNC_2(VAR_6, "Type 10: ALSA emulation\n");
 FUNC_2(VAR_6, "\nCard config: \n");
 FUNC_1(VAR_6);
 FUNC_3(VAR_6, "Audio devices", VAR_0);
 FUNC_3(VAR_6, "Synth devices", VAR_3);
 FUNC_3(VAR_6, "Midi devices", VAR_1);
 FUNC_3(VAR_6, "Timers", VAR_4);
 FUNC_3(VAR_6, "Mixers", VAR_2);
}
