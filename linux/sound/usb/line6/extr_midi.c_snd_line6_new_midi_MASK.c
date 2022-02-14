
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_line6 {TYPE_1__* properties; int card; } ;
struct snd_rawmidi {int info_flags; int name; int id; } ;
struct TYPE_2__ {int name; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ,int,int,struct snd_rawmidi**) ;
 int FUNC_1 (struct snd_rawmidi*,int ,int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_line6 *VAR_7,
         struct snd_rawmidi **VAR_8)
{
 struct snd_rawmidi *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_7->card, "Line 6 MIDI", 0, 1, 1, VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = *VAR_8;
 FUNC_2(VAR_9->id, VAR_7->properties->id);
 FUNC_2(VAR_9->name, VAR_7->properties->name);

 VAR_9->info_flags =
     VAR_2 |
     VAR_1 | VAR_0;

 FUNC_1(VAR_9, VAR_4,
       &VAR_6);
 FUNC_1(VAR_9, VAR_3,
       &VAR_5);
 return 0;
}
