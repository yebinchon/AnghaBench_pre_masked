
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {struct cmipci* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct cmipci {scalar_t__ iobase; TYPE_1__* card; } ;
struct TYPE_2__ {int longname; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_0,
     struct snd_info_buffer *VAR_1)
{
 struct cmipci *VAR_2 = VAR_0->private_data;
 int VAR_3, VAR_4;

 FUNC_1(VAR_1, "%s\n", VAR_2->card->longname);
 for (VAR_3 = 0; VAR_3 < 0x94; VAR_3++) {
  if (VAR_3 == 0x28)
   VAR_3 = 0x90;
  VAR_4 = FUNC_0(VAR_2->iobase + VAR_3);
  if (VAR_3 % 4 == 0)
   FUNC_1(VAR_1, "\n%02x:", VAR_3);
  FUNC_1(VAR_1, " %02x", VAR_4);
 }
 FUNC_1(VAR_1, "\n");
}
