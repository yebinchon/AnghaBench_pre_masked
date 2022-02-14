
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_device {int device; struct snd_card* card; } ;
struct snd_card {size_t number; } ;
struct seq_midisynth_client {int* ports_per_device; scalar_t__ num_ports; int seq_client; struct seq_midisynth_client** ports; } ;
struct seq_midisynth {int* ports_per_device; scalar_t__ num_ports; int seq_client; struct seq_midisynth** ports; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_midisynth_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct seq_midisynth_client*) ;
 struct seq_midisynth_client** VAR_2 ;
 struct snd_seq_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int
FUNC_6(struct device *VAR_3)
{
 struct snd_seq_device *VAR_4 = FUNC_5(VAR_3);
 struct seq_midisynth_client *VAR_5;
 struct seq_midisynth *VAR_6;
 struct snd_card *VAR_7 = VAR_4->card;
 int VAR_8 = VAR_4->device, VAR_9, VAR_10;

 FUNC_1(&VAR_1);
 VAR_5 = VAR_2[VAR_7->number];
 if (VAR_5 == ((void*)0) || VAR_5->ports[VAR_8] == ((void*)0)) {
  FUNC_2(&VAR_1);
  return -VAR_0;
 }
 VAR_10 = VAR_5->ports_per_device[VAR_8];
 VAR_5->ports_per_device[VAR_8] = 0;
 VAR_6 = VAR_5->ports[VAR_8];
 VAR_5->ports[VAR_8] = ((void*)0);
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  FUNC_4(&VAR_6[VAR_9]);
 FUNC_0(VAR_6);
 VAR_5->num_ports--;
 if (VAR_5->num_ports <= 0) {
  FUNC_3(VAR_5->seq_client);
  VAR_2[VAR_7->number] = ((void*)0);
  FUNC_0(VAR_5);
 }
 FUNC_2(&VAR_1);
 return 0;
}
