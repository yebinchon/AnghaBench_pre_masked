
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {struct oxygen* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_2__ {int (* dump_registers ) (struct oxygen*,struct snd_info_buffer*) ;} ;
struct oxygen {TYPE_1__ model; int mutex; scalar_t__ has_ac97_1; scalar_t__ has_ac97_0; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*,int) ;
 int FUNC_3 (struct oxygen*,int,int) ;
 int FUNC_4 (struct snd_info_buffer*,char*,...) ;
 int FUNC_5 (struct oxygen*,struct snd_info_buffer*) ;

__attribute__((used)) static void FUNC_6(struct snd_info_entry *VAR_3,
        struct snd_info_buffer *VAR_4)
{
 struct oxygen *VAR_5 = VAR_3->private_data;
 int VAR_6, VAR_7;

 switch (FUNC_2(VAR_5, VAR_2) & VAR_1) {
 case 130: VAR_6 = '6'; break;
 case 129: VAR_6 = '7'; break;
 case 128: VAR_6 = '8'; break;
 default: VAR_6 = '?'; break;
 }
 FUNC_4(VAR_4, "CMI878%c:\n", VAR_6);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6 += 0x10) {
  FUNC_4(VAR_4, "%02x:", VAR_6);
  for (VAR_7 = 0; VAR_7 < 0x10; ++VAR_7)
   FUNC_4(VAR_4, " %02x", FUNC_2(VAR_5, VAR_6 + VAR_7));
  FUNC_4(VAR_4, "\n");
 }
 if (FUNC_0(&VAR_5->mutex) < 0)
  return;
 if (VAR_5->has_ac97_0) {
  FUNC_4(VAR_4, "\nAC97:\n");
  for (VAR_6 = 0; VAR_6 < 0x80; VAR_6 += 0x10) {
   FUNC_4(VAR_4, "%02x:", VAR_6);
   for (VAR_7 = 0; VAR_7 < 0x10; VAR_7 += 2)
    FUNC_4(VAR_4, " %04x",
         FUNC_3(VAR_5, 0, VAR_6 + VAR_7));
   FUNC_4(VAR_4, "\n");
  }
 }
 if (VAR_5->has_ac97_1) {
  FUNC_4(VAR_4, "\nAC97 2:\n");
  for (VAR_6 = 0; VAR_6 < 0x80; VAR_6 += 0x10) {
   FUNC_4(VAR_4, "%02x:", VAR_6);
   for (VAR_7 = 0; VAR_7 < 0x10; VAR_7 += 2)
    FUNC_4(VAR_4, " %04x",
         FUNC_3(VAR_5, 1, VAR_6 + VAR_7));
   FUNC_4(VAR_4, "\n");
  }
 }
 FUNC_1(&VAR_5->mutex);
 if (VAR_5->model.dump_registers)
  VAR_5->model.dump_registers(VAR_5, VAR_4);
}
