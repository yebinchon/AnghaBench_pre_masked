
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_uart16550 {int card; } ;
struct snd_rawmidi {int info_flags; struct snd_uart16550* private_data; int * streams; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,char*,int,int,int,struct snd_rawmidi**) ;
 int FUNC_1 (struct snd_rawmidi*,size_t,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct snd_uart16550 *VAR_7, int VAR_8,
          int VAR_9, int VAR_10,
          struct snd_rawmidi **VAR_11)
{
 struct snd_rawmidi *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_7->card, "UART Serial MIDI", VAR_8,
         VAR_9, VAR_10, &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;
 FUNC_1(VAR_12, VAR_3,
       &VAR_5);
 FUNC_1(VAR_12, VAR_4,
       &VAR_6);
 FUNC_3(VAR_12->name, "Serial MIDI");
 FUNC_2(&VAR_12->streams[VAR_4]);
 FUNC_2(&VAR_12->streams[VAR_3]);
 VAR_12->info_flags = VAR_2 |
          VAR_1 |
          VAR_0;
 VAR_12->private_data = VAR_7;
 if (VAR_11)
  *VAR_11 = VAR_12;
 return 0;
}
