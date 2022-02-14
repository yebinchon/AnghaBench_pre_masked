
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_usb_midi {TYPE_1__* card; TYPE_2__* dev; } ;
struct snd_rawmidi_substream {int name; } ;
struct port_info {char* name; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int shortname; } ;


 int FUNC_0 (int *,char*,int,int) ;
 struct port_info* FUNC_1 (struct snd_usb_midi*,int) ;
 struct snd_rawmidi_substream* FUNC_2 (struct snd_usb_midi*,int,int) ;
 int FUNC_3 (int ,int,char const*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct snd_usb_midi *VAR_0,
           int VAR_1, int VAR_2,
           struct snd_rawmidi_substream **VAR_3)
{
 struct port_info *VAR_4;
 const char *VAR_5;

 struct snd_rawmidi_substream *VAR_6 =
  FUNC_2(VAR_0, VAR_1, VAR_2);
 if (!VAR_6) {
  FUNC_0(&VAR_0->dev->dev, "substream %d:%d not found\n", VAR_1,
   VAR_2);
  return;
 }


 VAR_4 = FUNC_1(VAR_0, VAR_2);
 VAR_5 = VAR_4 ? VAR_4->name : "%s MIDI %d";
 FUNC_3(VAR_6->name, sizeof(VAR_6->name),
   VAR_5, VAR_0->card->shortname, VAR_2 + 1);

 *VAR_3 = VAR_6;
}
