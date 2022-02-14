
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vendor ;
typedef int u32 ;
struct snd_dice {TYPE_1__* unit; struct snd_card* card; } ;
struct snd_card {char* driver; char* shortname; char* mixername; int longname; } ;
struct fw_device {int* config_rom; int max_speed; } ;
typedef int model ;
struct TYPE_2__ {int* directory; int device; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int*,int ,char*,int) ;
 struct fw_device* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct snd_dice*,int ,char*,int) ;
 int FUNC_5 (int ,int,char*,char*,char*,int,char*,int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct snd_dice *VAR_4)
{
 struct snd_card *VAR_5 = VAR_4->card;
 struct fw_device *VAR_6 = FUNC_3(VAR_4->unit);
 char VAR_7[32], VAR_8[32];
 unsigned int VAR_9;
 int VAR_10;

 FUNC_6(VAR_5->driver, "DICE");

 FUNC_6(VAR_5->shortname, "DICE");
 FUNC_0(VAR_3 < sizeof(VAR_5->shortname));
 VAR_10 = FUNC_4(VAR_4, VAR_2,
            VAR_5->shortname,
            sizeof(VAR_5->shortname));
 if (VAR_10 >= 0) {

  FUNC_0(sizeof(VAR_5->shortname) % 4 != 0);
  for (VAR_9 = 0; VAR_9 < sizeof(VAR_5->shortname); VAR_9 += 4)
   FUNC_7((u32 *)&VAR_5->shortname[VAR_9]);
  VAR_5->shortname[sizeof(VAR_5->shortname) - 1] = '\0';
 }

 FUNC_6(VAR_7, "?");
 FUNC_2(VAR_6->config_rom + 5, VAR_1, VAR_7, sizeof(VAR_7));
 FUNC_6(VAR_8, "?");
 FUNC_2(VAR_4->unit->directory, VAR_0, VAR_8, sizeof(VAR_8));
 FUNC_5(VAR_5->longname, sizeof(VAR_5->longname),
   "%s %s (serial %u) at %s, S%d",
   VAR_7, VAR_8, VAR_6->config_rom[4] & 0x3fffff,
   FUNC_1(&VAR_4->unit->device), 100 << VAR_6->max_speed);

 FUNC_6(VAR_5->mixername, "DICE");
}
